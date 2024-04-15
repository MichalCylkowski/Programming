package typySparametryzowane;

public class KlasaGeneryczna<T, V> {

    private T poleGeneryczne;
    private V drugiePoleGeneryczne;

    public KlasaGeneryczna() {
    }

    public KlasaGeneryczna(T poleGeneryczne, V drugiePoleGeneryczne) {
        this.poleGeneryczne = poleGeneryczne;
        this.drugiePoleGeneryczne = drugiePoleGeneryczne;
    }

    public void nazwaTypuGenerycznego(){
        System.out.println("Typ T, to: " + poleGeneryczne.getClass().getName());
    }

    public T getPoleGeneryczne() {
        return poleGeneryczne;
    }

    public void setPoleGeneryczne(T poleGeneryczne) {
        this.poleGeneryczne = poleGeneryczne;
    }

}
