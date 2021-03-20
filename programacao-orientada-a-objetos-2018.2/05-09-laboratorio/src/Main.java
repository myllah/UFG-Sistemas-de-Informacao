import java.util.ArrayList;
public class Main {

	public static void main(String[] args) {
		ArrayList <ProgramaTV> programas = new ArrayList <ProgramaTV>();
		
		ProgramaTV p = new ProgramaTV(001,"O outro lado do paraíso","Novela");
		p.diretor = new Pessoa("Diretor 1", "Brasileiro");
		p.setArtistas(new Pessoa("Artista 1", "Brasileiro"));
		p.setArtistas(new Pessoa("Artista 2", "Brasileiro"));
		programas.add(p);
		
		p = new ProgramaTV(002,"Orgulho e Paixão","Novela");
		p.diretor = new Pessoa("Diretor 2", "Brasileiro");
		p.setArtistas(new Pessoa("Artista 3", "Brasileiro"));
		p.setArtistas(new Pessoa("Artista 4", "Brasileiro"));
		programas.add(p);
		
		p = new ProgramaTV(003,"Marley e eu","Filme");
		p.diretor = new Pessoa("Diretor 3", "Brasileiro");
		p.setArtistas(new Pessoa("Artista 5", "Brasileiro"));
		p.setArtistas(new Pessoa("Artista 6", "Brasileiro"));
		programas.add(p);
		
		p = new ProgramaTV(004,"Show Ivete Sangalo","Show");
		p.diretor = new Pessoa("Diretor 4", "Brasileiro");
		p.setArtistas(new Pessoa("Artista 7", "Brasileiro"));
		p.setArtistas(new Pessoa("Artista 8", "Brasileiro"));
		programas.add(p);
		
		Serie s = new Serie(005, "Prison Break","Serie", 5, 23);
		s.diretor = new Pessoa("Diretor 5", "Americano");
		s.setArtistas(new Pessoa("WentWorth Miller", "Americano"));
		s.setArtistas(new Pessoa("Artista 8", "Brasileiro"));
		programas.add(s);
						
		for (int i=0;i<programas.size();i++) {
			System.out.println(programas.get(i));
		}		
		
	}

}

//Laboratório Herança
//
//Tendo as classes Pessoa e Programa de TV com seus 
//relacionamentos, e a classe Principal que cria vários
//programas de TV com seus diretores e artistas, e no
//final mostra a lista de programas criados, faça o 
//que se pede.
//
//1 - Crie uma forma de tornar o atributo código, 
//dos programas de TV, sequenciais e não informado
//no construtor como está na implementação. Ou seja,
//cada novo programa de TV terá um código sequencial
//criado automaticamente, e para isso, altere a classe
//ProgramaTV e Principal para atender a este requisito.
//
//2 - Crie uma classe especializada de Programa de TV
//que se refere a Série sendo que além das informações de
//um programa de TV, ela também tem a quantidade de 
//temporadas e a quantidade de episódios. Crie o 
//construtor, os métodos de acesso necessários para
//instanciar Séries, e o método toString(). Na classe 
//principal crie algumas instâncias de Série para acrescentar
//à mesma lista de programas.
