public class DiscountAPI {
    private ExternalService service;

    public DiscountAPI(ExternalService service) {
        this.service = service;
    }

    // Giao diện client mong muốn
    public double getDiscountedTotal(double originalTotal) {
        // Mặc định giảm 10%
        return service.applyDiscount(originalTotal, 10);
    }
}
