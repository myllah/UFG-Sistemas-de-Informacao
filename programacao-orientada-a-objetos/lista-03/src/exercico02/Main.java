// Mylena Mariana Pires Barbosa
package exercico02;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {

		ArrayList<Lojac> ll = new ArrayList<Lojac>();
		
		Lojac l1 = new Lojac(1,"cnpj1", "Razão01", "endereco01", "Gerente01");
		ll.add(l1);
		Lojac l2 = new Lojac(2,"cnpj2", "Razão02", "endereco02", "Gerente02");
		ll.add(l2);
		Lojac l3 = new Lojac(3,"cnpj3", "Razão03", "endereco03", "Gerente03");
		ll.add(l3);

		for(int i = 0; i < ll.size(); i++) {
			System.out.println(ll.get(i).toString());
		}
		/////////////////////
		ll.get(1).registra_abertura_dia();
		System.out.println(ll.get(1).isAberta());
		
		for(int i = 0; i < ll.size(); i++) {
			System.out.println(ll.get(i).toString());
		}
		ll.get(1).registra_abertura_dia();
		System.out.println(ll.get(1).isAberta());
		System.out.println("////////////////////");
		
		/////////////////////////
		System.out.println(ll.get(2).isAberta());
		ll.get(2).registra_abertura_dia();
		System.out.println(ll.get(2).isAberta());
		
		for(int i = 0; i < ll.size(); i++) {
			System.out.println(ll.get(i).toString());
		}
		ll.get(2).registra_fechamento_dia();
		System.out.println(ll.get(2).isAberta());
		for(int i = 0; i < ll.size(); i++) {
			System.out.println(ll.get(i).toString());
		}
		System.out.println("////////////////////");
		///////////////
		
	}
}

//Questão 2

//1 – Criar uma classe Abstrata para Loja com identificador, cnpj, razão social, aberta (boolean).
//2 – Criar um construtor da classe Loja para criar o objeto já com cnpj, razão social e o atributo aberta =
//false.
//3 - Criar um método para retornar a razão social, cnpj e o status da loja (se aberta ou fechada)
//4 – Criar uma classe concreta para Loja com endereço e gerente.
//5 - Criar um método construtor para a Loja concreta recebendo os dados dos atributos, chamando o
//construtor da classe pai e atualizando os atributos.
//6 – Criar um método para mostrar a Loja com todos os dados.
//7 - Criar 3 instâncias da Loja (1 Matriz e 2 filiais), cada uma com seu cnpj, razão social, identificador,
//endereço e gerente. Mostrar as lojas criadas, com todos os dados.
//8 – Criar uma interface Registro com os métodos registra_abertura_dia e registra_fechamento_dia.
//9 – Fazer a Loja utilizar a interface Registro e implementar os métodos atualizando o atributo aberta para
//true quando chamar o método registra_abertura_dia , ou para false quando invocado o método
//registra_fechamento_dia. Uma loja aberta não pode ser aberta novamente e uma loja só pode ser fechada
//
//se estiver aberta.
//10 – Na classe principal, as lojas criadas estarão fechadas (aberta = false). Usar os métodos de Abrir e
//Fechar mostrando os dados novamente para ver o funcionamento dos métodos.