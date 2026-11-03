package Figures;

public class Rectangle extends Shape {
    protected float length;
    protected float width;

    public Rectangle(float length, float width, String name) {
        this.length = length;
        this.width = width;
        this.name = name;
    }
    @Override
    protected void FindPerimeter() {
        perimeter = 2 * (length + width);
        System.out.println(name + " perimerter = " + perimeter);
    }
    @Override
    protected void FindArea() {
        area = length * width;
        System.out.println(name + " area = " + area);
    }
}
