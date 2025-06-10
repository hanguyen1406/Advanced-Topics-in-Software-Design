#pragma once
#include "IOrderProcessingStrategy.h"

class OrderProcessor {
private:
    IOrderProcessingStrategy* processingStrategy;
public:
    OrderProcessor(IOrderProcessingStrategy* strategy = nullptr)
        : processingStrategy(strategy) {}

    void setProcessingStrategy(IOrderProcessingStrategy* strategy) {
        processingStrategy = strategy;
    }

    void processOrder(const Order& order) {
        if (processingStrategy) {
            processingStrategy->process(order);
        }
    }
}; 