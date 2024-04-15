public class Main {
    public static void main(String[] args) {
         Cat cat = new Cat("puszek ", "czarny " );
         Dog dog = new Dog("azor ","biały ");

         System.out.println(dog.makeSound());
         System.out.println(cat.makeSound());

    }
}