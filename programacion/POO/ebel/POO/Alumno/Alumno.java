
public class Alumno{
    private String nroLegajo;
    private String nombreAlumno;
    private String apellidoAlumno;
    private String domicilioAlumno;
    
    public static final String APELLIDO_DEFAULT = "Unasigned";
    public static final String DOMICILIO_DEFAULT = "Unasigned";
    /*Constructores */
    public Alumno(String legajo, String nombre){
        this.nroLegajo = legajo;
        this.nombreAlumno = nombre;
        this.apellidoAlumno = APELLIDO_DEFAULT;
        this.domicilioAlumno = DOMICILIO_DEFAULT;
    }
    public Alumno(String legajo, String nombre, String apellido){
        this.nroLegajo = legajo;
        this.nombreAlumno = nombre;
        this.apellidoAlumno = apellido;
        this.domicilioAlumno = DOMICILIO_DEFAULT;
    }
    public Alumno(String legajo, String nombre, String apellido, String domicilio){
        this.nroLegajo = legajo;
        this.nombreAlumno = nombre;
        this.apellidoAlumno = apellido;
        this.domicilioAlumno = domicilio;
    }
    /* Método */
    public String imprimirAlumno(){
        return "Nombre: " + this.nombreAlumno + ", Legajo: " + this.nroLegajo;
    }

    public void setNroLegajo(String nroLegajo){
            if(nroLegajo.length() > 5){
                this.nroLegajo = nroLegajo;

            }
    }

    public void setNombre(String nombre){
        this.nombreAlumno = nombre;
    }
    
}
