#include "OrderComponent.h"
#include <iostream>

OrderComponent::OrderComponent(IMediator* mediator, const std::string& orderId)
    : Component(mediator), orderId(orderId), status("PENDING") {}

void OrderComponent::placeOrder() {
    std::cout << "Order " << orderId << " placed" << std::endl;
    mediator->notify(this, "ORDER_PLACED");
}

void OrderComponent::cancelOrder() {
    std::cout << "Order " << orderId << " cancelled" << std::endl;
    mediator->notify(this, "ORDER_CANCELLED");
}

void OrderComponent::updateStatus(const std::string& newStatus) {
    status = newStatus;
    std::cout << "Order " << orderId << " status updated to: " << status << std::endl;
    mediator->notify(this, "STATUS_UPDATED");
}

std::string OrderComponent::getStatus() const {
    return status;
}

std::string OrderComponent::getOrderId() const {
    return orderId;
} 