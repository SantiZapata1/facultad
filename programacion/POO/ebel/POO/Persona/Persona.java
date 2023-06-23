public class Persona{    
    //Atributos
    String nombre;
    String dni;
    String domicilio;
    int edad;

    public static final String NOMBRE_POR_DEFECTO = "Unnamed";
    //Constructores
    public Persona(String datoDni, int datoEdad){
        dni = datoDni;
        nombre = NOMBRE_POR_DEFECTO;
        edad = datoEdad;
        domicilio = "";
    }
    public Persona(String datoDni, String datoNombre, int datoEdad){
        dni = datoDni;
        nombre = datoNombre;
        edad = datoEdad;
        domicilio = "";
    }
    //Métodos
    public String comer(String comida){
        return nombre + " está comiendo " + comida;
    }
}