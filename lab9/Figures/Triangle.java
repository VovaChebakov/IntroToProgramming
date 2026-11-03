package Figures;

public class Triangle extends Shape {
    protected float first_side;
    protected float second_side;
    protected float third_side;

    public Triangle(float first_side, float second_side, float third_side, String name) {
        this.first_side = first_side;
        this.second_side = second_side;
        this.third_side = third_side;
        this.name = name;
    }
    protected String check() {
        if (first_side + second_side < third_side | first_side + third_side < second_side | second_side + third_side < first_side) {
            return "Entered sides are impossible for triangle";
        }
        return "";
    }
    @Override
    protected void FindPerimeter() {
        check();
        perimeter = first_side + second_side + third_side;
        System.out.println(name + " perimerter = " + perimeter);
    }
    @Override
    protected void FindArea() {
        check();
        area = Math.sqrt((perimeter/2) * ((perimeter/2) - first_side) * ((perimeter/2) - second_side) * ((perimeter/2) - third_side));
        System.out.println(name + " area = " + area);
    }
}
