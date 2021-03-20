package exercicio01;

import java.util.ArrayList;
import java.util.Calendar;
import javax.swing.JOptionPane;

public class Main01 {
	
	public static void main(String args[]) {
		
		ArrayList<Cliente> lista = new ArrayList<Cliente>();
		
		String nome = null;
		String sexo = null;
		int dia = 0;
		int mes = 0;
		int ano = 0;
		int idade = 0;
		
		Calendar calendar = Calendar.getInstance();
	     
	     int diaAtual = calendar.get(Calendar.DAY_OF_MONTH);
	     int mesAtual = calendar.get(Calendar.MONTH);
	     int anoAtual = calendar.get(Calendar.YEAR);
	     
	     System.out.println("Data atual: "
	    		 + diaAtual + "/"
	    		 + mesAtual + "/"
	    		 + anoAtual);
		
		do {
			try {
				nome = JOptionPane.showInputDialog("Digite o nome");
				if(nome.equalsIgnoreCase("fim")) {
					break;
				}
				sexo = JOptionPane.showInputDialog("Digite o sexo");
				if(sexo.equals("F") || sexo.equals("f") || sexo.equals("M") || sexo.equals("m")) {
					
				}else {
					throw new Sexo();
				}
				
				dia = Integer.parseInt(JOptionPane.showInputDialog("Digite o dia de nascimento"));
				if(dia < 1 || dia > 31) {
					throw new Dia();
				}
				
				mes = Integer.parseInt(JOptionPane.showInputDialog("Digite o mes de nascimento"));
				if(mes < 1 || mes > 12) {
					throw new Mes();
				}
				
				ano = Integer.parseInt(JOptionPane.showInputDialog("Digite o ano de nascimento"));
				if(ano < 1800 || ano > 2018) {
					throw new Ano();
				}
				
				if(mes > mesAtual) {
					idade = anoAtual - ano-1;
				}if(mes < mesAtual){
					idade = anoAtual - ano;
				}if(mes == mesAtual){
					if(dia > diaAtual) {
						idade = anoAtual - ano-1;
					}if(dia < diaAtual || dia == diaAtual) {
						idade = anoAtual - ano;
					}
				}
				
				Cliente cliente = new Cliente(nome, sexo.toUpperCase(), idade);
				
				lista.add(cliente);
				
			}catch(Sexo s){
				JOptionPane.showMessageDialog(null, "Sexo Inválido", "ERRO", 0);
			}catch(Dia c){
				JOptionPane.showMessageDialog(null, "Dia de Nascimento Inválido", "ERRO", 0);
			}catch(Mes m){
				JOptionPane.showMessageDialog(null, "Mes de Nascimento Inválido", "ERRO", 0);
			}catch(Ano a){
				JOptionPane.showMessageDialog(null, "Ano de Nascimento Inválido", "ERRO", 0);
			}
			
		}while(!nome.equalsIgnoreCase("fim"));
		
		for(int i = 0; i < lista.size(); i++) {
			JOptionPane.showMessageDialog(null, lista.get(i).toString(), "Cliente " + i+1, 1);
		}
			
	}
	
}

//////////////////////////////////////////

//1 – Escreva um programa que receba dados sobre clientes (nome, sexo
//e separadamente dia, mês e ano de nascimento) e valide os 
//dados de entrada só permitindo os sexos F,M através da criação de 
//um tipo de exceção próprio; e valores numéricos para dia, mês e ano 
//de nascimento também através do tratamento de exceções de tipo de 
//entrada inválido.

//A entrada de dados deve continuar até que o usuário digite “fim” no nome.

//Se os valores forem válidos, instanciar um cliente, calcular a idade
//do cliente baseada na data atual  e gravar o objeto cliente em um vetor. 

//Os atributos da classe cliente devem ser (nome, sexo e idade). 
//Ao final, ler o vetor e mostrar os dados de cada cliente.
