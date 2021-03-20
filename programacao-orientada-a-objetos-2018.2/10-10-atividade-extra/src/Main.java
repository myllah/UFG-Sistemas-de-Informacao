
import java.text.DecimalFormat;
import java.util.InputMismatchException;

import javax.swing.JOptionPane;

public class Main {

	public static void main(String[] args) {

		DecimalFormat dc = new DecimalFormat("0,00");
		Calc c = new Calc();

		try {
			c.n1 = Integer.parseInt(JOptionPane.showInputDialog(null,
					"Entre com o primeiro número:"));

			if(c.n1 < 0) {
				throw new NumeroNegativo();
			}
			
			c.n2 = Integer.parseInt(JOptionPane.showInputDialog(null,
					"Entre com o segundo número:"));
			
			if(c.n2 < 0) {
				throw new NumeroNegativo();
			}

		JOptionPane.showMessageDialog(null,
				"Soma : " + dc.format(c.somar()));
		JOptionPane.showMessageDialog(null,
				"Subtração : " + dc.format(c.diminuir()));
		JOptionPane.showMessageDialog(null,
				"Multiplicação : " + dc.format(c.multiplicar()));
		JOptionPane.showMessageDialog(null,
				"Divisão : " + dc.format(c.dividir()));
		
		if(c.n1 < 0 || c.n2 < 0) {
			throw new NumeroNegativo();
		}
		
		}catch(NumeroNegativo nn) {
			JOptionPane.showMessageDialog(null, "Entrada de número negativo", "ERRO", 0);
		
		}catch(InputMismatchException ime){
			JOptionPane.showMessageDialog(null, "Entrada de Dados Inválida", "ERRO", 0);
			
		}catch(NumberFormatException nfe){
			JOptionPane.showMessageDialog(null, "Valor Inválido", "ERRO", 0);
			
		}catch(ArithmeticException ae){
			JOptionPane.showMessageDialog(null, "Erro divisão por zero", "ERRO", 0);
			
		}
	}
}

//Laboratório Controle de Exceções
//Calculadora com tratamento de Exceção e levantando Exceção de Número Negativo 
//
//Dada a classe Calc que executa as operações básicas de uma calculadora,
//e a classe Principal por onde o usuário entra com os dados para executar as operações.
//Altere o código para acrescentar os tratamentos de exceção para o método dividir 
//evitando o erro de uma divisão por zero; e crie uma exceção (classe de exceção 
//– ex: NumeroNegativo) que seja lançada toda vez que um número negativo for digitado. 
//As exceções que devem ser tratadas: InputMismatchException (“Entrada de Dados Inválida”),
//NumberFormatException (“Valor Inválido”), ArithmeticException (“Erro divisão por zero”) e 
//NumeroNegativo (“Entrada de número negativo”).
