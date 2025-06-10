#include "OrderProcessorFactory.h"

OrderProcessor* ConcreteOrderProcessorFactory::createProcessor() {
    return new ConcreteOrderProcessor();
} 