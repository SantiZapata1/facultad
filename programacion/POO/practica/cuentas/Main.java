import java.util.Scanner;

public class Main {

    static Scanner input = new Scanner(System.in);

    public static void main(String args[]) {

        //creo un objeto de la clase cuenta
        Cuenta cuenta1 = new Cuenta("santiago zapata", 100);
        
        //muestro parametro por atributo del objeto
        System.out.println("titular 1:"+cuenta1.titular);
        //muestro atributo con metodo get
        System.out.println("cantidad 1:"+cuenta1.GetCantidad());

        //segundo objeto
        Cuenta cuenta2 = new Cuenta("juan perez", 50);

        //cambiamos los atributos con los metodos set y get
        cuenta2.setTitular("rodrigo gomez");
        cuenta2.setCantidad(200);

        //mostramos los atributos cambiados
        System.out.println(cuenta2);

        //objeto 3 ingresado por teclado
        System.out.println("Ingrese el titular del objeto 3:");
        String titular = input.nextLine();
        System.out.println("Ingrese la cantidad del objeto 3:");
        int cantidad = input.nextInt();

        Cuenta cuenta3 = new Cuenta(titular, cantidad);

        //mostramos el objeto con override
        System.out.println(cuenta3);



    }
    
}
