#include "OrderMediator.h"
#include <iostream>
#include <algorithm>

void OrderMediator::addOrder(std::shared_ptr<Order> order) {
    orders[order->getOrderId()] = order;
}

void OrderMediator::addPayment(std::shared_ptr<Payment> payment) {
    payments[payment->getPaymentId()] = payment;
}

void OrderMediator::addShipping(std::shared_ptr<Shipping> shipping) {
    shippings[shipping->getShippingId()] = shipping;
}

void OrderMediator::notify(Order* sender, const std::string& event) {
    if (event == "ORDER_PLACED") {
        std::cout << "Mediator: Processing new order " << sender->getOrderId() << std::endl;
        processOrder(sender->getOrderId());
    }
    else if (event == "ORDER_CANCELLED") {
        std::cout << "Mediator: Cancelling order " << sender->getOrderId() << std::endl;
        cancelOrder(sender->getOrderId());
    }
}

void OrderMediator::notify(Payment* sender, const std::string& event) {
    if (event == "PAYMENT_PROCESSED") {
        std::cout << "Mediator: Payment processed, starting shipping" << std::endl;
        // Start shipping
        for (const auto& shipping : shippings) {
            shipping.second->shipOrder(sender->getPaymentId());
            break;
        }
    }
    else if (event == "PAYMENT_REFUNDED") {
        std::cout << "Mediator: Payment refunded, cancelling shipping" << std::endl;
        // Cancel shipping
        for (const auto& shipping : shippings) {
            shipping.second->cancelShipping(sender->getPaymentId());
        }
    }
}

void OrderMediator::notify(Shipping* sender, const std::string& event) {
    if (event == "SHIPPING_STARTED") {
        std::cout << "Mediator: Shipping started for order" << std::endl;
        // Update order status
        for (const auto& order : orders) {
            order.second->updateStatus("SHIPPING");
            break;
        }
    }
    else if (event == "SHIPPING_CANCELLED") {
        std::cout << "Mediator: Shipping cancelled for order" << std::endl;
        // Update order status
        for (const auto& order : orders) {
            order.second->updateStatus("CANCELLED");
            break;
        }
    }
}

void OrderMediator::processOrder(const std::string& orderId) {
    auto it = orders.find(orderId);
    if (it != orders.end()) {
        it->second->updateStatus("PROCESSING");
        // Find corresponding payment and process it
        for (const auto& payment : payments) {
            payment.second->processPayment(orderId);
            break;
        }
    }
}

void OrderMediator::cancelOrder(const std::string& orderId) {
    auto it = orders.find(orderId);
    if (it != orders.end()) {
        it->second->updateStatus("CANCELLED");
        // Cancel payment and shipping
        for (const auto& payment : payments) {
            payment.second->refundPayment(orderId);
        }
        for (const auto& shipping : shippings) {
            shipping.second->cancelShipping(orderId);
        }
    }
}