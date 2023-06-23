import java.util.Scanner;

/*PROCESO ESTADISTICO: 
    con las matrices se pueden realizar diferentes calculos que terminan siendo muy utiles a la hora de trabajar con multiples
 * cantidades de datos, como en las planillas se hace muy engorroso, en elste caso con el buen manejo de los indices se pueden realizar muchos calculos
 * para llevar el registro de cosas a traves de contadores y acululadores. generalmente se deja un lugar mas en la matriz para poner los resultados.
 * 
 * ALGORITMOS DE ORDENAMIENTO:
 * A la hora de trabajar con datos de arreglos o matrices, es deseable que estos esten ordenados, pero como suelen ser cargados de forma aleatoria, se aplican 
 * diferentes algoritmos de ordenamiento, que varian en la cantidad de comparaciones que se hacen en cada elemento, el tiempo de ejecucion y el tamaño y complejidad 
 * del codigo.
 * 
 * Los mas simples son los metodos iterativos:
 * -burbuja
 * -insercion
 * -seleccion
 * -shellsort
 * 
 * Los mas complejos son los metodos recursivos:
 * Estos tienen una logica mas compleja pero son mas optimos, se basan en la idea de "divide y venceras", para dividir en problema grande en varios chicos y resolver.
 * -ordenamiento por mezcla(merge).
 * -prdenamiento rapido (quick).
 * 
 * ALGORITMOS DE BUSQUEDA:
 * se aplican cuando se necesita buscar un elemento especifico de un array o matriz, algunos mas sencillos que otros.
 * -secuencial o lineal
 * -secuencial o lineal con centinela: lo mismo pero sale cuando encuentra el elemento
 * -buqueda binaria
 * 
 */






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
