#include "OrderMediator.h"
#include "Order.h"
#include "Payment.h"
#include "Shipping.h"
#include <iostream>
#include <memory>

int main() {
    // Create mediator
    auto mediator = std::make_shared<OrderMediator>();

    // Create components
    auto order = std::make_shared<Order>(mediator.get(), "ORD001");
    auto payment = std::make_shared<Payment>(mediator.get(), "PAY001");
    auto shipping = std::make_shared<Shipping>(mediator.get(), "SHIP001");

    // Add components to mediator
    mediator->addOrder(order);
    mediator->addPayment(payment);
    mediator->addShipping(shipping);

    // Demonstrate order flow
    std::cout << "\n=== Processing Order ===" << std::endl;
    order->placeOrder();

    std::cout << "\n=== Cancelling Order ===" << std::endl;
    order->cancelOrder();

    return 0;
} 