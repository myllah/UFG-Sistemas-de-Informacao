import java.util.Scanner;

public class Produto {
	Scanner in = new Scanner(System.in);
	
	int id;
	String nome;
	int qtd;
	String tipo;
	double valor;
	
	Produto(int id) {
		 this.id = id;
	}
	
	Produto(int id, String nome) {
		 this.id = id;
		 this.nome = nome;
	}
	
	Produto(int id, String nome, int qtd) {
		 this.id = id;
		 this.nome = nome;
		 this.qtd = qtd; 
	}
	
	Produto(int id, String nome, int qtd, String tipo, double valor) {
		 this.id = id;
		 this.nome = nome;
		 this.qtd = qtd;
		 this.tipo = tipo;
		 this.valor = valor;
	}

	void vender(int qtdVendida) {
		if(qtdVendida > qtd) {
			System.out.println("Não há estoque suficiente");
		} else {
			qtd = qtd - qtdVendida;
			System.out.println("O valor total é R$" + qtdVendida*valor);
		}
	}
	
	void comprar(int qtdComprada, int newValor) {
		qtd = qtd + qtdComprada;
		valor = newValor;
	}
	
	void comprar(int qtdComprada) {
		qtd = qtd + qtdComprada;
	}
	
	void consultar() {
		System.out.println("Os dados do produto são"
				+ "\n- ID = "+ id
				+ "\n- Nome = " + nome
				+ "\n- Quantidade = " + qtd
				+ "\n- Tipo = " + tipo
				+ "\n- Valor = " + valor);	
	}
	
	void inserir(String newNome, int newQtd, String newTipo, double newValor) {
			nome = newNome;
			qtd = newQtd;
			tipo = newTipo;
			valor = newValor;		
	}
	
	boolean igual(String nomeCom, String tipoCom) {
		if(nome.equalsIgnoreCase(nomeCom) && tipo.equalsIgnoreCase(tipoCom)){
			return true;
		}else {
			return false;
		}
	}
}
