public class Circle extends Shape{
    private int r;

    public Circle(int r){
        this.r = r;
    }
    public double getArea() {
       return Math.PI * r * r;
    }

    public double getPerimeter(){
        return 2 * Math.PI * r;
    }
}
