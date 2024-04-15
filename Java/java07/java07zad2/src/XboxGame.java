public class XboxGame extends Game{
    private String tytul;


    public XboxGame(String tytul,String type){
        this.tytul = tytul;
        this.type = "Xbox";
    }

    public  String getTitle(){
        return tytul;
    }


}
