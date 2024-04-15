package podstawyJezykaJava;
import mojPierwszyPakiet.NaszPierwszyProgram;

public class PrzykladowaKlasa {
    private NaszPierwszyProgram naszPierwszyProgram;
    private int x;
    private int y;

    public PrzykladowaKlasa(){

    }

    public PrzykladowaKlasa(int x, int y){
        this.x = x;
        this.y = y;
    }

private int dodajDwieLiczbyDoSiebie(int x, int y){
        Test test = new Test();
        return x + y;
}
    private class Test{

    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}
