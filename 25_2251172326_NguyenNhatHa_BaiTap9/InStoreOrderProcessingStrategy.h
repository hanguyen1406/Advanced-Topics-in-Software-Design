#pragma once
#include "IOrderProcessingStrategy.h"
#include <iostream>

class InStoreOrderProcessingStrategy : public IOrderProcessingStrategy {
public:
    void process(const Order& order) override {
        std::cout << "Processing in-store order for: " << order.customerName << std::endl;
    }
}; 