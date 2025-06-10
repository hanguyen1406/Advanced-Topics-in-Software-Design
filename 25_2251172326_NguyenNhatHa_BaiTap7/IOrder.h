#ifndef IORDER_H
#define IORDER_H
#include <string>
#include <vector>

class IOrder {
public:
    virtual std::string OrderFee() = 0;
    virtual std::vector<std::string> PrintOrderList() = 0;
    virtual std::string getInfo() = 0;
    virtual void setInfo(const std::string& info) = 0;
    virtual ~IOrder() {}
};

#endif // IORDER_H 