package notatki;

public class Box<T>{




    private T zawartosc;

    public void umiescZawartosc(T zawartosc){
        this.zawartosc=zawartosc;

    }

    public T pobierz(){
        return zawartosc;

        }

    public static void main(String[] args){

        Box<String> boxS = new Box<>();

        boxS.umiescZawartosc(" ");;
        String pobranyTekst = boxS.pobierz();
        System.out.println("Zawartość" + pobranyTekst);

        String box = (Object.class.getName());
        System.out.println(box);
    }
    }



