#include "WarehouseAdapter.h"
#include <iostream>

int main() {
    // Tạo đối tượng API mới
    NewWarehouseAPI warehouseApi;

    // Tạo adapter
    WarehouseAdapter adapter(&warehouseApi);

    // Tạo dữ liệu đơn hàng
    OrderData order;
    order.productName = "Laptop";
    order.quantity = 5;

    // Client chỉ biết đến OrderInterface
    OrderInterface* orderSystem = &adapter;
    orderSystem->placeOrder(order);

    return 0;
} 