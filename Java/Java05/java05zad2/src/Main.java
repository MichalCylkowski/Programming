public class Main {
    public static void main(String[] args) {
        String[] tablica = {"a", "b", "c"};
        String[] tablica1 = {"a", "d", "g"};
        Bookshop bookshop = new Bookshop("address ", 12, tablica);
        Bakery bakery = new Bakery("Address ", 10, tablica1);

        System.out.println(bookshop.getInformation());
        System.out.println(bakery.getInformation());
    }
}