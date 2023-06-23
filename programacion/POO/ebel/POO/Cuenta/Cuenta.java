public class Cuenta {
        String titular;
        float cantidad;

        /*Constructores */
        public Cuenta(String titular, float cantidad){
            this.titular = titular;
        }

        public void setTitular(String titular){
            this.titular = titular; 
        }
        
        public void setCantidad(float cantidad){
            this.cantidad = cantidad; 
        }
        public float getCantidad() {
            return cantidad;
        }
        public String getTitular() {
            return titular;
    }
}
