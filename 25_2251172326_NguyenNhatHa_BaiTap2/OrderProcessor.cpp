#include "OrderProcessor.h"
#include <iostream>

void OrderProcessor::processOrder(const Order& order) {
    std::cout << "Don hang " << order.getOrderId() << " da xu ly" << std::endl;
}