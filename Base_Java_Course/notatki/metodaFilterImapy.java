package notatki;
/**
 * Created by Michał Cylkowski 20.11.2023
 */

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class metodaFilterImapy {
    public static void main(String[] args){
        List<Integer> liczby = List.of(1, 2, 3, 4, 5, 6);

        List<Integer> parzyste = liczby.stream().filter((n) -> n % 2 == 0).collect(Collectors.toList());
        System.out.println(parzyste);

        //Wypisze te które po podzieleniu na dwa mają reszte 0, a więc są parzyste.


        /**
         * METODA MAP
         */

        List<String> slowa = List.of("slowo1", "slowo2", "slowo3", "hakuna", "matata");

        slowa.stream().map(slowo-> slowo.length()).forEach(slowo-> System.out.println(slowo));

        //Wypisze długośc kazdego slowa jedno pod drugim

        List<Integer> dlugoscSlowa = slowa.stream().map(slowo->slowo.length()).collect(Collectors.toList());
        System.out.println(dlugoscSlowa);

        //Wypisze dlugosc kazdego slowa po przecinku tablicy jako Lista

        /**
         * Metoda flatMap
         */

        List<List<String>> listaList = List.of(
                List.of("Jeden", "Dwa"),
                List.of("Trzy", "Cztery"),
                List.of("Pięć", "Sześć")
        );

        System.out.println(listaList);

        // wyswietla Listę list.

        List<String> listaString = listaList.stream().flatMap(lista->lista.stream()).collect(Collectors.toList());
        System.out.println(listaString);

        //scala w jednosc wszystkie listy i wyswietla jako jedna

    }

}
