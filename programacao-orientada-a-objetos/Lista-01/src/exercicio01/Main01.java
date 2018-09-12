//Mylena Mariana Pires Barbosa
package exercicio01;
import java.util.Scanner;
public class Main01 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in); 
		
		String nome1 = in.next();
		String nome2 = in.next();
		
		System.out.println(nome1 + " tem " + nome1.length() + " letras");
		System.out.println(nome2 + " tem " + nome2.length() + " letras");

		if(nome1.equals(nome2)) {
			System.out.println("Os nomes são iguais");
		}else {
			System.out.println("Os nomes são diferentes");
		}
	}
}

//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados 
//pelo usuário (Scanner ou JoptionPane), as classes 
//String e Math, e vetores, implemente os exercícios:
//1 - Criar um programa que leia dois nomes e mostre a 
//quantidade de letras de cada um, os nomes em maiúsculo,
//e se são iguais ou diferentes. 
