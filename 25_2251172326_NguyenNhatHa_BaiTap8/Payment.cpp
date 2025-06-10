#include "Payment.h"
#include <iostream>

Payment::Payment(IMediator* mediator, const std::string& paymentId)
    : mediator(mediator), paymentId(paymentId), status("PENDING") {}

void Payment::processPayment(const std::string& orderId) {
    std::cout << "Processing payment for order " << orderId << std::endl;
    mediator->notify(this, "PAYMENT_PROCESSED");
}

void Payment::refundPayment(const std::string& orderId) {
    std::cout << "Refunding payment for order " << orderId << std::endl;
    mediator->notify(this, "PAYMENT_REFUNDED");
}

void Payment::updateStatus(const std::string& newStatus) {
    status = newStatus;
    std::cout << "Payment " << paymentId << " status updated to: " << status << std::endl;
    mediator->notify(this, "STATUS_UPDATED");
}

std::string Payment::getStatus() const {
    return status;
}

std::string Payment::getPaymentId() const {
    return paymentId;
} 