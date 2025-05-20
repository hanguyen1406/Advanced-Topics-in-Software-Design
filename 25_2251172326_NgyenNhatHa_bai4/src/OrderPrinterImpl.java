public class OrderPrinterImpl implements OrderPrinter {
    @Override
    public void printOrder(Order order) {
        System.out.println("Printing order: [OrderId] " + order.getOrderId() + " with total: [" + order.getTotalAmount() + "]");
    }
}