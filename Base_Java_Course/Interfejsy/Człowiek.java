package Interfejsy;

public class Człowiek implements Informacje, procesyKognitywne{
    private String imie;

    public Człowiek(String imie) {
        this.imie = imie;
    }

    public void oddychaj(){
        System.out.println(imie + " zaczął oddychać.");
    }


    @Override
    public void pokażInformacje() {
        System.out.println("Imie człowieka to: " + imie);
    }

    @Override
    public void mysl() {
        System.out.println(imie + " teraz myśli");
    }
}
