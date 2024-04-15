import java.util.Scanner;
import java.util.Arrays;
public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.println("Podaj wymiar 1 tablicy:");

        int x = scan.nextInt();

        System.out.println("Podaj wymiar 2 tablicy:");

        int y = scan.nextInt();

        int [] tab = new int[x];

        int [] tab1 = new int[y];

        for (int i = 0; i < x; i++){
            System.out.println("Podaj kolejny element do 1 tablicy: ");

            tab[i] = scan.nextInt();
        }

        for (int i = 0; i < y; i++){
            System.out.println("Podaj kolejny element do 2 tablicy: ");

            tab[i] = scan.nextInt();
        }
        System.out.println(Arrays.toString(sumaTAB(tab,tab1)));


    }

    public static int[] sumaTAB(int[] tab, int[] tab1){
        int [] tab2 =  new int [tab.length];
        if (tab.length != tab1.length){
            return tab2;
        }

        else{
            for (int i = 0; i < tab.length; i++){
                tab2[i] = tab[i] + tab1[i];
            }

            return tab2;
        }
    }


}