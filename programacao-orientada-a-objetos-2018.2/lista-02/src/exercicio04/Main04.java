package exercicio04;

import java.util.ArrayList;

public class Main04 {

	public static void main(String[] args) {
		
		ArrayList<Funcionario> lista = new ArrayList<Funcionario>();
		
		Funcionario f1 = new Funcionario("Funcionario01", "0001");
		f1.setTelefone("1111-1111");
		f1.setSalario(1000);
		lista.add(f1);
		
		Funcionario f2 = new Funcionario("Funcionario02", "0002");
		f2.setTelefone("2222-2222");
		f2.setSalario(2000);
		lista.add(f2);
		
		Funcionario f3 = new Funcionario("Funcionario03", "0003");
		f3.setTelefone("3333-333");
		f3.setSalario(3000);
		lista.add(f3);
		
		Funcionario f4 = new Funcionario("Funcionario04", "0004");
		f4.setTelefone("4444-4444");
		f4.setSalario(4000);
		lista.add(f4);
		
		Funcionario f5 = new Funcionario("Funcionario05", "0005");
		f5.setTelefone("5555-5555");
		f5.setSalario(5000);
		lista.add(f5);
		
		Gerente g1 = new Gerente("Gerente01", "0006");
		g1.setTelefone("6666-6666");
		g1.setSalario(6000);
		g1.setBonificacao(100);
		g1.setTipo("Tipo 01");
		lista.add(g1);
		
		Gerente g2 = new Gerente("Gerente02", "0007");
		g2.setTelefone("7777-7777");
		g2.setSalario(7000);
		g2.setBonificacao(200);
		g2.setTipo("Tipo 02");
		lista.add(g2);
		
		Vendedor v1 = new Vendedor("Vendedor01", "0008");
		v1.setTelefone("8888-8888");
		v1.setSalario(8000);
		int vendas1[] = {8,8,8,8,8,8,8,8,8,8,8,8};
		v1.setTotalVendas(vendas1);
		v1.setComissao(100);
		lista.add(v1);
		
		Vendedor v2 = new Vendedor("Vendedor02", "0009");
		v2.setTelefone("9999-9999");
		v2.setSalario(9000);
		int vendas2[] = {9,9,9,9,9,9,9,9,9,9,9,9,9};
		v2.setTotalVendas(vendas2);
		v2.setComissao(200);
		lista.add(v2);
		
		Vendedor v3 = new Vendedor("Vendedor03", "0010");
		v3.setTelefone("1111-1111");
		v3.setSalario(10000);
		int vendas3[] = {10,10,10,10,10,10,10,10,10,10,10,10};
		v3.setTotalVendas(vendas3);
		v3.setComissao(300);
		lista.add(v3);
		
		Vendedor v4 = new Vendedor("Vendedor04", "0011");
		v4.setTelefone("2222-2222");
		v4.setSalario(11000);
		int vendas4[] = {11,11,11,11,11,11,11,11,11,11,11,11};
		v4.setTotalVendas(vendas4);
		v4.setComissao(400);
		lista.add(v4);
		
		Vendedor v5 = new Vendedor("Vendedor05", "0012");
		v5.setTelefone("3333-3333");
		v5.setSalario(12000);
		int vendas5[] = {12,12,12,12,12,12,12,12,12,12,12,12};
		v5.setTotalVendas(vendas5);
		v5.setComissao(500);
		lista.add(v5);
		
		for(int i = 0; i < lista.size(); i++) {
			System.out.println(lista.get(i) + "\n");
		}
		
		for(int i = 0; i < lista.size(); i++) {
			lista.get(i).aumentaSalario(10);
		}
		for(int i = 0; i < lista.size(); i++) {
			System.out.println(lista.get(i) + "\n");
		}
		
	}
}

//Exercício 4
//
//1 - Codifique as classes dos exemplos da aula 
//de Herança (Funcionário e Gerente). Crie os
//construtores e os métodos gets e sets necessários.
//2 - Codifique uma outra classe de vendedor onde
//terá além dos dados de funcionários, um vetor
//com o total de vendas nos 12 meses do ano e um
//percentual de comissão.
//3 - Codifique um método que aumenta o salário
//de acordo com um percentual recebido por parâmetro.
//4 - Codifique um método que calcula o total de 
//proventos recebidos por ano pelo funcionário, 
//sendo (salário + bonificação) * 12. Para o vendedor,
//é acrescentada a comissão do mês. 
//5 - Codifique um programa que crie 5 funcionários,
//2 gerentes e 5 vendedores e armazene-os em listas.
//6 - Após preenchidas as listas, percorra mostrando 
//os dados dos funcionários e o total de proventos de 
//cada um.
//7 - Aplique um aumento de 10% a todos os funcionários 
//e repita o 6
//8 – Crie uma classe Empresa que tenha um cnpj, um nome
//e uma lista de Funcionários
//9 – Crie um construtor para Empresa que receba o cnpj
//e o nome
//10 – Crie um método em Empresa que receba como parâmetro
//um Funcionário e adicione-o na lista
//11 – Crie um método em Empresa que mostre a lista de Funcionários
//12 – Crie um novo Programa de cadastro para cadastramento da
//Empresa com seus Funcionários fazendo as mesmas funções 
//do programa anterior.
