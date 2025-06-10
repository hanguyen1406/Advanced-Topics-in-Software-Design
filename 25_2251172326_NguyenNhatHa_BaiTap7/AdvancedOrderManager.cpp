#include "AdvancedOrderManager.h"
#include <iostream>

AdvancedOrderManager::AdvancedOrderManager(std::shared_ptr<IOrder> order, const std::string& type)
    : OrderManager(order), Type(type) {}

void AdvancedOrderManager::AddNewOrder() {
    std::string info;
    std::cout << "Enter advanced order info (" << Type << "): ";
    std::getline(std::cin, info);
    order->setInfo("[" + Type + "] " + info);
}

std::string AdvancedOrderManager::DisplayOrderInfo() {
    std::string result = "[Advanced] Type: " + Type + "\n";
    result += OrderManager::DisplayOrderInfo();
    return result;
} 