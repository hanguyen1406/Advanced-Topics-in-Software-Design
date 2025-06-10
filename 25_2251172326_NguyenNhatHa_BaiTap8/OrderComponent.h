#ifndef ORDERCOMPONENT_H
#define ORDERCOMPONENT_H

#include "Component.h"
#include <string>

class OrderComponent : public Component {
private:
    std::string orderId;
    std::string status;

public:
    OrderComponent(IMediator* mediator, const std::string& orderId);
    void placeOrder();
    void cancelOrder();
    void updateStatus(const std::string& newStatus);
    std::string getStatus() const;
    std::string getOrderId() const;
};

#endif // ORDERCOMPONENT_H 