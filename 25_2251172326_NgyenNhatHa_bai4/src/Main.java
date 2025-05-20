public class Main {
    public static void main(String[] args) {
        Order order = new Order("ORD001", 150.50);
        OrderProcessor processor = new OrderProcessorImpl();
        OrderPrinter printer = new OrderPrinterImpl();
        OrderManager manager = new OrderManager(processor, printer);
        manager.manageOrder(order);
    }
}