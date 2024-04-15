public class Tv {

    private int channel;

    private int volume;

    private boolean on;

    public Tv(){

        this.channel = 10;

        this.volume = 10;

        this.on = false;

    }


    public void off() {
        on = false;

        System.out.println("Your Tv is off");
    }

    public void on() {
        on = true;
    }

    public void channelup(){
        if(on && channel<20 && channel>=1) {
        channel++;
        }

        else System.out.println("Tv is off");
    }

    public void channeldown(){
        if(on && channel>1 && channel <=20) {
            channel--;
        }
        else System.out.println("Tv is off");
    }

    public void volumedown(){
        if(on && volume > 1 && volume <= 10) {
            channel--;
        }
        else System.out.println("Tv is off");
    }

    public void volumeup(){
        if(on && volume >= 1 && volume < 10) {
            channel++;
        }
        else System.out.println("Tv is off");
    }

    public int getChannel(){
        return channel;
    }

    public int getVolume(){
        return volume;
    }

    public boolean isOn(){
        return on;
    }








}
