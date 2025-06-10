#ifndef ORDERMEDIATOR_H
#define ORDERMEDIATOR_H

#include "IMediator.h"
#include "Order.h"
#include "Payment.h"
#include "Shipping.h"
#include <memory>
#include <unordered_map>

class OrderMediator : public IMediator {
private:
    std::unordered_map<std::string, std::shared_ptr<Order>> orders;
    std::unordered_map<std::string, std::shared_ptr<Payment>> payments;
    std::unordered_map<std::string, std::shared_ptr<Shipping>> shippings;

    void processOrder(const std::string& orderId);
    void cancelOrder(const std::string& orderId);

public:
    void addOrder(std::shared_ptr<Order> order);
    void addPayment(std::shared_ptr<Payment> payment);
    void addShipping(std::shared_ptr<Shipping> shipping);

    void notify(Order* sender, const std::string& event) override;
    void notify(Payment* sender, const std::string& event) override;
    void notify(Shipping* sender, const std::string& event) override;
};

#endif // ORDERMEDIATOR_H