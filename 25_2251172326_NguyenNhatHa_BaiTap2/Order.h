#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
private:
    std::string orderId;
    double totalAmount;

public:
    Order(const std::string& id, double amount);
    
    // Getters
    std::string getOrderId() const;
    double getTotalAmount() const;
};

#endif