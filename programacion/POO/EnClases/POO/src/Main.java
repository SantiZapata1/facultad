public class Main {

    public static void main(String args[]){

        Cuenta cuenta1 = new Cuenta("Pedro Garcia");

        Cuenta cuenta2 = new Cuenta("Maria Gonzalez", 500000);

        double saldoActual = cuenta1.retirar(10000);
        System.out.println(cuenta1);

        if(cuenta1.getSaldo()>cuenta2.retirar(10000)){
            System.out.println("saldo mayor a 2000");
        }
        //System.out.println("Saldo actual de la cuenta de :"+cuenta1.getTitular()+" saldo: "+saldoActual);
    }
}
