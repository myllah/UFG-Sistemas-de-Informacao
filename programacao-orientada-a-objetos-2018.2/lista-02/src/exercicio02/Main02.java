package exercicio02;
import java.util.ArrayList;
import java.util.Scanner;

public class Main02 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		ArrayList<Filme> filmes = new ArrayList<Filme>();
		int total = 0;
		System.out.println("Digite o código do filme");
		int id = in.nextInt();
		do {
			System.out.println("Digite o nome do filme");
			String nome = in.next();
			
			Filme filme = new Filme(id, nome);
			
			System.out.println("Digite o gênero do filme");
			String genero = in.next();
			filme.setGenero(genero);
			
			System.out.println("Digite o ano do filme");
			int ano = in.nextInt();
			filme.setAno(ano);
			
			System.out.println("Digite o autor do filme");
			String autor = in.next();
			filme.setAutor(autor);
			
			filmes.add(filme);
			
			System.out.println("Digite o código do filme");
			id = in.nextInt();
			total++;
		}while(id != 0);
				
		//System.out.println(filmes);
		System.out.println("Há um total de " + total + " filmes.");
		
	}

}

//
//Exercício 2:
//
//1 - Criar uma classe Filme da seguinte forma:
//
//Um Filme tem codigo, nome, gênero, ano e autor principal, 
//sendo todos privados.
//Cada atributo deve ter seus métodos de acesso públicos
//A classe deve ter um método toString que mostra os dados do Filme
//O construtor deve inicializar apenas o código e o nome do filme. 
//Os demais atributos devem ser atualizados usando os métodos sets necessários
//
//
//2 - Criar uma classe Principal que receba dados de filmes, através da classe 
//scanner ou JOptionPane, e crie vários filmes até que seja digitado o código 0,
//mostrando após a criação os dados do filme, através do método criado no 
//item c) do exercício 2.
//
//3 - Criar um mecanismo na classe Filme, através de dados estáticos,
//para guardar o total de filmes criados.
//
//4 - Na classe principal, mostrar o total de filmes criados após 
//finalizada a entrada de dados. 
