public class Cuenta {

    //atributos privados que solo se pueden usar dentro de la clase, y fuera de ellas se accede a las mismas a traves de los metodos set y get
    private String titular;
    private double saldo;

    //variable constante
    public static final double SALDO_DEFECTO = 100000;

    //constructor  1
    public Cuenta(String nombre){
        titular = nombre;
        saldo= SALDO_DEFECTO;
    }

    //constructor 2
    public Cuenta(String nombre, double monto){
        titular = nombre;
        saldo = monto;
    }

    //metodos set y get
    public double getSaldo() {
        return saldo;
    }
    public String getTitular() {
        return titular;
    }
    public void setTitular(String titular) {
        this.titular = titular;
    }

    //metodo para ingresar dinero al saldo
    public double ingresar(double monto){
        if(monto>0){
            saldo += monto;
        }
        return saldo;
    }

    //metodo para retirar dinero del saldo
    public double retirar(double monto){
        if(monto > saldo){
            saldo = 0;
        }else{
            saldo-= monto;
        }
        return saldo;
    }

    //aclarar que es
    @Override
    public String toString() {
        return "Cuenta{" +
                "titular='" + titular + '\'' +
                ", saldo=" + saldo +
                '}';
    }


}
