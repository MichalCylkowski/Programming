public class konto {
    public int ID;

    double saldo;
    public konto(int ID, double saldo){
        this.ID = ID;
        this.saldo = saldo;
    }

    public int getId(){
        return ID;
    }

    public double getSaldo(){
        return saldo;
    }
}
