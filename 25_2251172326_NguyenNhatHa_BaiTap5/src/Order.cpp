#include "Order.h"
#include <iostream>

void OnlineOrder::showOrder() const {
    std::cout << "=== Online Order ===" << std::endl;
    std::cout << "Customer Info: " << customerInfo << std::endl;
    std::cout << "Items:" << std::endl;
    for (const auto& item : items) {
        std::cout << "- " << item.name << " (Quantity: " << item.quantity << ")" << std::endl;
    }
    std::cout << "Shipping Info: " << shippingInfo << std::endl;
    std::cout << "==================" << std::endl;
}

void OfflineOrder::showOrder() const {
    std::cout << "=== Offline Order ===" << std::endl;
    std::cout << "Customer Info: " << customerInfo << std::endl;
    std::cout << "Items:" << std::endl;
    for (const auto& item : items) {
        std::cout << "- " << item.name << " (Quantity: " << item.quantity << ")" << std::endl;
    }
    std::cout << "Pickup Info: " << shippingInfo << std::endl;
    std::cout << "===================" << std::endl;
} 