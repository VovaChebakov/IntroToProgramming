import java.util.Scanner;

public class Ex8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\nSelect the source.txt format:");
        System.out.println("1. Binary (Base 2)");
        System.out.println("2. Decimal (Base 10)");
        System.out.println("3. Hexadecimal (Base 16)");
        System.out.print("Enter choice (1-4): ");

        int systemChoice = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Enter the value to convert: ");
        String input = scanner.nextLine();

        int decimalValue = 0;

        switch (systemChoice) {
            case 1:
                decimalValue = Integer.parseInt(input, 2);
                break;
            case 2:
                decimalValue = Integer.parseInt(input, 10);
                break;
            case 3:
                decimalValue = Integer.parseInt(input, 16);
                break;
            default:
                System.out.println("Invalid selection. Please choose a valid option.");
        }

        System.out.println("\n--- Conversion Results ---");
        System.out.println("Binary (Base 2)      : " + Integer.toString(decimalValue, 2));
        System.out.println("Decimal (Base 10)    : " + Integer.toString(decimalValue, 10));
        System.out.println("Hexadecimal (Base 16): " + Integer.toString(decimalValue, 16).toUpperCase());
        scanner.close();
    }
}

