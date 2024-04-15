import java.util.Arrays;

public class Bookshop extends Shop{
    String [] products;
    public Bookshop(String adress, int size, String [] products){
       super(adress, size);
       this.products = products;
    }
    public String getInformation(){
        return this.adress + this.size + " " + Arrays.toString(this.products);
    }


}
