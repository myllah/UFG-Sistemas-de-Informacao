public class Pessoa {
	String nome;
	String nacionalidade;
	
	public String toString() {
		return nome + " (" + nacionalidade + ")";
	}
	
	Pessoa (String nome, String nacionalidade) {
		this.nome = nome;
		this.nacionalidade = nacionalidade;
	}

}