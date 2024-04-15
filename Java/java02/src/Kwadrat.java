public class Kwadrat {

    int bok;

    public Kwadrat(int bokKwadratu){
        this.bok = bokKwadratu;
    }

    public void wypiszBok(){
        System.out.println(bok);
    }

    public boolean czyNaszBokWiekszyNiz(int drugiBok){
        return this.bok > drugiBok;
    }

    public static void main(String[] args){
        Kwadrat mojKwadrat = new Kwadrat(10);
        mojKwadrat.wypiszBok();
        mojKwadrat.czyNaszBokWiekszyNiz(10);
    }
}


