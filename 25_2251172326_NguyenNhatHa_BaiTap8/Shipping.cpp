#include "Shipping.h"
#include <iostream>

Shipping::Shipping(IMediator* mediator, const std::string& shippingId)
    : mediator(mediator), shippingId(shippingId), status("PENDING") {}

void Shipping::shipOrder(const std::string& orderId) {
    std::cout << "Shipping order " << orderId << std::endl;
    mediator->notify(this, "SHIPPING_STARTED");
}

void Shipping::cancelShipping(const std::string& orderId) {
    std::cout << "Cancelling shipping for order " << orderId << std::endl;
    mediator->notify(this, "SHIPPING_CANCELLED");
}

void Shipping::updateStatus(const std::string& newStatus) {
    status = newStatus;
    std::cout << "Shipping " << shippingId << " status updated to: " << status << std::endl;
    mediator->notify(this, "STATUS_UPDATED");
}

std::string Shipping::getStatus() const {
    return status;
}

std::string Shipping::getShippingId() const {
    return shippingId;
} 