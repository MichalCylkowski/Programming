import java.io.IOException;

public class Wyjatek {
    public static void throwException(String message) throws IOException {
        throw new IOException(message);
    }
}
