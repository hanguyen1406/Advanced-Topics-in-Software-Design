#include "Order.h"
#include <iostream>

Order::Order(IMediator* mediator, const std::string& orderId)
    : mediator(mediator), orderId(orderId), status("PENDING") {}

void Order::placeOrder() {
    std::cout << "Order " << orderId << " placed" << std::endl;
    mediator->notify(this, "ORDER_PLACED");
}

void Order::cancelOrder() {
    std::cout << "Order " << orderId << " cancelled" << std::endl;
    mediator->notify(this, "ORDER_CANCELLED");
}

void Order::updateStatus(const std::string& newStatus) {
    status = newStatus;
    std::cout << "Order " << orderId << " status updated to: " << status << std::endl;
    mediator->notify(this, "STATUS_UPDATED");
}

std::string Order::getStatus() const {
    return status;
}

std::string Order::getOrderId() const {
    return orderId;
} 