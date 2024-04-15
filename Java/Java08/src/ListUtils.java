import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class ListUtils {

    public static <T> void zduplikowane(List<T> list) {
        Set<T> unikalne = new HashSet<>();
        Set<T> duplikaty = new HashSet<>();

        for (T element : list) {
            if (!unikalne.add(element)) {
                duplikaty.add(element);
            }
        }

        System.out.println("Zduplikowane elementy: " + duplikaty);
    }

    public static <T> void usunduplikaty(List<T> list) {
        Set<T> unikalne1 = new HashSet<>();
        List<T> lista = new ArrayList<>();

        for (T element : list) {
            if (unikalne1.add(element)) {
                lista.add(element);
            }
        }

        list.clear();
        list.addAll(lista);
    }

    public static void main(String[] args) {
        List<Integer> liczby = new ArrayList<>();
        liczby.add(1);
        liczby.add(2);
        liczby.add(2);
        liczby.add(3);
        liczby.add(3);
        liczby.add(4);
        liczby.add(5);


        System.out.println("Przed działaniem metod: " + liczby);
        zduplikowane(liczby);
        usunduplikaty(liczby);
        System.out.println("Bez duplikatów: : " + liczby);
    }
}


