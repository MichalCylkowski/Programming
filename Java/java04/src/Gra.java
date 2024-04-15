import java.util.Random;
import java.util.Scanner;

public class Gra {
    private int zakresmin;
    private int zakresmax;
    private int wylosowanaLiczba;
    private int iloscProb = 5;
    private boolean wygrana = false;

    public Gra(int zakresmin, int zakresmax) {

        this.zakresmin = zakresmin;
        this.zakresmax = zakresmax;
    }

    private void wylosujLiczbe() {
        Random random = new Random();
        wylosowanaLiczba = random.nextInt(zakresmin,zakresmax) + 1;
    }

    public void rozpocznijGre() {
        wylosujLiczbe();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Ogadnij liczbę z zakresu od "+ zakresmin +" do "+zakresmax);
        for (int i = 0; i < iloscProb; i++) {
            int podanaLiczba = scanner.nextInt();
            if (podanaLiczba == wylosowanaLiczba) {
                wygrana = true;
                break;
            } else if (podanaLiczba < wylosowanaLiczba) {
                System.out.println("Za mała liczba");
            } else {
                System.out.println("Za duża liczba");
            }
        }
        if (wygrana) {
            System.out.println("Gratulacje, zgadłeś liczbę " + wylosowanaLiczba);
        } else {
            System.out.println("Nie udało się odgadnąć liczby. Była to liczba: " + wylosowanaLiczba);
        }
    }
}