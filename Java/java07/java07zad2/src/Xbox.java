public class Xbox extends GameConsole{

    public void playGame(Game game) {
        if (game.type .equals("Xbox")) {
            System.out.println("Grasz w  " + game.getTitle() + " na Xboxie");
        }
        else {
            System.out.println("Error: Nie można grać w  " + game.getTitle() + " na Xboxie.");
        }
    }
}
