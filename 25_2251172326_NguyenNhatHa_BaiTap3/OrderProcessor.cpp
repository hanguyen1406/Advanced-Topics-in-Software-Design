#include "OrderProcessor.h"
#include <iostream>

DomesticOrderProcessor::DomesticOrderProcessor(const std::string& region) : region(region) {}
OrderPrinter* DomesticOrderProcessor::createOrderPrinter() {
    return new DomesticOrderPrinter("Standard");
}
InternationalOrderProcessor::InternationalOrderProcessor(const std::string& country) : country(country) {}
OrderPrinter* InternationalOrderProcessor::createOrderPrinter() {
    return new InternationalOrderPrinter("English");
}

void OrderProcessor::processOrder(const Order& order) {
    std::cout << "Don hang " << order.getOrderId() << " da xu ly" << std::endl;
    OrderPrinter* printer = createOrderPrinter();
    printer->printOrder(order);
    delete printer;
}

std::string DomesticOrderProcessor::getProcessorInfo() const {
    return "Domestic Processor for region: " + region;
}

std::string InternationalOrderProcessor::getProcessorInfo() const {
    return "International Processor for country: " + country;
}