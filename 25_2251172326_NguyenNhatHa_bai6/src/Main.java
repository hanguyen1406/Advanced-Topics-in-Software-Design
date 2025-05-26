public class Main {
    public static void main(String[] args) {
        ExternalService service = new ExternalService();
        DiscountAPI adapter = new DiscountAPI(service);

        Order order = new Order("DH999", 500000);
        order.checkout(adapter);
    }
}
