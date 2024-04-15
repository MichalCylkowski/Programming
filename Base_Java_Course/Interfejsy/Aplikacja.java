package Interfejsy;

import java.awt.*;

/**
 * Created by Michał Cylkowski 19.11.2023
 */

public class Aplikacja {

    public static void main(String[] args){

        Robot robot = new Robot(1993);
        robot.uruchom();

        Człowiek człowiek = new Człowiek("Michał");
        człowiek.oddychaj();


        Informacje[] informacje = new Informacje[] {robot, człowiek};

        for (Informacje i: informacje){
            i.pokażInformacje();
        }

        Informacje infoRobot = new Robot(999);
        infoRobot.pokażInformacje();

        procesyKognitywne[] procesyKognitywne = new     procesyKognitywne[] {robot, człowiek};

        for (procesyKognitywne i: procesyKognitywne){
            i.mysl();
        }








    }

    public  static void testInterfejsu(Informacje info){
        info.pokażInformacje();
    }
}
