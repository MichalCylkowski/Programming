public class Karta {
    private final Kolor kolor;
    private final Figura figura;

    public Karta(Kolor kolor, Figura figura) {
        this.kolor = kolor;
        this.figura = figura;
    }

    @Override
    public String toString() {
        return figura + " " + kolor;
    }
}
