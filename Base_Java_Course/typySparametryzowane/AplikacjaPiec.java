//package typySparametryzowane;
//
//import java.util.ArrayList;
//
//public class AplikacjaPiec {
//    public static void main(String[] args){
//
//        ArrayList<SuperRobot> arrayList = new ArrayList<>();
//
//        arrayList.add(new SuperRobot());
//
//        wyswietlElement(0, arrayList);
//    }
//    public static void wyswietlElement(int indeks, ArrayList<? super  Robot> arrayList){
//
//        Object element = arrayList.get(indeks);
//        System.out.println("Element: " + element);
//        System.out.println("Typ elementu: " + element.getClass().getName());
//
//    }
//    class Maszyna{
//
//}
//
//class Robot extends Maszyna{
//
//}
//
//class SuperRobot extends Robot{
//
//}
//
////    public static <T>void wyswietlElement(int indeks, ArrayList<T> arrayList){
////
////        T element = arrayList.get(indeks);
////        System.out.println("Element: " + element);
////        System.out.println("Typ elementu: " + element.getClass().getName());
//// }
//}
