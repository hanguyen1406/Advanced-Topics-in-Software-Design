#ifndef OFFLINEORDERBUILDER_H
#define OFFLINEORDERBUILDER_H

#include "OrderBuilder.h"

class OfflineOrderBuilder : public OrderBuilder {
private:
    OfflineOrder* order;
public:
    OfflineOrderBuilder();
    ~OfflineOrderBuilder();
    void reset() override;
    void BuildCustomerInfo(const std::string& info) override;
    void BuildOrderItems(const std::vector<Item>& items) override;
    void BuildShippingInfo(const std::string& info) override;
    OfflineOrder* getResult();
};

#endif 