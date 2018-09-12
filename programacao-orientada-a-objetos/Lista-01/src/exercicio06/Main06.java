//Mylena Mariana Pires Barbosa
package exercicio06;
import java.util.Scanner;
public class Main06 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.println("Digite a quantidade de números, e logo em seguida os números");
		int qtd = in.nextInt();

		int vetor[] = new int[qtd];

		for (int i = 0; i < qtd; i++) {
			vetor[i] = in.nextInt();
		}

		for (int i = 0; i < qtd; i++) {
			for (int j = 0; j < qtd; j++) {
				if(vetor[i] < vetor[j]) {
					int aux;
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
			}
		}
		System.out.println("Ordem Crescente");
		for (int i = 0; i < qtd; i++) {
			System.out.print(vetor[i] + " ");
		}
		

		for (int i = 0; i < qtd; i++) {
			for (int j = 0; j < qtd; j++) {
				if(vetor[i] > vetor[j]) {
					int aux;
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
			}
		}
		System.out.println("\nOrdem Decrescente ");
		for (int i = 0; i < qtd; i++) {
			System.out.print(vetor[i] + " ");
		}
		
		System.out.println("\nInforme o valor para consulta");
		boolean flag = false;
		int n = in.nextInt();
		for (int i = 0; i < qtd; i++) {
			if(n == vetor[i]) {
				System.out.println("O valor está na posição " + i);
				flag = true;
			}
		}
		if(flag == false) {
			System.out.println("O valor não existe no vetor");
		}
	}

}

//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados
//pelo usuário (Scanner ou JoptionPane), as classes
//String e Math, e vetores, implemente os exercícios:
//6 - Armazenar em um vetor uma quantidade de números
//informada pelo usuário inicialmente. Mostrar o vetor 
//em ordem crescente e em ordem decrescente. Solicitar
//um novo valor do usuário e informar se existe ou não
//no vetor e em que posição.