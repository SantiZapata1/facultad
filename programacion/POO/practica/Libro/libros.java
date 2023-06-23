
public class libros {

    //atributos
    int isbn;
    String titulo;
    String autor;
    int nroPaginas;

    //set y get de cada atributo             set: procedimiento con parametros ---- get: funcion sin parametros
    public void setISBN(int numero){
        this.isbn=numero;
    }
    public void setTitulo(String nombre){
        this.titulo=nombre;
    }
    public void setAutor(String nombre){
        this.autor=nombre;
    }
    public void setNroPaginas(int numero){
        this.nroPaginas=numero;
    }

    public int getISBN(){
        return isbn;
    }
    public String getTitulo(){
        return titulo;
    } 
    public String getAutor(){
        return autor;
    } 
    public int getNroPaginas(){
        return nroPaginas;
    }



    @Override
    public String toString(){
        return "El libro "+titulo+" con ISBN "+isbn+" creado por el autor "+autor+" tiene "+nroPaginas+" paginas."    ;
    }



    
}
