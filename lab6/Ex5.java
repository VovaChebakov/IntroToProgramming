public class Ex5 {
    public static int vowels_counter(String str) {
        String low_str = str.toLowerCase();
        String vowels = "aeiouy";
        int count = 0;

        for (int i = 0; i < low_str.length(); i++) {
            char ch = str.charAt(i);
            if (vowels.indexOf(ch) != -1) {
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        String str = "dfgdgsoudsfuoignise";
        System.out.print("Amount of vowels: " + vowels_counter(str));
    }
}
