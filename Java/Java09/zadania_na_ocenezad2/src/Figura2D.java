abstract class Figura2D extends Figura {
    public Figura2D(int[] krawedzie) throws IllegalArgumentException {
        super(krawedzie);
    }

    public abstract double pole();
}