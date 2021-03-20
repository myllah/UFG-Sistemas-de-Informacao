package exercicio01;

public class Gerente extends Funcionario {

	private double salario;
	private double bonificacao;
	
	public Gerente(String nome, String sobrenome, double salario, double bonificacao) {
		super(nome, sobrenome);
		this.salario = salario;
		this.bonificacao = bonificacao;
	}
	
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public double getBonificacao() {
		return bonificacao;
	}
	public void setBonificacao(double bonificacao) {
		this.bonificacao = bonificacao;
	}
	public String ganhoMensal() {
		return " Ganho mensal = " + (salario + bonificacao);
	}
	
	@Override
	public String toString() {
		return super.toString() + " Salario = " + salario + " Bonificacao = " + bonificacao;
	}
	
	
	
}
