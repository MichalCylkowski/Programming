class Kwadrat extends Figura2D {
    public Kwadrat(int bok) throws IllegalArgumentException {
        super(new int[]{bok, bok, bok, bok});
    }

    public double pole() {
        return krawedzie[0] * krawedzie[1];
    }

    public double poleCalkowite() {
        return 6 * pole();
    }
}