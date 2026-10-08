import java.util.Scanner;

public class Ex10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] arr = {1, 3, 5367, 32, 45};

        System.out.print("Enter an element to put them in array: ");
        int pasteElement = scanner.nextInt();

        System.out.print("Enter a position for your element: ");
        int elementPossition = scanner.nextByte();

        arr[elementPossition] = pasteElement;

        System.out.print("New array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
