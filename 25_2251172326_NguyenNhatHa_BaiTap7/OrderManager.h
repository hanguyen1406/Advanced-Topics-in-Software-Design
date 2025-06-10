#ifndef ORDERMANAGER_H
#define ORDERMANAGER_H
#include "IOrder.h"
#include <memory>

class OrderManager {
protected:
    std::shared_ptr<IOrder> order;
public:
    OrderManager(std::shared_ptr<IOrder> order);
    virtual void AddNewOrder();
    virtual std::string DisplayOrderInfo();
    virtual ~OrderManager() {}
};

#endif // ORDERMANAGER_H 