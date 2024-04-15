public class Cat extends Animals {

    public Cat(String name, String color){
        this.name = name;
        this.color = color;
    }

    public String makeSound(){
        return this.name + this.color + " Miau!";
    }
}
