package main;

public class Main {

	public static void main(String[] args) {
		Car car = new Car("Toyota", 180);
        Motorbike bike = new Motorbike("Yamaha", 150);

        System.out.println("Car Info:");
        car.displayInfo();
        car.honk();

        System.out.println("\nMotorbike Info:");
        bike.displayInfo();
        bike.revEngine();

	}

}
