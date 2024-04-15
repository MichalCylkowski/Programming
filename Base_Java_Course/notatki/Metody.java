package notatki;

import java.util.List;
import java.util.stream.Collectors;

public class Metody {
    public static void main(String[] args){

        List<Integer> liczby = List.of(1, 1, 21, 4, 5, 7, 7, 9, 9, 12, 12, 6, 1);

            List<Integer> bezDuplikatow = liczby.stream().distinct().collect(Collectors.toList());
        System.out.println(bezDuplikatow);

        //Napisze każdą cyfre raz, pomijajac duplikaty

        List<Integer> bezDwochPierwszych = liczby.stream().skip(2).collect(Collectors.toList());
        System.out.println(bezDwochPierwszych);

        //wypisze liczby pomijając te do którego wypisany jest indeks w skip czyli(0,1) a od 2 zaczyna wypisywac

        List<Integer> piecElementow = liczby.stream().limit(5).collect(Collectors.toList());
        System.out.println(piecElementow);

        //Wypisze pierwsze 5 elementow tablicy


        List<Integer> posortowane = liczby.stream().sorted().collect(Collectors.toList());
        System.out.println(posortowane);

        //Wypisze zawartośc tablicy posortowaną od najmniejszej
    }
}
