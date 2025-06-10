#pragma once
#include "IOrderProcessingStrategy.h"
#include <iostream>

class OnlineOrderProcessingStrategy : public IOrderProcessingStrategy {
public:
    void process(const Order& order) override {
        std::cout << "Processing online order for: " << order.customerName << std::endl;
    }
}; 