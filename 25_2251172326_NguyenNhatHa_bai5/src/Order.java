import java.util.ArrayList;
import java.util.List;

public class Order {
    private String orderId;
    private List<String> items;
    private double totalAmount;
    private String note;

    // private constructor để ép dùng builder
    private Order(String orderId, List<String> items, double totalAmount, String note) {
        this.orderId = orderId;
        this.items = items;
        this.totalAmount = totalAmount;
        this.note = note;
    }

    // Hiển thị thông tin đơn hàng
    public void showInfo() {
        System.out.println("Đơn hàng: " + orderId);
        System.out.println("Sản phẩm: " + items);
        System.out.println("Tổng tiền: " + totalAmount);
        System.out.println("Ghi chú: " + note);
    }

    // Builder bên trong
    public static class Builder {
        private String orderId;
        private List<String> items = new ArrayList();
        private double totalAmount;
        private String note;

        public Builder setOrderId(String id) {
            this.orderId = id;
            return this;
        }

        public Builder addItem(String item) {
            this.items.add(item);
            return this;
        }

        public Builder setTotalAmount(double amount) {
            this.totalAmount = amount;
            return this;
        }

        public Builder setNote(String note) {
            this.note = note;
            return this;
        }

        public Order build() {
            return new Order(orderId, items, totalAmount, note);
        }
    }
}
