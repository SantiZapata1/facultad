import java.util.Scanner;
public class index {
    public static Scanner input = new Scanner(System.in);
    public static void asignarValores(Libro libro){
        String valor;
        int valorNum;
        System.out.println("Ingrese el ISBN del libro: ");
        valor = input.nextLine();
        libro.setISBN(valor);
        System.out.println("Ingrese el titulo del libro: ");
        valor = input.nextLine();
        libro.setTitulo(valor);
        System.out.println("Ingrese el autor del libro: ");
        valor = input.nextLine();
        libro.setAutor(valor);
        System.out.println("Ingrese el numero de paginas del libro: ");
        valorNum = input.nextInt();
        input.nextLine();
        libro.setnumeroPaginas(valorNum);
    }

    public static void mostrarValores(Libro libro){
        System.out.println("ISBN: " + libro.getISBN());
        System.out.println("Titulo: " + libro.getTitulo());
        System.out.println("Autor: " + libro.getAutor());
        System.out.println("Numero de paginas: " + libro.getNumPaginas());
    }
    public static String mayor(Libro libro1, Libro libro2){
        if(libro1.getNumPaginas()>libro2.getNumPaginas()){
            return "El libro mayor es " + libro1.getTitulo() + "de " + libro1.getNumPaginas() + "paginas";
        }
            return "El libro mayor es " + libro2.getTitulo() + " de " + libro2.getNumPaginas() + " paginas";
    }
    public static void main(String[] args) {
        System.out.println("[Libro 1]");
        Libro libro1 = new Libro();
        asignarValores(libro1);
        System.out.println("[Libro 2]");
        Libro libro2 = new Libro();
        asignarValores(libro2);
        System.out.println("[Libro 1]");
        mostrarValores(libro1);
        System.out.println("[Libro 2]");
        mostrarValores(libro2);

        System.out.println(mayor(libro1,libro2));
    }
    
}
