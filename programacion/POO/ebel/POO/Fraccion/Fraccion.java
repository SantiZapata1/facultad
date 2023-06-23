import javax.swing.plaf.synth.SynthSeparatorUI;

public class Fraccion {
    public int dividiendo;
    public int divisor;

    public Fraccion(int dividiendo, int divisor) {
        this.dividiendo = dividiendo;
        this.divisor = divisor;
    }

    public String toString() {
        return this.dividiendo + "/" + this.divisor;
    }

    public Fraccion suma(Fraccion segundaFraccion) {
        int numerador = 0, denominador = 1;
        if (this.divisor == segundaFraccion.divisor) {
            numerador = this.dividiendo + segundaFraccion.dividiendo;
            denominador = this.divisor;
        } else {
            numerador = this.dividiendo + segundaFraccion.dividiendo;
            int backup = 0; 
            int resto = this.divisor % segundaFraccion.divisor; 
            System.out.println("El resto es " + resto);
            if (resto == 0) { 
                denominador = this.divisor / segundaFraccion.divisor;
            }else {
                while (resto != 0) { 
                    backup = resto;
                    resto = this.divisor % resto;
                }
                denominador = backup;
            }
        }
        Fraccion resultado = new Fraccion(numerador, denominador);
        return resultado;
    }

}
