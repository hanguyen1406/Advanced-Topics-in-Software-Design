package main;

public class OrderPrinter {
    public void print(Order order) {
        System.out.println("Đơn hàng " + order.getOrderId() + " có tổng tiền: " + order.getTotalAmount());
    }
}
