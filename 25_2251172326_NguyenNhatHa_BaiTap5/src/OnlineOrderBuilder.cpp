#include "OnlineOrderBuilder.h"

OnlineOrderBuilder::OnlineOrderBuilder() {
    order = new OnlineOrder();
}

OnlineOrderBuilder::~OnlineOrderBuilder() {
    delete order;
}

void OnlineOrderBuilder::reset() {
    delete order;
    order = new OnlineOrder();
}

void OnlineOrderBuilder::BuildCustomerInfo(const std::string& info) {
    order->setCustomerInfo(info);
}

void OnlineOrderBuilder::BuildOrderItems(const std::vector<Item>& items) {
    order->setOrderItems(items);
}

void OnlineOrderBuilder::BuildShippingInfo(const std::string& info) {
    order->setShippingInfo(info);
}

OnlineOrder* OnlineOrderBuilder::getResult() {
    OnlineOrder* result = order;
    order = nullptr;
    return result;
} 