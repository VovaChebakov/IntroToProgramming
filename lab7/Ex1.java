import java.util.Scanner;

class Calculator {
    float arg1;
    float arg2;
    char sign;

    public Calculator(float arg1, float arg2, char sign) {
        this.arg1 = arg1;
        this.arg2 = arg2;
        this.sign = sign;
    }

    public double Compute() {
        switch (this.sign) {
            case '+':
                return this.arg1 + this.arg2;
            case '-':
                return this.arg1 - this.arg2;
            case '*':
                return this.arg1 * this.arg2;
            case '/':
                if (arg2 == 0) {
                    return -1;
                } else {
                    return this.arg1 / this.arg2;
                }
            default:
                System.out.println("Impossible operator");
        }
        return 0;
    }
}

public class Ex1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a firsts number: ");
        float first_num = scanner.nextInt();
        System.out.print("Enter a sign(+, -, *, /): ");
        char sign = scanner.next().charAt(0);
        System.out.print("Enter a second number: ");
        float second_num = scanner.nextInt();

        Calculator calculator = new Calculator(first_num, second_num, sign);
        System.out.println(calculator.Compute());
    }
}
