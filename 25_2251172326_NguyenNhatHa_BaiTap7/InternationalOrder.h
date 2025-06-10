#ifndef INTERNATIONALORDER_H
#define INTERNATIONALORDER_H
#include "IOrder.h"

class InternationalOrder : public IOrder {
private:
    std::string info;
    std::vector<std::string> orderList;
public:
    std::string OrderFee() override;
    std::vector<std::string> PrintOrderList() override;
    std::string getInfo() override;
    void setInfo(const std::string& info) override;
};

#endif // INTERNATIONALORDER_H 