package exercicio05;
import java.util.Scanner;

public class Main05 {
	
	public static void main(String args[]) {
	
	Scanner in = new Scanner(System.in);
	
	System.out.println("A respeito do primeiro horário");
	System.out.println("Hora");
	int hora = in.nextInt();
	System.out.println("Minutos");
	int minutos = in.nextInt();
	System.out.println("Segundos");
	int segundos = in.nextInt();
	
	Horario h1 = new Horario(hora, minutos,segundos);
	
	if(h1.validaHora(h1.getHora()) == false
			|| h1.validaMinuto(h1.getMinuto()) == false
			|| h1.validaSegundo(h1.getSegundo()) == false) {
		System.out.println("vAlOrEs InVáLiDoS");
	}
	
	System.out.println("A respeito do segundo horário");
	System.out.println("Hora");
	hora = in.nextInt();
	System.out.println("Minutos");
	minutos = in.nextInt();
	System.out.println("Segundos");
	segundos = in.nextInt();
	
	Horario h2 = new Horario(hora, minutos,segundos);
	
	if(h1.validaHora(h1.getHora()) == false
			|| h1.validaMinuto(h1.getMinuto()) == false
			|| h1.validaSegundo(h1.getSegundo()) == false) {
		System.out.println("vAlOrEs InVáLiDoS");
	}
	
	System.out.println(h1.getHorario());
	System.out.println(h2.getHorario());
	
	System.out.println("\nA diferença é de " + Horario.diferenca(h1, h2) + " minutos");
	
	}
}

//Exercício 5:
//1 - Criar uma Classe Horário com os atributos hora, minuto e segundo.
//2 - Criar métodos de Instância (sets) para atualizar hora, atualizar 
//minuto, atualizar segundo e atualizar horário (hora, minuto e 
//segundo juntos).
//3 - Criar métodos de instância (gets) para mostrar cada atributo e 
//o horário completo (hh:mm:ss). 
//4 - Criar 2 construtores: um que recebe como parâmetro a hora e
//inicializa os atributos com a hora informada, e com minutos e
//segundo iguais a 0 e outro que recebe como parâmetro a hora,
//o minuto e o segundo e inicializa os atributos com os valores recebidos
//5 - Criar três novos métodos para validar os valores informados
//nos atributos hora, minutos e segundos (considerando o conjunto de
//valores válidos);
//6 - Criar um método estático para indicar a diferença em minutos entre
//dois horários passados por parâmetro;
//7 - Criar um programa que recebe 2 Horários (com hh, mm e ss) a partir
//de informações  dos usuários (Scanner ou JoptionPane), valida através dos 
//métodos criados e instancia os 2 horários. Depois o programa deve mostrar
//os horários (hh:mm:ss) criados e a diferença entre eles.
