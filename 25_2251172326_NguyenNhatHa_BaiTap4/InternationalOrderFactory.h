#pragma once
#include "IOrderFactory.h"
#include "InternationalPhysicalOrder.h"
#include "InternationalDigitalOrder.h"
class InternationalOrderFactory : public IOrderFactory {
public:
    PhysicalOrder* CreatePhysicalOrder() override {
        return new InternationalPhysicalOrder();
    }
    DigitalOrder* CreateDigitalOrder() override {
        return new InternationalDigitalOrder();
    }
}; 