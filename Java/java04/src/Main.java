import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        System.out.println("Podaj maksymalny zakres liczby do wylosowania: ");
        Scanner scanner = new Scanner(System.in);
        int liczbaod = scanner.nextInt();
        int liczbado = scanner.nextInt();
        Gra gra = new Gra(liczbaod,liczbado);
        gra.rozpocznijGre();
    }
}