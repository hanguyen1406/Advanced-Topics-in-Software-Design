#pragma once
#include "PhysicalOrder.h"
#include <iostream>
class DomesticPhysicalOrder : public PhysicalOrder {
public:
    void ProcessOrder() override {
        std::cout << "Processing Domestic Physical Order" << std::endl;
    }
}; 