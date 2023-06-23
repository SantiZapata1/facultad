public class Birome {
    int cantidadBirome;

    public Birome(int cantidad){
        this.cantidadBirome = cantidad;
    }

    public boolean quedaTinta(){
        return cantidadBirome>0;
    }

    public void escribir(String texto, Papel papel){
        int reducir = texto.length();
        this.cantidadBirome = this.cantidadBirome - reducir;
        if(quedaTinta()){
            papel.Escribir(texto);
        }else{
            System.out.println("Se ha acabado la tinta");
        }
    }

}
