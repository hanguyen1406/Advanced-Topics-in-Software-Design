#include<iostream>
#include "OrderManager.h"

OrderManager::OrderManager(std::shared_ptr<IOrder> order) : order(order) {}

void OrderManager::AddNewOrder() {
    std::string info;
    std::cout << "Enter order info: ";
    std::getline(std::cin, info);
    order->setInfo(info);
}

std::string OrderManager::DisplayOrderInfo() {
    std::string result = "Order Info: " + order->getInfo() + "\n";
    result += "Fee: " + order->OrderFee() + "\n";
    result += "Order List: ";
    for (const auto& item : order->PrintOrderList()) {
        result += item + ", ";
    }
    return result;
} 