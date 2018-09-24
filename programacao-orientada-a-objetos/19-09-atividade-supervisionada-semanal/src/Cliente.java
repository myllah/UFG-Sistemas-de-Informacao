
public class Cliente {
	
	private String nome;
	private String telefone;
		
	public Cliente() {
		super();
	}
	public Cliente(String nome, String telefone) {
		super();
		this.nome = nome;
		this.telefone = telefone;
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
	@Override
	public String toString() {
		return "\nNome do Cliente = " + nome
				+ "\nTelefone = " + telefone;
	}
	
}
