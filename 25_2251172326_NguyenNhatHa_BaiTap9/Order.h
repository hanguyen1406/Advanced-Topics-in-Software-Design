#pragma once
#include <string>

class Order {
public:
    std::string orderId;
    std::string customerName;

    Order(const std::string& id, const std::string& name)
        : orderId(id), customerName(name) {}
}; 