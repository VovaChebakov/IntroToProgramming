package Figures;

public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle(8, "circle");
        circle.FindPerimeter();
        circle.FindArea();

        Shape rectangle = new Rectangle(4, 5, "funny rectangle");
        rectangle.FindPerimeter();
        rectangle.FindArea();

        Shape triangle = new Triangle(3, 4, 5,"TRIANGLE");
        triangle.FindPerimeter();
        triangle.FindArea();

        Shape square = new Square(10, "square");
        square.FindPerimeter();
        square.FindArea();
    }
}
