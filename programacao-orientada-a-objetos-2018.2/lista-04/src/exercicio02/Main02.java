package exercicio02;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Calendar;
import javax.swing.JOptionPane;

public class Main02 {
	
	public static void main(String args[]) throws ClassNotFoundException, IOException {	
		
		FileOutputStream fos;
		ObjectOutputStream oos;
		
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
				
				Cliente cliente = new Cliente(nome,sexo, idade);
				
				fos = new FileOutputStream("arquivo.txt", true);
				oos = new ObjectOutputStream(fos);
				oos.writeObject(cliente + "\n");
				oos.close();	
			
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
		
//		FileInputStream fis;
//		ObjectInputStream ois;
//		for(int i = 0; i < 5; i++) {
//			fis = new FileInputStream("arquivo.txt");
//			ois = new ObjectInputStream(fis);
//			System.out.println(ois.readObject());		
//			//ois.close();
//		}
		
//		ArrayList<Cliente> clientes = new ArrayList<Cliente>();
//		FileInputStream fis = new FileInputStream("arquivo.txt");
//	    Cliente cliente = new Cliente("","",0);
//	    clientes.add((Cliente)(new ObjectInputStream(fis)).readObject());
//	    clientes.add(cliente); 
//	        
//		for(int i = 0; i < clientes.size(); i++) {
//			System.out.println(clientes.get(i).toString());
//		}
		
		
		FileInputStream fis;
		ObjectInputStream ois;
		
		ArrayList<Cliente> clientes = new ArrayList<Cliente>();
		
		fis = new FileInputStream("arquivo.txt");
	    ois = new ObjectInputStream(fis);
	    
	    Cliente cliente = (Cliente) ois.readObject();
	    clientes.add(cliente); 
	    ois.close();
	    
			System.out.println(clientes.toString());	
		
 	}	
}


//2 – Utilizando o programa da lista anterior (controle de exceções) 
//que faz um cadastro de clientes, faça um novo programa semelhante 
//que ao invés de gravar em um vetor, grava linhas em um arquivo 
//texto com o nome, sexo e idade no seguinte formato :
//	“Nome: Maria - Sexo: Feminino – Idade: 20”.
