public class Shop {
protected String adress;
protected int size;

public Shop(String adress, int size){
    this.adress = adress;
    this.size = size;
}


public String getInformation(){
return this.adress + this.size;
}


}
