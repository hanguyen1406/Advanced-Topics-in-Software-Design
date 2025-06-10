#include <iostream>
#include <memory>
#include "InternationalOrder.h"
#include "DomesticOrder.h"
#include "OrderManager.h"
#include "AdvancedOrderManager.h"

int main() {
    std::shared_ptr<IOrder> internationalOrder = std::make_shared<InternationalOrder>();
    std::shared_ptr<IOrder> domesticOrder = std::make_shared<DomesticOrder>();

    OrderManager manager1(internationalOrder);
    AdvancedOrderManager manager2(domesticOrder, "Express");

    std::cout << "--- Add International Order ---" << std::endl;
    manager1.AddNewOrder();
    std::cout << manager1.DisplayOrderInfo() << std::endl;

    std::cout << "--- Add Domestic Order (Advanced) ---" << std::endl;
    manager2.AddNewOrder();
    std::cout << manager2.DisplayOrderInfo() << std::endl;

    return 0;
} 