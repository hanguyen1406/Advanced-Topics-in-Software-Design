#pragma once
#include "OrderInterface.h"
#include "NewWarehouseAPI.h"

class WarehouseAdapter : public OrderInterface {
private:
    NewWarehouseAPI* adaptee;
public:
    WarehouseAdapter(NewWarehouseAPI* api) : adaptee(api) {}

    void placeOrder(const OrderData& data) override {
        // Chuyển đổi OrderData sang WarehouseOrderDTO
        WarehouseOrderDTO dto;
        dto.item = data.productName;
        dto.amount = data.quantity;
        adaptee->sendOrder(dto);
    }
}; 