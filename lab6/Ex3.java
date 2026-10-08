public class Ex3 {
    public static void main(String[] args) {
        for (char i = 'a'; i <= 'z'; i++) {
            int index = (i - 'a') + 1;
            System.out.println(i + "=" + index);
        }
    }
}