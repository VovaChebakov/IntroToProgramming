class Author {
    private String name;
    private String email;
    private char gender;

    public Author(String name, String email, char gender) {
        this.name = name;
        this.email = email;
        this.gender = gender;
    }

    public String getName() {
        return name;
    }
    public String getEmail() {
        return email;
    }
    public char getGender() {
        return gender;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    @Override
    public String toString() {
        return "Author [name: " + name + ", email: " + email + ", gender: " + gender + "]";
    }
}

class Book {
    private String name;
    private Author author;
    private double price;
    private int qty;

    public Book(String name, Author author, double price) {
        this.name = name;
        this.author = author;
        this.price = price;
    }

    public Book(String name, Author author, double price, int qty) {
        this.name = name;
        this.author = author;
        this.price = price;
        this.qty = qty;
    }

    public String getName() {
        return name;
    }
    public Author getAuthor() {
        return author;
    }
    public double getPrice() {
        return price;
    }
    public void setPrice(double price) {
        this.price = price;
    }
    public int getQty() {
        return qty;
    }
    public void setQty(int qty) {
        this.qty = qty;
    }
    @Override
    public String toString() {
        return "Book [name: " + name + ", " + author.toString() + ", price: " + price + ", quantity: " + qty + "]";
    }
}
public class Library {
    public static void main(String[] args) {
        Book[] books = new Book[2];

        Author author1 = new Author("Name", "email@email.email", 'm');
        Author author2 = new Author("Name", "email@email.email", 'f');

        books[0] = new Book("Java", author1, 45.50, 10);
        books[1] = new Book("Java", author2, 45.50, 10);

        System.out.println("---Data---");
        for (Book book : books) {
            System.out.println(book.toString());
        }

        System.out.println("\n--- Uploading data ---");
        books[0].setPrice(49.99);
        books[0].setQty(15);
        books[1].setQty(5);

        for (Book book : books) {
            System.out.println(book.toString());
        }
    }
}