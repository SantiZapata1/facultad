import java.util.Scanner;

public class accesos {

    static Scanner input = new Scanner(System.in);

    public static void main(String args[]) {

        System.out.println("comenzamos");

        int[] Arreglo = new int[5];

        cargarArreglo(Arreglo);

        // Mostrar los elementos cargados en el arreglo
        for (int elemento : Arreglo) {
            System.out.print(elemento + " ");
        }
    }

    public static void cargarArreglo(int[] Arreglo){

        for (int i = 0; i < Arreglo.length; i++) {

            System.out.print("Ingresa el num de la posicion "+i+": ");
            int numeroEntero = input.nextInt();

            Arreglo[i] = numeroEntero;
        }

    }


}
