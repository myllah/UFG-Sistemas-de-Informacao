package exercicio04;

public class Funcionario{
	
	private String nome;
	private String telefone;
	private String matricula;
	private double salario;		
	
	public Funcionario(String nome, String matricula) {
		this.nome = nome;
		this.matricula = matricula;
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

	public String getMatricula() {
		return matricula;
	}
	
	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public void aumentaSalario(double percentual) {
		this.salario = this.salario + this.salario*percentual/100;
	}
	
	public double recebimentoAnual() {
		return(salario*12);
	}
	
	public double recebimentoAnual(Gerente gerente) {
		return(salario*12 + gerente.getBonificacao()*12);
	}
	
	public double recebimentoAnual(Vendedor vendedor) {
		return(salario*12 + vendedor.getComissao()*12);
	}
	
	public String toString() {
		return("Nome: " + nome
				+ "\nTelefone: " + telefone
				+ "\nMatrícula: " + matricula
				+ "\nSalario: " + salario);
	}
	
}
