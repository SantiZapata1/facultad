
public class Cuenta {

    //atributos
    //no complicarse poniendo privado y eso
     String titular;
     float cantidad;

    //constructores
    //Escribir con el nombre igual a la clase, y pasarle como parametros los atributos que necesita ese constructor especifico
    public Cuenta(String titular, float cantidad){
        this.titular=titular;
        this.cantidad=cantidad;
    }
    public Cuenta(String titular){
        this.titular=titular;
        this.cantidad=10000;
    }

    //metodos set y get
    public void setTitular(String titular){
        this.titular=titular;
    }
    public void setCantidad(float cantidad){
        this.cantidad=cantidad;
    }
    public String GetTitular(){
        return titular;
    }
    public float GetCantidad(){
        return cantidad;
    }

    //metodos especiales
    public float ingresar(float monto){
        if(monto>0){
            cantidad+=monto;
        }
        return cantidad;
    }
    public float retirar(float monto){
        cantidad-=monto;
        if(cantidad<0){
            cantidad=0;
        }
        return cantidad;
    }


    @Override
    public String toString() {
        return "Cuenta{" +
                "titular='" + titular + '\'' +
                ", saldo=" + cantidad +
                '}';
    }

}
