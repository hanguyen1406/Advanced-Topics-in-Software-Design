#ifndef ORDER_H
#define ORDER_H

#include "IMediator.h"
#include <string>

class Order {
protected:
    IMediator* mediator;
    std::string orderId;
    std::string status;

public:
    Order(IMediator* mediator, const std::string& orderId);
    void placeOrder();
    void cancelOrder();
    void updateStatus(const std::string& newStatus);
    std::string getStatus() const;
    std::string getOrderId() const;
};

#endif // ORDER_H 