public class test {
    public static void main(String[] args) {
        Vector nuevoVector = new Vector(5, 2, 6);
        Vector segundo = new Vector(5, 3, 2);
        String prueba = nuevoVector.toString();
        Vector suma = nuevoVector.sumar(segundo);
        Vector multiplicacionVector = nuevoVector.multiplicar(50);
        System.out.println(multiplicacionVector);
    }
    
}
