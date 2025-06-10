#ifndef ORDER_PROCESSOR_H
#define ORDER_PROCESSOR_H
#include "Order.h"
#include "OrderPrinter.h"
#include <iostream>

class OrderProcessor {
public:
    virtual void processOrder(const Order& order);
    virtual OrderPrinter* createOrderPrinter() = 0;
    virtual ~OrderProcessor() = default;
};

class ConcreteOrderProcessor : public OrderProcessor {
public:
    OrderPrinter* createOrderPrinter() override {
        return new ConcreteOrderPrinter();
    }
};

class DomesticOrderProcessor : public OrderProcessor {
private:
    std::string region;
public:
    DomesticOrderProcessor(const std::string& region);
    OrderPrinter* createOrderPrinter() override;
    std::string getProcessorInfo() const;
};

class InternationalOrderProcessor : public OrderProcessor {
private:
    std::string country;
public:
    InternationalOrderProcessor(const std::string& country);
    OrderPrinter* createOrderPrinter() override;
    std::string getProcessorInfo() const;
};

#endif