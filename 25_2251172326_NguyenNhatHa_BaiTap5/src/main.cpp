#include <iostream>
#include "OnlineOrderBuilder.h"
#include "OfflineOrderBuilder.h"
#include "Director.h"

int main() {
    std::vector<Item> items = { {"Book", 2}, {"Pen", 5} };

    OnlineOrderBuilder onlineBuilder;
    Director director(&onlineBuilder);
    director.makeOnlineOrder("Alice", items, "123 Main St, City");
    OnlineOrder* onlineOrder = onlineBuilder.getResult();
    onlineOrder->showOrder();
    delete onlineOrder;

    std::cout << "----------------------\n";

    OfflineOrderBuilder offlineBuilder;
    director.setBuilder(&offlineBuilder);
    director.makePickupOrder("Bob", items, "Store #5, City Center");
    OfflineOrder* offlineOrder = offlineBuilder.getResult();
    offlineOrder->showOrder();
    delete offlineOrder;

    return 0;
} 