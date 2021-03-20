package exercicio01;

public class Comissionado extends Funcionario {
	
	private double salario;
	private int totalVendas;
	private double comissao;
	
	public Comissionado(String nome, String sobrenome, double salario, int totalVendas, double comissao) {
		super(nome, sobrenome);
		this.salario = salario;
		this.totalVendas = totalVendas;
		this.comissao = comissao;
	}
	
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public int getTotalVendas() {
		return totalVendas;
	}
	public void setTotalVendas(int totalVendas) {
		this.totalVendas = totalVendas;
	}
	public double getComissao() {
		return comissao;
	}
	public void setComissao(double comissao) {
		this.comissao = comissao;
	}
	public String ganhoMensal() {
		return " Ganho mensal = " + (salario + comissao*totalVendas);
	}
	@Override
	public String toString() {
		return super.toString() + " Salario = " + salario
				+ " TotalVendas = " + totalVendas
				+ " Comissao = " + comissao;
	}

}
