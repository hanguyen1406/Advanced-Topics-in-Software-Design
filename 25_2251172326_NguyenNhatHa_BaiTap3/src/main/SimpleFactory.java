package main;

public class SimpleFactory {
    public static Object create(String type) {
        if (type.equalsIgnoreCase("processor")) {
            return new OrderProcessor();
        } else if (type.equalsIgnoreCase("printer")) {
            return new OrderPrinter();
        }
        return null;
    }
}
