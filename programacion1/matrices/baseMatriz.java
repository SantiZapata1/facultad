package matrices;
import java.util.Scanner;

public class baseMatriz {

    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int[][] matriz = inicializarMatriz();

        matriz=cargarValores(matriz);
        mostrarMatriz(matriz);
        diagonal0(matriz.clone());

    }

    public static int[][] inicializarMatriz(){

        System.out.println("vamos a crear una matriz");
        System.out.print("ingrese cantidad de filas:");
        int filas=input.nextInt();

        System.out.print("ingrese cantidad de columnas:");
        int columnas=input.nextInt();

        int[][]matriz=new int[filas][columnas];

        System.out.println("Se creo una matriz de: "+filas+"x"+columnas);

        return matriz;
    }
    
    public static int[][] cargarValores(int [][] matriz){

        int filas = matriz.length; 
        int columnas = matriz[0].length; 

        //matriz=new int [filas][columnas];

        for(int y = 0; y < filas; y++){
            // filas
            for(int x = 0; x < columnas; x++){
                // columnas
                System.out.print("Ingrese el valor para la posicion [" + y + "][" + x + "] : ");
                matriz[y][x] = input.nextInt();
            }
        }

        return matriz;

    }

    public static int[][] mostrarMatriz(int[][] matriz){

        int filas = matriz.length; 
        int columnas = matriz[0].length; 

        int [][] matrizReturn=new int [1][1];

        System.out.println("resultado de la matriz:");

        for(int y = 0; y < filas; y++){
            // filas
            for(int x = 0; x < columnas; x++){
                // columnas
                int v = matriz[y][x];
                System.out.print(v + " ");
            }

            System.out.println();
        }

        return matrizReturn;

    }

    public static int [][] diagonal0(int [][] matriz){
        
        int filas = matriz.length; 
        int columnas = matriz[0].length; 
        int v;
        int [][] matrizReturn=new int [1][1];

        if(filas==columnas){

            System.out.println("matriz con diagonal 0:");

            for(int y = 0; y < filas; y++){

                for(int x = 0; x < columnas; x++){
    
                    if(x==y || (x+y)==filas-1){
                        v=0;
                    }else{
                        v = matriz[y][x];
                    }
    
                    System.out.print(v + " ");
    
                }
                System.out.println();
            }

        return matrizReturn;
        }else{

            System.out.println("la matriz no es cuadrada.");
            return matrizReturn;

        }

    }



}
