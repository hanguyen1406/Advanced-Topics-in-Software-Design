#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include <string>

class Order;
class Payment;
class Shipping;

class IMediator {
public:
    virtual ~IMediator() = default;
    virtual void notify(Order* sender, const std::string& event) = 0;
    virtual void notify(Payment* sender, const std::string& event) = 0;
    virtual void notify(Shipping* sender, const std::string& event) = 0;
};

#endif // IMEDIATOR_H 