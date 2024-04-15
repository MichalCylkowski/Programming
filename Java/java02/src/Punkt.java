public class Punkt {
    int x;
    int y;

    public Punkt(){
        this.x=0;
        this.y=0;
    }

    public Punkt(int a, int b){
        this.x = a;
        this.y = b;
    }

    public double odleglosc(int x, int y)
    {
        return Math.sqrt((this.x - x)*(this.x - x) + (this.y - y)*(this.y - y));
    }
}
