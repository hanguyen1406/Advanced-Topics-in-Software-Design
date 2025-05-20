public class OrderProcessorImpl implements OrderProcessor {
    @Override
    public void processOrder(Order order) {
        System.out.println("Processing order: " + order.getOrderId() + " with amount: " + order.getTotalAmount());
    }
}