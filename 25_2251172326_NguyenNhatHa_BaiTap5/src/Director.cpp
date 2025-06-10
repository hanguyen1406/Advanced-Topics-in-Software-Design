#include "Director.h"

Director::Director(OrderBuilder* builder) : builder(builder) {}

void Director::setBuilder(OrderBuilder* builder) {
    this->builder = builder;
}

void Director::makeOnlineOrder(const std::string& customer, const std::vector<Item>& items, const std::string& shipping) {
    builder->reset();
    builder->BuildCustomerInfo(customer);
    builder->BuildOrderItems(items);
    builder->BuildShippingInfo(shipping);
}

void Director::makePickupOrder(const std::string& customer, const std::vector<Item>& items, const std::string& pickupInfo) {
    builder->reset();
    builder->BuildCustomerInfo(customer);
    builder->BuildOrderItems(items);
    builder->BuildShippingInfo(pickupInfo);
} 