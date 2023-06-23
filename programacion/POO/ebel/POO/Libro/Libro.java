public class Libro {
    private String  ISBN;
    private String Titulo;
    private String Autor;
    private int numeroPaginas;

    /*Setters */
    public void setISBN(String ISBN){
        this.ISBN = ISBN;
    }
    public void setTitulo(String Titulo){
        this.Titulo = Titulo;
    }
    public void setAutor(String Autor){
        this.Autor = Autor;
    }
    public void setnumeroPaginas(int numeroPaginas){
        this.numeroPaginas = numeroPaginas;
    }

    /*Getters */
    public String getISBN(){
        return this.ISBN;
    }
    public String getTitulo(){
        return this.Titulo;
    }
    public String getAutor(){
        return this.Autor;
    }
    public int getNumPaginas(){
        return this.numeroPaginas;
    }
    
    /*Metodos */
    public String toString(){
        return "El libro con ISBN " + this.ISBN + " creado por el autor "+ this.Autor + " tiene " + this.numeroPaginas;
    }
    
}
