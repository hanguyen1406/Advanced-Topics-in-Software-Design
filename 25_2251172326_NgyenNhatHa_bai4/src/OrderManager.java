public class OrderManager {
    private final OrderProcessor orderProcessor;
    private final OrderPrinter orderPrinter;

    public OrderManager(OrderProcessor orderProcessor, OrderPrinter orderPrinter) {
        this.orderProcessor = orderProcessor;
        this.orderPrinter = orderPrinter;
    }

    public void manageOrder(Order order) {
        orderProcessor.processOrder(order);
        orderPrinter.printOrder(order);
    }
}