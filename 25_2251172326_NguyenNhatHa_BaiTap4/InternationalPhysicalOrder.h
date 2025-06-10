#pragma once
#include "PhysicalOrder.h"
#include <iostream>
class InternationalPhysicalOrder : public PhysicalOrder {
public:
    void ProcessOrder() override {
        std::cout << "Processing International Physical Order" << std::endl;
    }
}; 