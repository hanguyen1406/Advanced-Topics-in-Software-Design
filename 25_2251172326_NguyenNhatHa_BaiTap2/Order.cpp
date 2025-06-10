#include "Order.h"

Order::Order(const std::string& id, double amount) 
    : orderId(id), totalAmount(amount) {}

std::string Order::getOrderId() const {
    return orderId;
}

double Order::getTotalAmount() const {
    return totalAmount;
}