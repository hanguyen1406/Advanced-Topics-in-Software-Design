#include "OrderPrinter.h"
#include <iostream>

void ConcreteOrderPrinter::printOrder(const Order& order) {
    std::cout << "Don hang " << order.getOrderId() 
              << " co tong tien: " << order.getTotalAmount() << std::endl;
}

DomesticOrderPrinter::DomesticOrderPrinter(const std::string& format) : format(format) {}
void DomesticOrderPrinter::printOrder(const Order& order) {
    std::cout << "[Domestic-" << format << "] Don hang " << order.getOrderId()
              << " co tong tien: " << order.getTotalAmount() << std::endl;
}

InternationalOrderPrinter::InternationalOrderPrinter(const std::string& language) : language(language) {}
void InternationalOrderPrinter::printOrder(const Order& order) {
    std::cout << "[International-" << language << "] Don hang " << order.getOrderId()
              << " co tong tien: " << order.getTotalAmount() << std::endl;
}