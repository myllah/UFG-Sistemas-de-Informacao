package exercicio02;

public class Filme {
	private int id;
	private String nome;
	private String genero;
	private int ano;
	private String autor;
	
	Filme(int id, String nome){
		this.id = id;
		this.nome = nome;
	}
	
	public int getId() {
		return id;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getGenero() {
		return genero;
	}

	public void setGenero(String genero) {
		this.genero = genero;
	}

	public int getAno() {
		return ano;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public String toString() {
		return "ID = " + id
				+ " Nome = " + nome
				+ " Gênero = " + genero
				+ " Ano = " + ano
				+ " Autor = " + autor + "\n";
	}
}
