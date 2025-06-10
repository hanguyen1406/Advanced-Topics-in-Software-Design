#ifndef ADVANCEDORDERMANAGER_H
#define ADVANCEDORDERMANAGER_H
#include "OrderManager.h"
#include <string>

class AdvancedOrderManager : public OrderManager {
private:
    std::string Type;
public:
    AdvancedOrderManager(std::shared_ptr<IOrder> order, const std::string& type);
    void AddNewOrder() override;
    std::string DisplayOrderInfo() override;
};

#endif // ADVANCEDORDERMANAGER_H 