package Animals;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Animal[] animals = addAnimals();
        System.out.println(Arrays.toString(animals));
    }

    private static Animal[] addAnimals() {
        Animal[] animals = new Animal[4];

        Animal animal = new Animal("Random animal", 50, 35.5F, "black");
        animals[0] = animal;

        Animal cow = new Cow("Animals.Cow", 160.5f, 450, "white");
        animals[3] = cow;
        cow.MakeSound();

        Animal cat = new Cat("Animals.Cat", 10, 5.5f, "orange");
        cat.Sleep();
        animals[2] = cat;

        Animal dog = new Dog("Animals.Dog", 40, 28f, "brown");
        dog.Eat();
        animals[1] = dog;

        return animals;
    }
}
