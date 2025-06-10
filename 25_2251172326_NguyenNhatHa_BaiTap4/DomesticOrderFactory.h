#pragma once
#include "IOrderFactory.h"
#include "DomesticPhysicalOrder.h"
#include "DomesticDigitalOrder.h"
class DomesticOrderFactory : public IOrderFactory {
public:
    PhysicalOrder* CreatePhysicalOrder() override {
        return new DomesticPhysicalOrder();
    }
    DigitalOrder* CreateDigitalOrder() override {
        return new DomesticDigitalOrder();
    }
}; 