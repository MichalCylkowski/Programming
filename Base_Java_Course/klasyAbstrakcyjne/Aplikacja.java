package klasyAbstrakcyjne;

/**
 * Created by Michał Cylkowski
 */

public class Aplikacja {
    public static void main(String[] args){

    //Maszyna maszyna = new Maszyna();
    Robot robot = new Robot();

    robot.przypiszNumerSeryjny(314159);
    System.out.println(robot.pobierzNumerSeryjny());

    robot.uruchom();

    }

}
