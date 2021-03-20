package exercicio04;

import java.util.Arrays;

public class Vendedor extends Funcionario {
	int totalVendas[] = new int[12];
	double comissao;
	
	public Vendedor(String nome, String matricula) {
		super(nome, matricula);
	}
	public int[] getTotalVendas() {
		return totalVendas;
	}
	public void setTotalVendas(int[] totalVendas) {
		this.totalVendas = totalVendas;
	}
	public double getComissao() {
		return comissao;
	}
	public void setComissao(double comissao) {
		this.comissao = comissao;
	}
	@Override
	public String toString() {
		return super.toString() +
			"\nTotal Vendas: " + Arrays.toString(totalVendas)
			+ "\nComissao: " + comissao;
	}	
	
	
}

