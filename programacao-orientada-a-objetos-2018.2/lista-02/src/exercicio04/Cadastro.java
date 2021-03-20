package exercicio04;
import java.util.Scanner;

public class Cadastro {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Empresa empresa = new Empresa("00000","Empresa");
		int tipo = 0;
		
		do{
			System.out.println("Informe o tipo:"
					+ "\n0 - Sair"
					+ "\n1 - Funcionário"
					+ "\n2 - Gerente"
					+ "\n3 - Vendedor"
					+ "\n4 - Ver todos os funcionarios da empresa"
					+ "\n5 - Aumentar Salario");
			tipo = in.nextInt();
			
			if(tipo == 1) {
				System.out.println("Digite o nome");
				String nome = in.next();
				
				System.out.println("Digite a matrícula");
				String matricula = in.next();
				
				Funcionario funcionario = new Funcionario(nome, matricula);
			
				System.out.println("Digite o telefone");
				String telefone = in.next();
				funcionario.setTelefone(telefone);
				
				System.out.println("Digite o salário");
				Double salario = in.nextDouble();
				funcionario.setSalario(salario);
				
				empresa.addFuncionario(funcionario);
				
			} else if(tipo == 2) {
				System.out.println("Digite o nome");
				String nome = in.next();
				
				System.out.println("Digite a matrícula");
				String matricula = in.next();
				
				Gerente gerente = new Gerente(nome, matricula);
			
				System.out.println("Digite o telefone");
				String telefone = in.next();
				gerente.setTelefone(telefone);
				
				System.out.println("Digite o salário");
				Double salario = in.nextDouble();
				gerente.setSalario(salario);
				
				System.out.println("Digite a bonificação");
				Double bonificacao = in.nextDouble();
				gerente.setBonificacao(bonificacao);
				
				System.out.println("Digite o tipo");
				String tipoG = in.next();
				gerente.setTipo(tipoG);
				
				empresa.addFuncionario(gerente);
			
			}else if(tipo == 3) {
				System.out.println("Digite o nome");
				String nome = in.next();
				
				System.out.println("Digite a matrícula");
				String matricula = in.next();
				
				Vendedor vendedor = new Vendedor(nome, matricula);
			
				System.out.println("Digite o telefone");
				String telefone = in.next();
				vendedor.setTelefone(telefone);
				
				System.out.println("Digite o salário");
				Double salario = in.nextDouble();
				vendedor.setSalario(salario);
				
				System.out.println("Digite o total de vendas por mês");
				int totalVendas[] = new int[12];
				for(int i = 0; i < 12; i++) {
					totalVendas[i] = in.nextInt();
				}
				vendedor.setTotalVendas(totalVendas);
				
				System.out.println("Digite a Comissão");
				Double comissao = in.nextDouble();
				vendedor.setComissao(comissao);
				
				empresa.addFuncionario(vendedor);
			
			}else if(tipo == 4) {
				System.out.println(empresa.toString());
			
			}else if(tipo == 5) {
				System.out.println("Digite a matrícula do funcionário");
				String matricula = in.next();
				for(int i = 0; i < empresa.getFuncionarios().size(); i++) {
					if(empresa.getFuncionarios().get(i).getMatricula().equals(matricula)) {
						System.out.println(empresa.getFuncionarios().get(i).toString());
						System.out.println("\nConfere o funcionário?"
								+ "\n1 - sim/continuar"
								+ "\n2 - não/cancelar");
						if(in.nextInt() == 1) {
							System.out.println("Digite o percentual de aumento");
							double percentual = in.nextDouble();
							empresa.getFuncionarios().get(i).aumentaSalario(percentual);
							System.out.println(empresa.getFuncionarios().get(i).toString() + "\n");				
						}	
					}
				}	
			}
		}while(tipo != 0);
		System.out.println("Tenha um bom dia!");
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
