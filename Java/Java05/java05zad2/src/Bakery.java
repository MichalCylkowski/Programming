import java.util.Arrays;

public class Bakery extends Shop{

    String [] products;
    public Bakery(String adress, int size, String [] products){
        super(adress,size);
        this.products = products;
    }

    public String getInformation(){
        return this.adress + this.size + " " + Arrays.toString(this.products);
    }
}
