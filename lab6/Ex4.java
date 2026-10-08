import java.util.Scanner;

public class Ex4 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a first string: ");
        String s1 = scanner.nextLine();
        System.out.print("Enter a second string: ");
        String s2 = scanner.nextLine();

        if (s1.equals(s2)) {
            System.out.println(s1 + " = " + s2);
        } else {
            System.out.println(s1 + " != " + s2);
        }
    }
}
