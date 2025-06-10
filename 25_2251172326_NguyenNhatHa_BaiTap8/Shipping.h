#ifndef SHIPPING_H
#define SHIPPING_H

#include "IMediator.h"
#include <string>

class Shipping {
protected:
    IMediator* mediator;
    std::string shippingId;
    std::string status;

public:
    Shipping(IMediator* mediator, const std::string& shippingId);
    void shipOrder(const std::string& orderId);
    void cancelShipping(const std::string& orderId);
    void updateStatus(const std::string& newStatus);
    std::string getStatus() const;
    std::string getShippingId() const;
};

#endif // SHIPPING_H 