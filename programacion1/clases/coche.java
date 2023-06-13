package clases;

//creacion de la clase
public class coche{

    //atributos
    String color;
    String marca;
    int km;

    //metodo
    public static void main(String [] args) {
        
        //creamos un objeto de la clase coche
        coche coche1 = new coche();

        //definimos atributos del objeto
        coche1.color="blanco";
        coche1.marca="audio";
        coche1.km=100;

        //imprimimos atributos del coche
        System.out.println("\ncolor del coche1: "+ coche1.color);
        System.out.println("marca del coche1: "+ coche1.marca);
        System.out.println("kilometraje del coche1: "+ coche1.km+"\n");


    }
    
}
