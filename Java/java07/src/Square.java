public class Square extends Shape{
    private int a;

    public Square(int a){
        this.a = a;
    }


    public double getArea() {
        return a*a;
    }

    public double  getPerimeter() {
        return 4 * a;
    }
}
