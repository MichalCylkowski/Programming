public class Remote {

private Tv TV;

public Remote(Tv TV){
    this.TV = TV;
}

public void turntv(){
    if (TV.isOn()){
        TV.off();
    }

    else {
      TV.on();
    }
}

public void channelupbutton(){
    TV.channelup();
}

public void channeldownbutton(){
    TV.channeldown();
}

public void volumeupbutton(){
    TV.volumeup();
}
public void volumedownbutton(){
        TV.volumedown();
    }




}


