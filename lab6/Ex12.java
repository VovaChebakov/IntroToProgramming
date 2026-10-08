import java.util.Scanner;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Ex12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a file or directory: ");
        String directory = scanner.nextLine();

        checkPath(directory);
    }
    public static void checkPath(String pathname) {
        Path path = Paths.get(pathname);

        if (Files.exists(path)) {
            System.out.println("Path is exist");
        } else {
            System.out.println("Path is not exist");
        }
    }
}
