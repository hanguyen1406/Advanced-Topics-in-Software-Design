public class ExternalService {
    public double applyDiscount(double amount, double percent) {
        return amount * (1 - percent / 100);
    }
}
