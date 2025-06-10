#pragma once
class PhysicalOrder {
public:
    virtual void ProcessOrder() = 0;
    virtual ~PhysicalOrder() {}
}; 