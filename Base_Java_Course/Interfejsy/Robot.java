package Interfejsy;

public class Robot implements Informacje, procesyKognitywne {
    private int numerSeryjny;

    public Robot(int numerSeryjny) {
        this.numerSeryjny = numerSeryjny;
    }

    public void uruchom(){
        System.out.println("Robot nr: " + numerSeryjny + " został uruchomiony");
    }

    @Override
    public void pokażInformacje() {
        System.out.println("Numer seryjny robota to: " + numerSeryjny);

    }

    @Override
    public void mysl() {
        System.out.println("Robot nr: " + numerSeryjny + " myśli.");
    }
}
