#include "OrderPrinterFactory.h"

OrderPrinter* ConcreteOrderPrinterFactory::createPrinter() {
    return new ConcreteOrderPrinter();
} 