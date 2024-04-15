public class PlaystationGame extends Game{
    private String tytul;

    public PlaystationGame(String tytul, String type){
        this.tytul = tytul;
        this.type = "playstation";
    }

    public  String getTitle(){
        return tytul;
    }
}
