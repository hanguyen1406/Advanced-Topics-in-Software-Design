package main;

public class Car extends Vehicle {

    public Car(String brand, int maxSpeed) {
        super(brand, maxSpeed);
    }

    public void honk() {
        System.out.println("Car " + brand + " says: Beep beep!");
    }
}

