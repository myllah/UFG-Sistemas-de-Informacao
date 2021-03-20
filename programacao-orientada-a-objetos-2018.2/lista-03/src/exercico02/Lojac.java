package exercico02;

public class Lojac extends Loja {
	
	private String endereco;
	private String gerente;

	public Lojac(int id, String cnpj, String razaoSocial, String endereco, String gerente) {
		super(id, cnpj, razaoSocial);
		this.endereco = endereco;
		this.gerente = gerente;
	}

	public String getEndereco() {
		return endereco;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public String getGerente() {
		return gerente;
	}

	public void setGerente(String gerente) {
		this.gerente = gerente;
	}

	@Override
	public String toString() {
		return super.toString() + ", endereco = " + endereco + ", gerente = " + gerente;
	}
	
}
