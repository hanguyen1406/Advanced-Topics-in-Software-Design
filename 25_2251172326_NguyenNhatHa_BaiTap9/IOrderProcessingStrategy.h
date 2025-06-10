#pragma once
#include "Order.h"

class IOrderProcessingStrategy {
public:
    virtual void process(const Order& order) = 0;
    virtual ~IOrderProcessingStrategy() = default;
}; 