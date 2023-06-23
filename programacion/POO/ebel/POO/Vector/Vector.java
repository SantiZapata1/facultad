
public class Vector {
    private double x;
    private double y;
    private double z;

    public Vector(double x, double y, double z){
        this.x = x;
        this.y = y;
        this.z = z;  
    }
    public String toString(){
        return "[" + x + "," + y + "," + z +"]";
    }
    
        public Vector multiplicar(double nro){
            Vector nuevoVector = new Vector(x*nro, y*nro, z*nro);
            return nuevoVector;
        }
        
        public Vector sumar(Vector vectorSuma){
            Vector nuevoVector = new Vector(x+vectorSuma.x, y+vectorSuma.y, z+vectorSuma.z);
            return nuevoVector;
        }
}
