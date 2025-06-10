#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string Brand;
    int MaxSpeed;

public:
    Vehicle(string brand, int maxSpeed) : Brand(brand), MaxSpeed(maxSpeed) {}

    void showInfo() {
        cout << "Brand: " << Brand << ", Max Speed: " << MaxSpeed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string brand, int maxSpeed) : Vehicle(brand, maxSpeed) {}

    void Honk() {
        cout << Brand << " car: Beep beep!" << endl;
    }
};

class Motorbike : public Vehicle {
public:
    Motorbike(string brand, int maxSpeed) : Vehicle(brand, maxSpeed) {}

    void RevEngine() {
        cout << Brand << " motorbike: Vroom vroom!" << endl;
    }
};

int main() {
    Car myCar("Toyota", 180);
    Motorbike myBike("Yamaha", 150);

    cout << "Car Information:\n";
    myCar.showInfo();
    myCar.Honk();

    cout << "\nMotorbike Information:\n";
    myBike.showInfo();
    myBike.RevEngine();

    return 0;
}
