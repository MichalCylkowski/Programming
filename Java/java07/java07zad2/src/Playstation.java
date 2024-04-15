public class Playstation extends GameConsole{

    public void playGame(Game game) {
        if (game.type .equals("playstation")) {
            System.out.println("Grasz w  " + game.getTitle() + " na Playstation");
        }
        else {
            System.out.println("Error: Nie można grać w  " + game.getTitle() + " na Playstation.");
        }
    }
}
