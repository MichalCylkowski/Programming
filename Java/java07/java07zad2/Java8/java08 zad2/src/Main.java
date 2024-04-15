public class Main {
    public static void main(String[] args) {
        try {
            Wyjatek.throwRuntimeException("wyjątek");
        }
        catch (RuntimeException e) {
            System.out.println("Wyjątek: " + e.getMessage());
        }
        }
    }
