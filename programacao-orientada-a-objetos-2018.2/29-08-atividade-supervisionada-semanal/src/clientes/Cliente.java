package clientes;

public class Cliente {
	
	private String nome;
	private String cpf;
	private Endereco endereco = new Endereco();

	public Cliente() {
		// TODO Auto-generated constructor stub
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getCpf() {
		return cpf;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public Endereco getEndereco() {
		return endereco;
	}
	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}
	
	@Override
	public String toString() {
		return "Nome = " + nome
				+ "\nCPF = " + cpf
				+ "\nRua = " + endereco.getRua()
				+ "\nNúmero = " + endereco.getNumero()
				+ "\nComplemento = " + endereco.getComplemento()
				+ "\nCEP = " + endereco.getCep()
				+ "\nBairro = " + endereco.getBairro()
				+ "\nCidade = " + endereco.getCidade()
				+ "\nEstado = " + endereco.getEstado();
	}
}