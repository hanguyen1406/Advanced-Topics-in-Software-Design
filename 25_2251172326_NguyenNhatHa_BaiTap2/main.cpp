#include "Order.h"
#include "OrderProcessor.h"
#include "OrderPrinter.h"
#include <iostream>

int main() {
    Order order("ORD001", 150000.0);
    
    OrderProcessor processor;
    processor.processOrder(order);
    
    OrderPrinter printer;
    printer.printOrder(order);
    
    return 0;
}