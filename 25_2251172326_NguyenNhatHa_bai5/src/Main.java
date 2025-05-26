public class Main {
    public static void main(String[] args) {
        Order order = new Order.Builder()
            .setOrderId("DH123")
            .addItem("Áo thun")
            .addItem("Quần jean")
            .setTotalAmount(350000)
            .setNote("Giao trong giờ hành chính")
            .build();

        order.showInfo();
    }
}
