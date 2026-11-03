package Animals;

public class Animal {
    protected String name;
    protected float height;
    protected float weight;
    protected String color;

    public Animal(String name, float height, float weight, String color) {
        this.name = name;
        this.height = height;
        this.weight = weight;
        this.color = color;
    }

    protected void Eat() {
        System.out.println("Animals.Animal is eating");
    }
    protected void Sleep() {
        System.out.println("Animals.Animal is sleeping");
    }
    protected void MakeSound() {
        System.out.println("Animals.Animal is talking");
    }

    @Override
    public String toString() {
        return this.getClass().getSimpleName() + "{" +
                "height=" + height +
                ", weight=" + weight +
                ", color='" + color + '\'' +
                '}';
    }
}
