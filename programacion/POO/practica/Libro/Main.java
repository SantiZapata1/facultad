
public class Main {
    public static void main(String args[]) {
        
        //crear un objeto sin atributos inicializados
        libros libro1 = new libros();

        //setear en codigo cada atributo
        libro1.setISBN(2);
        libro1.setAutor("juan gomez");
        libro1.setNroPaginas(300);
        libro1.setTitulo("se aprueba");

        //imprimir datos del libro con override
        System.out.println(libro1);


    }
    
}
