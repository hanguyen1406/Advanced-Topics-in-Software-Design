#pragma once
#include "IOrderFactory.h"
class Client {
private:
    IOrderFactory* factory;
public:
    Client(IOrderFactory* f) : factory(f) {}
    void displayProcessing() {
        PhysicalOrder* pOrder = factory->CreatePhysicalOrder();
        DigitalOrder* dOrder = factory->CreateDigitalOrder();
        pOrder->ProcessOrder();
        dOrder->ProcessOrder();
        delete pOrder;
        delete dOrder;
    }
}; 