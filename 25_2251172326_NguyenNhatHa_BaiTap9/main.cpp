#include "OrderProcessor.h"
#include "OnlineOrderProcessingStrategy.h"
#include "InStoreOrderProcessingStrategy.h"
#include "Order.h"

int main() {
    Order onlineOrder("001", "Alice");
    Order inStoreOrder("002", "Bob");

    OnlineOrderProcessingStrategy onlineStrategy;
    InStoreOrderProcessingStrategy inStoreStrategy;

    OrderProcessor processor;

    processor.setProcessingStrategy(&onlineStrategy);
    processor.processOrder(onlineOrder);

    processor.setProcessingStrategy(&inStoreStrategy);
    processor.processOrder(inStoreOrder);

    return 0;
} 