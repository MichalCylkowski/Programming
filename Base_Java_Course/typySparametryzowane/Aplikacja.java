package typySparametryzowane;

import java.util.ArrayList;

public class Aplikacja {
    public static void main(String[] args){

        ArrayList arrayList1 = new ArrayList();

        arrayList1.add(1);
        arrayList1.add(1.2345);
        arrayList1.add("Nietoperz");


        String zwierze = (String) arrayList1.get(2);
        //System.out.println(zwierze);

//        for (String str: arrayList1){
//            System.out.println(str);
//        }
        
        ArrayList<String> arrayList2 = new ArrayList<>();
        
        arrayList2.add("Jeden");
        arrayList2.add("Dwa");
        arrayList2.add("Trzy");

        for (String str: arrayList2){
            System.out.println(str);
        }


    }
}
