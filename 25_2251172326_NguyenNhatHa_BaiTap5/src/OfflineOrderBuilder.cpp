#include "OfflineOrderBuilder.h"

OfflineOrderBuilder::OfflineOrderBuilder() {
    order = new OfflineOrder();
}

OfflineOrderBuilder::~OfflineOrderBuilder() {
    delete order;
}

void OfflineOrderBuilder::reset() {
    delete order;
    order = new OfflineOrder();
}

void OfflineOrderBuilder::BuildCustomerInfo(const std::string& info) {
    order->setCustomerInfo(info);
}

void OfflineOrderBuilder::BuildOrderItems(const std::vector<Item>& items) {
    order->setOrderItems(items);
}

void OfflineOrderBuilder::BuildShippingInfo(const std::string& info) {
    order->setShippingInfo(info);
}

OfflineOrder* OfflineOrderBuilder::getResult() {
    OfflineOrder* result = order;
    order = nullptr;
    return result;
} 