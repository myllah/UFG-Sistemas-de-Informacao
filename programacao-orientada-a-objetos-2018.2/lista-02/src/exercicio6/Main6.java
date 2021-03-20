package exercicio6;
import java.util.ArrayList;

import javax.swing.JOptionPane;

public class Main6 {

	public static void main(String[] args) {
		
		int codigo = 0;
		ArrayList<Livro> listaLivros = new ArrayList<Livro>();
		
		do {
			
			Livro livro = new Livro();
			Pessoa autor = new Pessoa();
			
			codigo = Integer.parseInt(JOptionPane.showInputDialog("Informe o codigo do livro"));
			if(codigo == 0) break;
			
			String titulo = JOptionPane.showInputDialog("Informe o título do livro");
			String nome = JOptionPane.showInputDialog("Informe o primeiro nome do autor");
			String nomeIntermediario = JOptionPane.showInputDialog("Informe o nome intermediário do autor");
			String sobrenome = JOptionPane.showInputDialog("Informe o sobrenome do autor");
			String editora = JOptionPane.showInputDialog("Informe a editora do livro");
			String edicao = JOptionPane.showInputDialog("Informe a edição do livro");
			int ano = Integer.parseInt(JOptionPane.showInputDialog("Informe o ano do livro"));
			String local = JOptionPane.showInputDialog("Informe o local do livro");
			String genero = JOptionPane.showInputDialog("Informe o genero do livro");
			
			livro.setTitulo(titulo);
			livro.setCodigo(codigo);
			autor.setNome(nome);
			autor.setNomeIntermediario(nomeIntermediario);
			autor.setSobrenome(sobrenome);
			livro.setAutor(autor);
			livro.setEditora(editora);
			livro.setEdicao(edicao);
			livro.setAno(ano);
			livro.setLocal(local);
			livro.setGenero(genero);
			
			listaLivros.add(livro);
			
		}while(codigo != 0);	
		
		for(int i = 0; i < listaLivros.size(); i++) {
			JOptionPane.showMessageDialog(null, listaLivros.get(i).toString(), listaLivros.get(i).getTitulo(), 2);
			System.out.println(listaLivros.get(i).toString());
		}
		
		JOptionPane.showMessageDialog(null, "Há um total de " + listaLivros.size() + " livros");

	}
}

//10 – Mostrar ainda o total de livros criados e os totais
//por gênero (podemos ter até 5 gêneros diferentes)

/////////////////////////

//Exercício 6:
//1 – Criar uma classe Pessoa com nome, sobrenome e
//nome intermediário
//2 – Criar o construtor da classe
//3 – Criar método para retornar o nome da Pessoa
//na forma:
//      Sobrenome, Letra do nome. Letra do nome 
//      intermediário. Ex: LOUREIRO, A. C.
//4 - Criar uma classe Livro com título (String), 
//código (int) e autor(Pessoa), editora(String),
//edição, ano, local(String) e gênero todos privados
//5 - Criar os métodos gets e sets para os atributos
//6 - Criar uma classe Principal que leia os dados de
//livros, enquanto o código for diferente de zero e 
//crie livros para uma livraria.
//7 – Os livros devem ser armazenados em uma lista.
//8 - Crie um mecanismo para armazenar a quantidade 
//de livros criados e ao final, mostrar esta quantidade.
//Obs: utilize membros estáticos
//9 – Ao final o programa deve mostrar os dados de
//cada livro no seguinte formato:
//Código: Código do Livro 
//Título: Título do Livro
//Gênero : Gênero do Livro
//Referência : Autor (Sobrenome, 1ª Letra do Nome
//		1ª Letra do Nome Intermediário).
//Título. 	         Edição. Local: Editora, ano.
//  	Ex: DEITEL, P.J. Java Como Programar. 8a. edição. 
//  	São Paulo: Pearson, 2010.
//
//10 – Mostrar ainda o total de livros criados e os totais
//por gênero (podemos ter até 5 gêneros diferentes)

