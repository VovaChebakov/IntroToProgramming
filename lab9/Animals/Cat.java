package Animals;

public class Cat extends Animal {

    public Cat(String name, float height, float weight, String color) {
        super(name, height, weight, color);
    }

    @Override
    protected void Eat() {
        System.out.println("The " + this.getClass().getSimpleName() + " is eating");
    }
    @Override
    protected void Sleep() {
        System.out.println("The " + this.getClass().getSimpleName() + " is sleeping");
    }
    @Override
    protected void MakeSound() {
        System.out.println("The " + this.getClass().getSimpleName() + " is too noisy");
    }
}
