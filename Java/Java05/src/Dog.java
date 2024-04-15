public class Dog extends Animals {

    public Dog(String name, String color){

        this.name = name;
        this.color = color;

    }

    public String makeSound(){
        return this.name + this.color +"Hau!";
    }


}
