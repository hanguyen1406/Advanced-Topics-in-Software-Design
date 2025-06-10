#include "InternationalOrder.h"

std::string InternationalOrder::OrderFee() {
    return "International Fee: $20";
}

std::vector<std::string> InternationalOrder::PrintOrderList() {
    return orderList;
}

std::string InternationalOrder::getInfo() {
    return info;
}

void InternationalOrder::setInfo(const std::string& info) {
    this->info = info;
    orderList.push_back(info);
} 