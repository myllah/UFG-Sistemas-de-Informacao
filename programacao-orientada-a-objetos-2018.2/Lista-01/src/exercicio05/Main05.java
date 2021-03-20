//Mylena Mariana Pires Barbosa
package exercicio05;
import java.util.Scanner;

public class Main05 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int vetor[] = new int[10];
		for(int i = 0; i < 10; i++) {
			vetor[i] = in.nextInt();
		}
		
		/// mostra vetor
		System.out.print(" Vetor = " );
		for(int i = 0; i < 10; i++) {
			System.out.print(vetor[i] + " ");
		}
		
		int soma = 0;
		for(int i = 0; i < 10; i++) {
			soma = soma + vetor[i];
		}
		System.out.println("\n Soma = " + soma);
		
		int media = soma/10;
		System.out.println(" Media = " + media);
		
		long quadrado[] = new long[10];
		System.out.print(" Quadrado do Vetor = " );
		for(int i = 0; i < 10; i++) {
			quadrado[i] = (long)Math.pow(vetor[i],2);
		}
		
		for(int i = 0; i < 10; i++) {
			System.out.print(quadrado[i] + " ");
		}
		
		System.out.print("\n Vetor Inverso = " );
		for(int i = 9; i >= 0; i--) {
			System.out.print(vetor[i] + " ");
		}
		
		long quadradoInverso[] = new long[10];
		System.out.print("\n Quadrado do Vetor Inverso = " );
		for(int i = 0; i < 10; i++) {
			quadradoInverso[i] = (long)Math.pow(vetor[i],2);
		}
		
		for(int i = 0; i < 10; i++) {
			System.out.print(quadradoInverso[i] + " ");
		}
	}
}

//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados
//pelo usuário (Scanner ou JoptionPane), as classes 
//String e Math, e vetores, implemente os exercícios:
//5 - Criar um programa que receba 10 valores inteiros 
//e armazene-os em um vetor. Posteriormente o programa 
//deve varrer o vetor e mostrar a soma, a média, o
//vetor em ordem inversa e gerar um novo vetor com
//o quadrado dos valores.
