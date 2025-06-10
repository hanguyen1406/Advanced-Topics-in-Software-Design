#ifndef ORDERBUILDER_H
#define ORDERBUILDER_H

#include "Order.h"

class OrderBuilder {
public:
    virtual ~OrderBuilder() {}
    virtual void reset() = 0;
    virtual void BuildCustomerInfo(const std::string& info) = 0;
    virtual void BuildOrderItems(const std::vector<Item>& items) = 0;
    virtual void BuildShippingInfo(const std::string& info) = 0;
};

#endif 