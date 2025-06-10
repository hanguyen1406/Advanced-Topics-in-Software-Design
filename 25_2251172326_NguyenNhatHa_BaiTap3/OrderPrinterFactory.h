#ifndef ORDER_PRINTER_FACTORY_H
#define ORDER_PRINTER_FACTORY_H

#include "OrderPrinter.h"

class OrderPrinterFactory {
public:
    virtual OrderPrinter* createPrinter() = 0;
    virtual ~OrderPrinterFactory() = default;
};

class ConcreteOrderPrinterFactory : public OrderPrinterFactory {
public:
    OrderPrinter* createPrinter() override;
};

#endif 