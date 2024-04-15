public class Triangle extends Shape {
    private int a;
    private int b;

    private int c;

    private int h;

    public Triangle(int a, int b, int c, int h) {
        if ( a + b > c || a + c > b || c + b > a) {
            this.a = a;
            this.b = b;
            this.c = c;
            this.h = h;
        }
        else {
            System.out.println("BŁĄD");
        }
    }

    public double getArea(){
        return (a * h) / 2;

    }
    public double  getPerimeter(){
        return a + b + c;
    }



}
