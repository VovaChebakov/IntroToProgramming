import java.util.Scanner;

public class Ex6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a degrees in Fahrenheit: ");
        float fahrenheitTemperature = scanner.nextInt();

        float celsiusTemperature = (fahrenheitTemperature - 32) * 5/9;
        System.out.println("In Celcius it will be: " + celsiusTemperature);
        scanner.close();
    }
}
