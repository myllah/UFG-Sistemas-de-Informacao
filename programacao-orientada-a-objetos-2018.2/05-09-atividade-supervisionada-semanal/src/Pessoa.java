
public class Pessoa {
	
	private String nome;
	private String telefone;

	public Pessoa(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getTelefone() {
		return telefone;
	}
	
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	public String toString() {
		return("Nome: " + nome
				+ "\nTelefone: " + telefone);
	}
}
