#pragma once
#include "DigitalOrder.h"
#include <iostream>
class InternationalDigitalOrder : public DigitalOrder {
public:
    void ProcessOrder() override {
        std::cout << "Processing International Digital Order" << std::endl;
    }
}; 