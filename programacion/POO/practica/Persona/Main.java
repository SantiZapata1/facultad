package Persona;

public class Main {
    public static void main(String[] args) {

        // Creación de objetos de la clase Persona
        Persona persona1 = new Persona("luli", 19, 45044392);
        Persona persona2 = new Persona("santi", 19, 45045318);

        // Acceso a los métodos y atributos de los objetos
        persona1.saludar();
        persona2.saludar();
    }
}
