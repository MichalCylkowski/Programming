public class Zadanie3 {
    public static void main(String[] args){
        Tv telewizor = new Tv();

        Remote pilot = new Remote(telewizor);

        pilot.channeldownbutton();

        pilot.volumedownbutton();

    }
}
