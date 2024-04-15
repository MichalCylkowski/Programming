public class Main {
    public static void main(String[] args) {
        Xbox xbox = new Xbox();
        Playstation playstation = new Playstation();

        XboxGame halo = new XboxGame("Fifa 23");
        PlaystationGame uncharted = new PlaystationGame("Minecraft");

        xbox.playGame();

    }
}