#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

struct Item {
    std::string name;
    int quantity;
};

class Order {
protected:
    std::string customerInfo;
    std::vector<Item> items;
    std::string shippingInfo;
public:
    virtual ~Order() {}
    void setCustomerInfo(const std::string& info) { customerInfo = info; }
    void setOrderItems(const std::vector<Item>& orderItems) { items = orderItems; }
    void setShippingInfo(const std::string& info) { shippingInfo = info; }
    virtual void showOrder() const = 0;
};

class OnlineOrder : public Order {
public:
    void showOrder() const override;
};

class OfflineOrder : public Order {
public:
    void showOrder() const override;
};

#endif 