package Persona;

public class Persona {

    //atributos
    String nombre;
    int edad;
    int dni;
    
    //constructor
    public Persona(String nombre, int edad, int dni) {
        this.nombre = nombre;
        this.edad = edad;
        this.dni = dni;
    }

    //metodos
    public void saludar() {
        System.out.println("Hola, mi nombre es " + nombre + ", tengo " + edad + " años y mi dni es "+ dni);
    }

}
