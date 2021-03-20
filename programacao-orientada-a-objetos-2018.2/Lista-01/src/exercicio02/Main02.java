//Mylena Mariana Pires Barbosa
package exercicio02;
import javax.swing.JOptionPane;
public class Main02 {

	public static void main(String[] args) {
				
		double numero = Double.parseDouble(JOptionPane.showInputDialog("Digite um número decimal"));
		
		JOptionPane.showMessageDialog(null, "Usando o Math.round: " 
				+ Math.round(numero), "Math.round", 1);
		
		JOptionPane.showMessageDialog(null, "Usando o Math.ceil: " 
				+ Math.ceil(numero), "Math.ceil", 1);
		
		JOptionPane.showMessageDialog(null, "Usando o Math.floor: " 
				+ Math.floor(numero), "Math.floor", 1);				
	}
}

//Exercícios Laboratório Programação
//Usando as classes que permitem a entrada de dados 
//pelo usuário (Scanner ou JoptionPane), as classes 
//String e Math, e vetores, implemente os exercícios:
//2 - Criar um programa que leia um valor decimal e mostre
//esse valor arredondado usando os três métodos de 
//arredondamento da classe Math.
