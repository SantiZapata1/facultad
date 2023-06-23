public class Alumno {

    private String nroLegajo; //obligatorio
    private String nombre; //ob
    private String apellido; // op
    private String domicilio; //op

    //constructores
    public Alumno(String nroLegajo, String nombre){
        this.nombre = nombre;
        this.nroLegajo = nroLegajo;
    }

    public Alumno(String nroLegajo, String nombre, String unApellido){
        this.nombre = nombre;
        this.nroLegajo = nroLegajo;
        this.apellido = unApellido;
    }

    public Alumno(String nroLegajo, String nombre, String unApellido, String domicilio){
        this.nombre = nombre;
        this.nroLegajo = nroLegajo;
        this.apellido = unApellido;
        this.domicilio = domicilio;
    }

    //metodos

    public String imprimirAlumno(){
        return "Nombre :"+this.nombre+"- Nro legajo: "+this.nroLegajo;
    }

    public void setNroLegajo(String nroLegajo){
        if(nroLegajo.length()>5) this.nroLegajo = nroLegajo;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public void setDomicilio(String domicilio) {
        this.domicilio = domicilio;
    }

    public String getNombre() {
        return this.nombre;
    }

    public String getNroLegajo() {
        return nroLegajo;
    }

    public String getApellido() {
        return apellido;
    }
}
