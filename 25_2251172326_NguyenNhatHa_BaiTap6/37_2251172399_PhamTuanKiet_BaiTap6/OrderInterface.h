#pragma once
#include "OrderData.h"

class OrderInterface {
public:
    virtual void placeOrder(const OrderData& data) = 0;
    virtual ~OrderInterface() = default;
}; 