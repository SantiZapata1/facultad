public class MiClase {
    private int valor;

    public MiClase(int valor) {
        this.valor = valor;
    }

    public void metodo1() {
        // Código del método
    }

    public int metodo2() {
        // Código del método
        return valor;
    }

    public static void main(String[] args) {
        MiClase objeto = new MiClase(10); // Creación de un objeto utilizando el constructor

        objeto.metodo1(); // Llamada a un método de la clase

        int resultado = objeto.metodo2(); // Llamada a un método con retorno

        System.out.println(resultado); // Imprime el valor obtenido del método
    }
}
