#pragma once
class DigitalOrder {
public:
    virtual void ProcessOrder() = 0;
    virtual ~DigitalOrder() {}
}; 