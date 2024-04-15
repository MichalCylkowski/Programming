import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Karta> talia = new ArrayList<>();
        for (Kolor kolor : Kolor.values()) {
            for (Figura figura : Figura.values()) {
                talia.add(new Karta(kolor, figura));
            }
        }

        for (Karta karta : talia) {
            System.out.println(karta);
        }
    }
}