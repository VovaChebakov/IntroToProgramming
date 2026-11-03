package Figures;

public class Square extends Shape {
    protected float side;

    public Square(float side, String name) {
        this.side = side;
        this.name = name;
    }

    @Override
    protected void FindPerimeter() {
        perimeter = side*4;
        System.out.println(name + " perimeter = " + perimeter);
    }
    @Override
    protected void FindArea() {
        area = Math.pow(side, 2);
        System.out.println(name + " area = " + area);
    }
}
