#include <iostream>
#include "DomesticOrderFactory.h"
#include "InternationalOrderFactory.h"
#include "Client.h"

int main() {
    IOrderFactory* domesticFactory = new DomesticOrderFactory();
    IOrderFactory* internationalFactory = new InternationalOrderFactory();

    std::cout << "Domestic Orders:" << std::endl;
    Client client1(domesticFactory);
    client1.displayProcessing();

    std::cout << "\nInternational Orders:" << std::endl;
    Client client2(internationalFactory);
    client2.displayProcessing();

    delete domesticFactory;
    delete internationalFactory;
    return 0;
} 