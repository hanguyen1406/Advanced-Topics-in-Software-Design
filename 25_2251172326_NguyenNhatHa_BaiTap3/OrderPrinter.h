#ifndef ORDER_PRINTER_H
#define ORDER_PRINTER_H

#include "Order.h"

class OrderPrinter {
public:
    virtual void printOrder(const Order& order) = 0;
    virtual ~OrderPrinter() = default;
};

class ConcreteOrderPrinter : public OrderPrinter {
public:
    void printOrder(const Order& order) override;
};

class DomesticOrderPrinter : public OrderPrinter {
private:
    std::string format;
public:
    DomesticOrderPrinter(const std::string& format);
    void printOrder(const Order& order) override;
};

class InternationalOrderPrinter : public OrderPrinter {
private:
    std::string language;
public:
    InternationalOrderPrinter(const std::string& language);
    void printOrder(const Order& order) override;
};

#endif