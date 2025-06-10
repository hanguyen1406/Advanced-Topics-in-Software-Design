#include "Order.h"
#include "OrderProcessor.h"
#include <iostream>
#include <memory>

int main() {
    Order order("ORD001", 150000.0);
    std::unique_ptr<OrderProcessor> processorA = std::make_unique<DomesticOrderProcessor>("North");
    processorA->processOrder(order);

    std::unique_ptr<OrderProcessor> processorB = std::make_unique<InternationalOrderProcessor>("USA");
    processorB->processOrder(order);
    return 0;
}