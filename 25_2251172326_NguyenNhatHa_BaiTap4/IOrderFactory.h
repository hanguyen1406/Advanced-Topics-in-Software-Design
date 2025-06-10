#pragma once
#include "PhysicalOrder.h"
#include "DigitalOrder.h"
class IOrderFactory {
public:
    virtual PhysicalOrder* CreatePhysicalOrder() = 0;
    virtual DigitalOrder* CreateDigitalOrder() = 0;
    virtual ~IOrderFactory() {}
}; 