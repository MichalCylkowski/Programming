class Prostokat extends Figura2D {
    public Prostokat(int a, int b) throws IllegalArgumentException {
        super(new int[]{a, b, a, b});
    }


    public double pole() {
        return krawedzie[0] * krawedzie[1];
    }


    public double poleCalkowite() {
        return 2 * pole() + 2 * krawedzie[0] + 2 * krawedzie[1];
    }
}






