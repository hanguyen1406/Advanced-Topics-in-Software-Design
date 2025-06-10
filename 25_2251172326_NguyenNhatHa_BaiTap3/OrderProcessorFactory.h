#ifndef ORDER_PROCESSOR_FACTORY_H
#define ORDER_PROCESSOR_FACTORY_H

#include "OrderProcessor.h"

class OrderProcessorFactory {
public:
    virtual OrderProcessor* createProcessor() = 0;
    virtual ~OrderProcessorFactory() = default;
};

class ConcreteOrderProcessorFactory : public OrderProcessorFactory {
public:
    OrderProcessor* createProcessor() override;
};

#endif 