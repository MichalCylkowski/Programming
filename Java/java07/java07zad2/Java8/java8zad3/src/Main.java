import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            Wyjatek.throwException("wyjątek");
        } catch (IOException e) {
            System.out.println("Wyjątek: " + e.getMessage());
        }
    }
}