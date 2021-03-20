package exercicio04;

public class Gerente extends Funcionario{
	
	private double bonificacao;
	private String tipo;

	public Gerente(String nome, String matricula) {
		super(nome, matricula);
	}

	public void setBonificacao(double bonificacao) {
		this.bonificacao = bonificacao;
	}
		
	public double getBonificacao() {
		return bonificacao;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	public String toString() {
		return(super.toString()
				+ "\nBonificação: " + bonificacao
				+ "\nTipo: " + tipo);
	}
}
