#pragma once
#include "WarehouseOrderDTO.h"
#include <iostream>

class NewWarehouseAPI {
public:
    void sendOrder(const WarehouseOrderDTO& dto) {
        std::cout << "Sending order to warehouse: " << dto.item << ", amount: " << dto.amount << std::endl;
    }
}; 