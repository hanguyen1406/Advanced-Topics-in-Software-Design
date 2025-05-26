public class Order {
    private String id;
    private double totalAmount;

    public Order(String id, double amount) {
        this.id = id;
        this.totalAmount = amount;
    }

    public void checkout(DiscountAPI discountAPI) {
        double finalTotal = discountAPI.getDiscountedTotal(totalAmount);
        System.out.println("Đơn hàng: " + id);
        System.out.println("Tổng tiền sau giảm: " + finalTotal);
    }
}
