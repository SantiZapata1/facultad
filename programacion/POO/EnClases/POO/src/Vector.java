public class Vector {

    //crea los atributos de un vector
    private double x;
    private double y;
    private double z;

    //crea el constructor del vector
    public Vector(double x, double y, double z){
        this.x = x;
        this.y = y;
        this.z = z;
    }

    //crea un metodo que recibiendo un nro, crea un vector con los numeros multiplicados
    public Vector multiplicar(double nro){
        Vector nuevoVector = new Vector(x*nro, y*nro, z*nro);
        return nuevoVector;
    }

    //si tienen la misma cantidad de elementos los suma, sino muestra error
    public Vector sumar(Vector v){
        if((v.x ==0 && this.x ==0) && (v.y ==0 && this.y ==0) && (v.z==0&&this.z==0)){
            return new Vector(this.x+v.x, this.y+v.y,this.z+v.z);
        }else{
            System.out.println("error los vectores no tienen la misma cantidad de elementos");
            return v;
        }
    }

    
    @Override
    public String toString() {
        return "[" + x + ", " + y + ", " + z + ']';
    }
}
