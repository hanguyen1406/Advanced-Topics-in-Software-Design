#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "OrderBuilder.h"
#include <vector>
#include <string>

class Director {
private:
    OrderBuilder* builder;
public:
    Director(OrderBuilder* builder);
    void setBuilder(OrderBuilder* builder);
    void makeOnlineOrder(const std::string& customer, const std::vector<Item>& items, const std::string& shipping);
    void makePickupOrder(const std::string& customer, const std::vector<Item>& items, const std::string& pickupInfo);
};

#endif 