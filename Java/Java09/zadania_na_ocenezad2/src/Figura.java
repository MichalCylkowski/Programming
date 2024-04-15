abstract class Figura {
    protected int[] krawedzie;

    public Figura(int[] krawedzie) throws IllegalArgumentException {
        for (int krawedz : krawedzie) {
            if (krawedz == 0) {
                throw new IllegalArgumentException("Krawędzie muszą być różne od zera.");
            }
        }
        this.krawedzie = krawedzie;
    }

    public int sumakrawedzi() {
        int suma = 0;
        for (int krawedz : krawedzie) {
            suma += krawedz;
        }
        return suma;
    }

    public abstract double pole();
}