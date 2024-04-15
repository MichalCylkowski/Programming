package notatki;

import java.util.List;
import java.util.Optional;

/**
 * Created by Michał Cylkowski 21.11.2023
 */


public class SprawdzanieWarunkow {
    public static void main(String[] args) {
        List<String> slowa = List.of("Amama", "Irelia", "Volibir", "Masahaa", "Roblox");

        boolean startWithA = slowa.stream().anyMatch(slowo -> slowo.startsWith("A"));
        System.out.println(startWithA);

        // Wyjdzie true, bo jest przynajmniej jedno slowo ktore zaczyna sie na A

        boolean allLonger3 = slowa.stream().allMatch(slowo->slowo.length()>3);
        System.out.println(allLonger3);

        // Wyjdzie True, bo nie wszystkie słowa z listy mają więcej niż 3 znaki

        Optional<String> pierwszy = slowa.stream().filter(slowo->slowo.endsWith("a")).findFirst();
        System.out.println(pierwszy.orElse("brak"));

        //Wypisze pierwsze słowo, które kończy się na litere A

        Optional<String> jakiekolwiek = slowa.stream().filter(slowo->slowo.contains("eli")).findAny();
        System.out.println(jakiekolwiek.orElse("brak"));

        //Wypisze pierwsze słowo, które zawiera w sobie eli


        Optional<String> odA = slowa.stream().filter(slowo-> slowo.startsWith("A")).findAny();
        System.out.println(odA.orElse("BRAK"));
    }


}
