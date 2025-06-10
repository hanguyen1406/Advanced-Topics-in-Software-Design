#pragma once
#include "DigitalOrder.h"
#include <iostream>
class DomesticDigitalOrder : public DigitalOrder {
public:
    void ProcessOrder() override {
        std::cout << "Processing Domestic Digital Order" << std::endl;
    }
}; 