// Mylena Mariana Pires Barbosa
package exercicio01;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		
		ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();
		
		Funcionario h1 = new Horista("NomeHorista1", "SobrenomeHorista1", 1, 10.00);
		funcionarios.add(h1);
		Funcionario h2 = new Horista("NomeHorista2", "SobrenomeHorista2", 2, 20.00);
		funcionarios.add(h2);
		
		Funcionario a1 = new Administrador("NomeAdministrador1", "SobrenomeAdministrador1", 1000);
		funcionarios.add(a1);
		Funcionario a2 = new Administrador("NomeAdministrador2", "SobrenomeAdministrador2", 2000);
		funcionarios.add(a2);
		Funcionario a3 = new Administrador("NomeAdministrador3", "SobrenomeAdministrador3", 3000);
		funcionarios.add(a3);
		Funcionario a4 = new Administrador("NomeAdministrador4", "SobrenomeAdministrador4", 4000);
		funcionarios.add(a4);
		
		Funcionario c1 = new Comissionado("NomeComissionado1", "SobrenomeComissionado1", 1000, 1, 10);
		funcionarios.add(c1);
		Funcionario c2 = new Comissionado("NomeComissionado2", "SobrenomeComissionado2", 2000, 2, 20);
		funcionarios.add(c2);
		Funcionario c3 = new Comissionado("NomeComissionado3", "SobrenomeComissionado3", 3000, 3, 30);
		funcionarios.add(c3);
		
		Funcionario g1 = new Gerente("NomeGerente1", "SobrenomeGerente1", 1000, 100);
		funcionarios.add(g1);
		
		for(int i = 0; i < funcionarios.size(); i++) {
			System.out.print(funcionarios.get(i).toString());
			if(funcionarios.get(i) instanceof Gerente) {
				System.out.println(((Gerente)funcionarios.get(i)).ganhoMensal());
			}
			if(funcionarios.get(i) instanceof Administrador) {
				System.out.println(((Administrador)funcionarios.get(i)).ganhoMensal());
			}
			if(funcionarios.get(i) instanceof Comissionado) {
				System.out.println(((Comissionado)funcionarios.get(i)).ganhoMensal());
			}
			if(funcionarios.get(i) instanceof Horista) {
				System.out.println(((Horista)funcionarios.get(i)).ganhoMensal());
			}
		}

	}
}

//Questão 1
//Considere a seguinte situação de uma empresa:
//– Todos os Funcionários tem como atributos : nome e sobrenome;
//– Funcionários podem ser gerentes, administradores, comissionados e horistas;
//– Um administrador ganha um salário mensal, sendo um atributo complementar da classe
//Administrador;
//– Um Gerente ganha um salário mensal mais uma bonificação, sendo dois atributo a mais da classe
//Gerente;
//– Comissionados ganham um salário mensal mais uma comissão em cima do total de vendas, tendo
//como atributos complementares : salario mensal, total de vendas e percentual de comissão;
//– Horistas ganham em cima da quantidade de horas trabalhadas tendo como atributos próprios:
//quantidade de horas trabalhadas e valor da hora
//1. Criar as classes necessárias para implementar a situação acima, usando Herança e polimorfismo;
//2. Criar os métodos gets e sets para os atributos;
//3. Criar métodos para mostrar os dados dos funcionários;
//4. Criar métodos em cada classe para mostrar os ganhos mensais de acordo com a forma de pagamento
//de cada funcionário;
//5. Na classe principal:
//– instanciar 10 funcionários sendo 2 horistas, 4 administradores, 3 comissionados e 1 gerente;
//– Armazenar os funcionários em um vetor;
//– Percorrer o vetor mostrando os dados dos funcionários e quanto cada um ganha por mês.
