//Mylena Mariana Pires Barbosa
package exercicio08;
import java.util.Scanner;

public class Main08 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		System.out.println("Informe a quantidade de funcionários");
		int funcionarios = in.nextInt();
		
		String nome[] = new String[funcionarios];
		double salario[] = new double[funcionarios];
		
		for(int i = 0; i < funcionarios; i++) {
			System.out.println("Este é o funcionário número " + i);
			System.out.println("Informe o nome");
			nome[i] = in.next();
			System.out.println("Informe o salario ");
			salario[i] = in.nextDouble();
		}
		double maior, menor, media;
		maior = salario[0];
		int pmaior = 0;
		int pmenor = 0;
		menor = salario[0];
		media = 0;
		for(int i = 0; i < funcionarios; i++) {
			if(salario[i] > maior) {
				maior = salario[i];
				pmaior = i;
			}
			if(salario[i] < menor) {
				menor = salario[i];
				pmenor = i;
			}
			media = media + salario[i];
		}
		media = media/funcionarios;
		
		System.out.println("O maior salário é do funcionário: " + nome[pmaior]
				+ "\nCom um salário de: " + maior
				+ "\nNa posição: " + pmaior);
		
		System.out.println("\nO menor salário é do funcionário: " + nome[pmenor]
				+ "\nCom um salário de: " + menor
				+ "\nNa posição: " + pmenor);
		
		System.out.println("A média salarial é: " + media);
		
		System.out.println("Os funcionários com salários maiores que a média são:");
		for(int i = 0; i < funcionarios; i++) {
			if(salario[i] >= media) {
				System.out.println("Nome do funcionário: " + nome[i]
						+ "\nCom um salário de: " + salario[i]);
			}
		}
			
		System.out.println("\nOs funcionários com salários menores que a média são:");
		for(int i = 0; i < funcionarios; i++) {
			if(salario[i] < media) {
				System.out.println("Nome do funcionário: " + nome[i]
						+ "\nCom um salário de: " + salario[i]);
			}
		}
	}

}
//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados
//pelo usuário (Scanner ou JoptionPane), as classes
//String e Math, e vetores, implemente os exercícios:

//8 - Criar um programa que o usuário informe uma quantidade 
//X de funcionários e a seguir informe os X nomes e X salários.
//O programa deve armazenar os dados em 2 vetores.
//Posteriormente, o programa deve varrer o vetor de
//salários e mostrar:
//O maior salário (posição, nome e salário)
//O menor salário (posição, nome e salário)
//A média salarial
//Os maiores que a média (nomes e salários)
//Os menores que a média (nomes e salários)
