#ifndef ONLINEORDERBUILDER_H
#define ONLINEORDERBUILDER_H

#include "OrderBuilder.h"

class OnlineOrderBuilder : public OrderBuilder {
private:
    OnlineOrder* order;
public:
    OnlineOrderBuilder();
    ~OnlineOrderBuilder();
    void reset() override;
    void BuildCustomerInfo(const std::string& info) override;
    void BuildOrderItems(const std::vector<Item>& items) override;
    void BuildShippingInfo(const std::string& info) override;
    OnlineOrder* getResult();
};

#endif 