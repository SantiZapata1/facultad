import java.util.Scanner;
public class index {
    public static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        Fraccion primeraFraccion = new Fraccion(4, 6);
        Fraccion segundaFraccion = new Fraccion(6, 7);
        Fraccion sumaFracciones = primeraFraccion.suma(segundaFraccion);
        System.out.println(sumaFracciones.toString());
    }    
    
}
