public class Rectangle extends Shape{
    private int a;
    private int b;

    public Rectangle(int a, int b){
        this.a = a;
        this.b = b;

    }

   public double getArea(){
       return a*b;
   }

   public double getPerimeter(){
       return (2*a) + (2*b);
   }

}
