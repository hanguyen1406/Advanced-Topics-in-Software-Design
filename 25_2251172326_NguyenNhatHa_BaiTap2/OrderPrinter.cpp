#include "OrderPrinter.h"
#include <iostream>

void OrderPrinter::printOrder(const Order& order) {
    std::cout << "Don hang " << order.getOrderId() 
              << " co tong tien: " << order.getTotalAmount() << std::endl;
}