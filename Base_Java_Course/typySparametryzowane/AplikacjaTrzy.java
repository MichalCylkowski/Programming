package typySparametryzowane;

public class AplikacjaTrzy {
    public static void main(String[] args){

        Integer[] tablicaLiczb = {1, 2, 3, 4, 5};
        Character[] tablicaZnakow = {'a', 'b', 'c', 'd', 'e'};
        String[] tablicaStringow = {"Jeden", "Dwa", "Trzy", "Cztery", "Pięć"};

        wyswietlElementyTablicy(tablicaLiczb);
        wyswietlElementyTablicy(tablicaZnakow);
        wyswietlElementyTablicy(tablicaStringow);

    }

        public static <T> void wyswietlElementyTablicy(T[] tablica){
        for (T element: tablica){
            System.out.println(element);
        }
        System.out.println();
    }

//    public static void wyswietlElementyTablicy(Integer[] tablica){
//        for (Integer element: tablica){
//            System.out.println(element);
//        }
//        System.out.println();
//    }
//
//    public static void wyswietlElementyTablicy(Character[] tablica){
//        for (Character element: tablica){
//            System.out.println(element);
//        }
//        System.out.println();
//    }
}
