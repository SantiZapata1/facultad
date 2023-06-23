public class Persona {

    //atributos
    String nombre;
    String dni;
    int edad;

    public static final String NOMBRE_POR_DEFECTO = "No Name";

    //constructores
    public Persona(String datoDni){
        dni = datoDni;
        nombre = NOMBRE_POR_DEFECTO;
    }
    public Persona(String datoDni, int unaEdad) {
        dni = datoDni;
        edad = unaEdad;
        nombre = NOMBRE_POR_DEFECTO;
    }

    public Persona(String unDni, int unaEdad, String unNombre) {
        dni = unDni;
        edad = unaEdad;
        nombre = unNombre;
    }

    //metodos
    public String comer(){
        return nombre +" con dni "+dni+ " esta comiendo";
    }

    //get y set


}
