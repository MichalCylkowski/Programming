import java.util.HashSet;
import java.util.Random;
import java.util.Scanner;
import java.util.Set;
public class Main {
    public static void main(String[] args) {
        Set<Integer> podaneliczby = pobierzliczby();
        Set<Integer> wylosowane = losowanie();


    }

    public static void Set<Integer> pobierzliczby(){
        Set<Integer> podaneliczby = new HashSet<>();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Podaj 6 liczb w zakresie 1-49:");


    }

    public static void losowanie(){
        Set<Integer> wylosowane = new HashSet<>();
        Random random = new Random();
        while (wylosowane.size() < 6) {
            int liczba = random.nextInt(49) + 1;
            wylosowane.add(liczba);
        }

        return wylosowane;

    }
}