package typySparametryzowane;

/**
 * Created by Michał Cylkowski
 *
 */

public class Aplikacja2 {
    public static void main(String[] args){

        KlasaGeneryczna<Double, String> klasaGeneryczna = new KlasaGeneryczna<>(10.0, "Jeden");
        klasaGeneryczna.nazwaTypuGenerycznego();

        double wartosc = klasaGeneryczna.getPoleGeneryczne();



    }
}
