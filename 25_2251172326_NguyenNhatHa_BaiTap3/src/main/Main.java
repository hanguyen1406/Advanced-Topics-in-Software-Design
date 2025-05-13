package main;

public class Main {
    public static void main(String[] args) {
        Order order = new Order("DH001", 200000);

        OrderProcessor processor = (OrderProcessor) SimpleFactory.create("processor");
        processor.process(order);

        OrderPrinter printer = (OrderPrinter) SimpleFactory.create("printer");
        printer.print(order);
    }
}

