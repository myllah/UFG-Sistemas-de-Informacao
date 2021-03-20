package exercicio03;

import java.util.ArrayList;

public class Main03 {

	public static void main(String[] args) {
		
		ArrayList<Item> list= new ArrayList<Item>();

			Cd cd1 = new Cd();
			cd1.setTitulo("CD1");
			cd1.setAno(1);
			cd1.setTempoDuracao("1:00");
			cd1.setComentarios("Comentários do CD1");
			cd1.setArtista("Artista do CD1");
			cd1.setQtdFaixas(1);
			
			list.add(cd1);
			
			Cd cd2 = new Cd();
			cd2.setTitulo("CD2");
			cd2.setAno(2);
			cd2.setTempoDuracao("2:00");
			cd2.setComentarios("Comentários do CD2");
			cd2.setArtista("Artista do CD2");
			cd2.setQtdFaixas(2);
			
			list.add(cd2);
			
			Cd cd3 = new Cd();
			cd3.setTitulo("CD3");
			cd3.setAno(3);
			cd3.setTempoDuracao("3:00");
			cd3.setComentarios("Comentários do CD3");
			cd3.setArtista("Artista do CD3");
			cd3.setQtdFaixas(3);
			
			list.add(cd3);
			
			Filme filme1 = new Filme();
			filme1.setTitulo("Filme1");
			filme1.setAno(1);
			filme1.setTempoDuracao("1:00");
			filme1.setComentarios("Comentários do Filme1");
			filme1.setDiretor("Diretor do Filme1");
			
			list.add(filme1);

			Filme filme2 = new Filme();
			filme2.setTitulo("Filme2");
			filme2.setAno(2);
			filme2.setTempoDuracao("2:00");
			filme2.setComentarios("Comentários do Filme2");
			filme2.setDiretor("Diretor do Filme2");
			
			list.add(filme2);

			Filme filme3 = new Filme();
			filme3.setTitulo("Filme3");
			filme3.setAno(3);
			filme3.setTempoDuracao("3:00");
			filme3.setComentarios("Comentários do Filme3");
			filme3.setDiretor("Diretor do Filme3");
			
			list.add(filme3);
			
			Filme filme4 = new Filme();
			filme4.setTitulo("Filme4");
			filme4.setAno(4);
			filme4.setTempoDuracao("4:00");
			filme4.setComentarios("Comentários do Filme4");
			filme4.setDiretor("Diretor do Filme4");
			
			list.add(filme4);
			
			Jogo jogo1 = new Jogo();
			jogo1.setTitulo("Jogo1");
			jogo1.setAno(1);
			jogo1.setTempoDuracao("1:00");
			jogo1.setComentarios("Comentários do Jogo1");
			jogo1.setNumJogadores(1);
			jogo1.setPlataforma("Plataforma Jogo1");
			
			list.add(jogo1);
			
			Jogo jogo2 = new Jogo();
			jogo2.setTitulo("Jogo2");
			jogo2.setAno(2);
			jogo2.setTempoDuracao("2:00");
			jogo2.setComentarios("Comentários do Jogo2");
			jogo2.setNumJogadores(2);
			jogo2.setPlataforma("Plataforma Jogo2");
			
			list.add(jogo2);
			
			Jogo jogo3 = new Jogo();
			jogo3.setTitulo("Jogo3");
			jogo3.setAno(3);
			jogo3.setTempoDuracao("3:00");
			jogo3.setComentarios("Comentários do Jogo3");
			jogo3.setNumJogadores(3);
			jogo3.setPlataforma("Plataforma Jogo3");
			
			list.add(jogo3);

	
		for(int i = 0; i < 10; i++) {
			System.out.print(list.get(i).comum());
			if(list.get(i) instanceof Cd) {
				System.out.println(((Cd) list.get(i)).especifico());
			} else if(list.get(i) instanceof Filme) {
				System.out.println(((Filme) list.get(i)).especifico());
			}else if(list.get(i) instanceof Jogo) {
				System.out.print(((Jogo) list.get(i)).especifico());
				System.out.println(((Jogo) list.get(i)).showPlataforma());		
			}
		}
	}
}

//Exercício 3:
//
//Implemente o cadastramento de itens de uma Loja que 
//vende CDs, Filmes e Jogos.
//
//Um CD tem as seguintes informações: título, ano, 
//tempo de duração, comentários, artista e quantidade
//de faixas;
//Um Filme tem as seguintes informações: título, ano,
//tempo de duração, comentários e diretor
//e Um Jogo tem as seguintes informações: título, ano,
//tempo de duração, comentários, número de jogadores e
//plataforma
//
//Escreva as classes necessárias para representar o
//enunciado usando o conceito de herança, polimorfismo 
//e as boas práticas de encapsulamento. Utilize uma 
//superclasse Item agrupando os dados comuns das demais classes.
//
//Criar métodos para mostrar os dados comuns de todos
//os itens e outros para mostrar as peculiaridades de
//cada item.
//
//Criar um método para retornar a plataforma de um jogo
//
//Escrever uma classe Principal para:
//
//Criar 10 filmes, cds e jogos, atribuindo os valores
//através de construtores ou através de métodos sets.
//Armazenar os itens criados em um vetor.
//Percorrer o vetor mostrando os dados dos itens 
//armazenados (dados comuns + dados específicos de cada 
//item) 
//Quando for jogo, mostrar separadamente a plataforma
