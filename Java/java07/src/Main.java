public class Main {
    public static void main(String[] args) {
        Shape[] shapes = new Shape[4];
        shapes[0] = new Rectangle(4, 8);
        shapes[1] = new Square(4);
        shapes[2] = new Circle(5);
        shapes[3] = new Triangle(4, 5, 6, 3);

        for (Shape shape : shapes) {
            System.out.println("Pole: " + shape.getArea());
            System.out.println("Obwód: " + shape.getPerimeter());
        }
    }
}