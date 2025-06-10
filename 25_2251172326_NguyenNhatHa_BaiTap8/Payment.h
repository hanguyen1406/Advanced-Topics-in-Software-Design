#ifndef PAYMENT_H
#define PAYMENT_H

#include "IMediator.h"
#include <string>

class Payment {
protected:
    IMediator* mediator;
    std::string paymentId;
    std::string status;

public:
    Payment(IMediator* mediator, const std::string& paymentId);
    void processPayment(const std::string& orderId);
    void refundPayment(const std::string& orderId);
    void updateStatus(const std::string& newStatus);
    std::string getStatus() const;
    std::string getPaymentId() const;
};

#endif // PAYMENT_H 