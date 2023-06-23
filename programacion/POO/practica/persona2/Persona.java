//package persona2;

public class Persona {

    //si no se deben acceder directamente a ellas tienen que ser privados?
    String nombre;
    int edad;
    int dni;
    char sexo;
    float peso;
    float altura;

    //constructores
    public Persona(){//por defecto?
        
    }
    public Persona(String nombre, int edad, char sexo){
        this.nombre=nombre;
        this.edad=edad;
        this.sexo=sexo;
    }
    public Persona(String nombre, int edad, char sexo, int dni, float peso, float altura){
        this.nombre=nombre;
        this.edad=edad;
        this.sexo=sexo;
        this.dni=dni;
        this.peso=peso;
        this.altura=altura;
    }

    //metodos especiales
    public int calcularIMC(){

        float resultado=this.peso/(this.altura*this.altura);

        if(resultado<20){
            return -1;
        }else if (resultado>=20 && resultado <=25){
            return 0;
        }else if(resultado>25){
            return 1;
        }
    }

    public boolean esMayorDeEdad(){

        if(this.edad<18){
            return false;
        }else{
            return true;
        }
    }

    public String toString(){
        return "nombre: "+this.nombre+", edad: "+this.edad+", dni: "+this.dni+"sexo: "+this.sexo+
        ",peso: "+this.peso+",altura: "+this.altura;
    }




    
}
