public class index {
    public static void main(String args[]){
        Persona persona1 = new Persona("44944144", "Juan", 19);
        System.out.println("Nombre: " + persona1.nombre);
        System.out.println("DNI: " + persona1.dni);
        System.out.println("Edad: " + persona1.edad);
        System.out.println(persona1.comer("Manzana"));
        
    }
}
