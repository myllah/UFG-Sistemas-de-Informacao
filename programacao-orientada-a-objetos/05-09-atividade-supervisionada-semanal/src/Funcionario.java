
public class Funcionario extends Pessoa{
	
	private String matricula;
	private double salario;		
	
	public Funcionario(String matricula, String nome) {
		super(nome);
		this.matricula = matricula;
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
	
	public String toString() {
		return(super.toString()
				+ "\nMatrícula: " + matricula
				+ "\nSalario: " + salario);
	}
	
}
