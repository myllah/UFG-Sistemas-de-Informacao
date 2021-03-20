package exercicio01;

public class Administrador extends Funcionario {

	private double salario;

	public Administrador(String nome, String sobrenome, double salario) {
		super(nome, sobrenome);
		this.salario = salario;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}
	public String ganhoMensal() {
		return " Ganho mensal = " + salario;
	}
	@Override
	public String toString() {
		return super.toString() + " Salario = " + salario;
	}
	
}
