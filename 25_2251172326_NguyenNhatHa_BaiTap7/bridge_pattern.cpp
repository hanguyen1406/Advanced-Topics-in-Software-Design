#include <iostream>
#include <string>

// Implementation interface
class DrawingAPI {
public:
    virtual void drawCircle(double x, double y, double radius) = 0;
    virtual ~DrawingAPI() {}
};

// Concrete Implementation 1
class DrawingAPI1 : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "API1.circle at " << x << ":" << y << " radius " << radius << std::endl;
    }
};

// Concrete Implementation 2
class DrawingAPI2 : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "API2.circle at " << x << ":" << y << " radius " << radius << std::endl;
    }
};

// Abstraction
class Shape {
protected:
    DrawingAPI* drawingAPI;
public:
    Shape(DrawingAPI* drawingAPI) : drawingAPI(drawingAPI) {}
    virtual void draw() = 0;
    virtual void resizeByPercentage(double pct) = 0;
    virtual ~Shape() {}
};

// Refined Abstraction
class CircleShape : public Shape {
private:
    double x, y, radius;
public:
    CircleShape(double x, double y, double radius, DrawingAPI* drawingAPI)
        : Shape(drawingAPI), x(x), y(y), radius(radius) {}

    void draw() override {
        drawingAPI->drawCircle(x, y, radius);
    }

    void resizeByPercentage(double pct) override {
        radius *= pct;
    }
};

int main() {
    DrawingAPI* api1 = new DrawingAPI1();
    DrawingAPI* api2 = new DrawingAPI2();

    Shape* shapes[2] = {
        new CircleShape(1, 2, 3, api1),
        new CircleShape(5, 7, 11, api2)
    };

    for (Shape* shape : shapes) {
        shape->draw();
        shape->resizeByPercentage(2.5);
        shape->draw();
    }

    // Cleanup
    for (Shape* shape : shapes) {
        delete shape;
    }
    delete api1;
    delete api2;

    return 0;
} 