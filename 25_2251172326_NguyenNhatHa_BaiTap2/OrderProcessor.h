#ifndef ORDER_PROCESSOR_H
#define ORDER_PROCESSOR_H

#include "Order.h"

class OrderProcessor {
public:
    void processOrder(const Order& order);
};

#endif