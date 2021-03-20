//Mylena Mariana Pires Barbosa
package exercicio03;
import javax.swing.JOptionPane;

public class Main03 {

	public static void main(String[] args) {
		
		int n1, n2;
		n1 = Integer.parseInt(JOptionPane.showInputDialog("Informe o primeiro número"));
		n2 = Integer.parseInt(JOptionPane.showInputDialog("Informe o segundo número"));
		int aux;
		if(n2 > n1) {
			aux = n2;
			n2 = n1;
			n1 = aux;
			JOptionPane.showMessageDialog(null,"O maior número é: " + n1,
					"Maior Número", 1);
			JOptionPane.showMessageDialog(null,"O menor número é: " + n2,
					"Menor Número", 1);
		} else if(n1 > n2) {
			JOptionPane.showMessageDialog(null,"O maior número é: " + n1,
					"Maior Número", 1);
			JOptionPane.showMessageDialog(null,"O menor número é: " + n2,
					"Menor Número", 1);
		}else {
			JOptionPane.showMessageDialog(null, "Os números inseridos são iguais: " + n1, 
					"Números iguais", 1);
		}
		
	}
}

//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados 
//pelo usuário (Scanner ou JoptionPane), as classes 
//String e Math, e vetores, implemente os exercícios:
//3 - Criar um programa que leia dois números e mostre
//o maior e o menor.