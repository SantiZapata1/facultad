
public class Ejemplo {
    public static void main(String[] args) {
        MiClase instancia = new MiClase();

        instancia.setAtributoPrivado(42);
        System.out.println(instancia.getAtributoPrivado()); // Imprime 42
    }
}
