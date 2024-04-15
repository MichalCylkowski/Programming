public class zadanie1 {
    public static void main(String[] args) {
        int porownaj = porownanie(3, 5);

        System.out.println(porownaj);
    }

    public static int porownanie(int x, int y) {
        if (x > y) {
            return -1;
        } else if (x < y) {
            return 1;
        }
        else return 0;

    }
}
