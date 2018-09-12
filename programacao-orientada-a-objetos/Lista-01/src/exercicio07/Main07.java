//Mylena Mariana Pires Barbosa
package exercicio07;
import java.util.Scanner;
public class Main07 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		boolean n;
		do {
			n = true;
			System.out.println("Digite o nome");
			String nome = in.next();
			
			for(int i = 0; i < nome.length(); i++) {
				if(Character.isDigit(nome.charAt(i)) == true) {
					System.out.println("Nome inválido");
					n = false; break;
				}
			}
		}while(n == false);
		
		do {
			n = true;
			
			System.out.println("Digite o telefone");
			String telefone = in.next();
			
			for(int i = 0; i < telefone.length(); i++) {
				if(Character.isDigit(telefone.charAt(i)) == false) {
					System.out.println("Número de telefone inválido");
					n = false; break;
				}
			}
		}while(n == false);
	
		System.out.println("Tenha um bom dia!");
	}

}
//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados
//pelo usuário (Scanner ou JoptionPane), as classes
//String e Math, e vetores, implemente os exercícios:

//7 - Criar um programa que entre com o nome e o número
//de telefone e valide os dados. Os nomes só podem ter
//caracteres alfabéticos e o telefone só numéricos.
//Use Character.isDigit().