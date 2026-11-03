package Figures;

public class Circle extends Shape {
    protected float radius;

    public Circle(float radius, String name) {
        this.radius = radius;
        this.name = name;
    }

    @Override
    protected void FindPerimeter() {
        perimeter = 2*3.14*radius;
        System.out.println(name + " perimeter = " + perimeter);
    }
    @Override
    protected void FindArea() {
        area = 3.14 * Math.pow(radius, 2);
        System.out.println(name + " area = " + area);
    }
}
