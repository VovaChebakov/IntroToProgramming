import java.util.Scanner;

public class Ex9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter array length: ");
        int arrayLength = scanner.nextInt();

        float[] numbers = new float[arrayLength+1];
        double res = 0;

        for (int i = 1; i <= arrayLength; i++) {
            System.out.print("Enter " + i + " number: ");
            numbers[i] = scanner.nextInt();
            res += numbers[i];
        }

        System.out.print("Average value: " + res/arrayLength);
    }
}
