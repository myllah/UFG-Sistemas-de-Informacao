
public class Cliente extends Pessoa{

	int idade;
	String cpf;
	String status;

	public Cliente(String nome, String telefone,  int idade, String cpf) {
		super(nome);
		setTelefone(telefone);
		this.idade = idade;
		this.cpf = cpf;
		status = "A";
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public String getCpf() {
		return cpf;
	}

	public void setcpf(String cpf) {
		this.cpf = cpf;
	}

	public String getStatus() {
		return status;
	}

	public void setStatus(String status) {
		this.status = status;
	}
	
	public void desativarCliente() {
		String teste = getStatus();
		if(teste == "A") {
			setStatus("I");
		}
	}
	
	public String toString() {
		String situacao;
		if(status == "A") {
			situacao = "Ativo";
		}else {
			situacao = "Inativo";
		}
	return(getNome() 
			+ " - Tel: " + getTelefone() 
			+ " - Idade: " + idade + " anos"
			+ " - CPF: " + cpf
			+  " - " + situacao);	
	}
	
//	public String toString() {
//		return(super.toString()
//				+ "\nIdade: " + idade
//				+ "\nCPF" + cpf
//				+ "Status" + status);
//				
//	}

}