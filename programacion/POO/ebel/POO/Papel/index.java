public class index {
    public static void main(String[] args) {
        Papel papel = new Papel();
        Birome birome = new Birome(15);


        birome.escribir("Hola mundo a ver si no se termina la tinta", papel);

        if(birome.quedaTinta()){
            System.out.println(papel.toString());
        }
    }
}
