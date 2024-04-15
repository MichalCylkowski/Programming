package wyrazenieLambda;

public class Aplikacja {
    public static void main(String[] args){

        Czlowiek czlowiek = (w, t) -> System.out.println("Człowiek myśli...");
       // czlowiek.mysl();

        Korporacja korporacja = new Korporacja();
        korporacja.zarzadzaj((w, t) -> {
            System.out.println("Człowiek myśli...");
            System.out.println(w + " " + t);
        });

        korporacja.zarzadzaj((w, t) -> {
            System.out.println("Człowiek myśli...");
            System.out.println(w + " " + t);
        });
    }
}

class Korporacja{
    public void zarzadzaj(Czlowiek cz){
        System.out.println("Zarzadzanie zasobami aktywne.");
        //cz.mysl();
    }
}

interface Czlowiek{
    void mysl(int wartosc, String tekst);
}
