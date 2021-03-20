package exercicio01;

public class Horista extends Funcionario {

	private int qtdHoras;
	private double valorHora;
	
	public Horista(String nome, String sobrenome, int qtdHoras, double valorHora) {
		super(nome, sobrenome);
		this.qtdHoras = qtdHoras;
		this.valorHora = valorHora;
	}
	
	public int getQtdHoras() {
		return qtdHoras;
	}
	public void setQtdHoras(int qtdHoras) {
		this.qtdHoras = qtdHoras;
	}
	public double getValorHora() {
		return valorHora;
	}
	public void setValorHora(double valorHora) {
		this.valorHora = valorHora;
	}
	public String ganhoMensal() {
		return " Ganho mensal = " + (qtdHoras*valorHora);
	}
	@Override
	public String toString() {
		return super.toString() + " QtdHoras = " + qtdHoras
				+ " ValorHora = " + valorHora;
	}

}
