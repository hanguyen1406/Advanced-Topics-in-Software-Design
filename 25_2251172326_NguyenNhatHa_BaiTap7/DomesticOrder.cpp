#include "DomesticOrder.h"

std::string DomesticOrder::OrderFee() {
    return "Domestic Fee: $5";
}

std::vector<std::string> DomesticOrder::PrintOrderList() {
    return orderList;
}

std::string DomesticOrder::getInfo() {
    return info;
}

void DomesticOrder::setInfo(const std::string& info) {
    this->info = info;
    orderList.push_back(info);
} 