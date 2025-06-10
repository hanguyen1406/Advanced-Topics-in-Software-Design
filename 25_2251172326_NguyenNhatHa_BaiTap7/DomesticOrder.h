#ifndef DOMESTICORDER_H
#define DOMESTICORDER_H
#include "IOrder.h"

class DomesticOrder : public IOrder {
private:
    std::string info;
    std::vector<std::string> orderList;
public:
    std::string OrderFee() override;
    std::vector<std::string> PrintOrderList() override;
    std::string getInfo() override;
    void setInfo(const std::string& info) override;
};

#endif // DOMESTICORDER_H 