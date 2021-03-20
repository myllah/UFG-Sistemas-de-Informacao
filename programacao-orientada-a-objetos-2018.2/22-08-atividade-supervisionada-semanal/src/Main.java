// Mylena Mariana Pires Barbosa 201804692
import java.util.Scanner;

public class Main {
	private static final int NULL = 0;
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		Produto lista[] = new Produto[100]; 
		Start start = new Start();
		
		int fazer = start.inicio();
		do {
		if(fazer == 1) { // novo produto
				System.out.println("Digite o id do produto");
				int newId = in.nextInt();
				System.out.println("Digite o nome do produto");
				String newNome = in.next();
				System.out.println("Digite a quantidade do produto");
				int newQtd = in.nextInt();
				System.out.println("Digite o tipo do produto");
				String newTipo = in.next();
				System.out.println("Digite o valor do produto");
				double newValor = in.nextDouble();
					
				if(newValor == NULL && newTipo.isEmpty() && newQtd == NULL && newTipo.isEmpty()) {
					lista[newId] = new Produto(newId);
				}else if(newValor == NULL && newTipo.isEmpty() && newQtd == NULL) {
					lista[newId] = new Produto(newId, newNome);
				}else if(newValor == NULL && newTipo.isEmpty()) {
					lista[newId] = new Produto(newId, newNome, newQtd);
				}else {
					lista[newId] = new Produto(newId, newNome, newQtd, newTipo, newValor);
				}
			}
			if(fazer == 2) { // vender
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				System.out.println("Digite a quantidade a ser vendida");
				int searchQtd = in.nextInt();
				lista[searchId].vender(searchQtd);
			}
			if(fazer == 3) { // comprar
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				System.out.println("Digite a quantidade");
				int newQtd = in.nextInt();
				lista[searchId].comprar(newQtd);
			}
			if(fazer == 4) { // comprar e modificar valor
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				System.out.println("Digite a quantidade");
				int newQtd = in.nextInt();
				System.out.println("Digite o valor");
				int newValor = in.nextInt();
				lista[searchId].comprar(newQtd, newValor);
			}
			if(fazer == 5) { // consultar
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				lista[searchId].consultar();
			}
			if(fazer == 6) { // inserir
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				System.out.println("Digite o nome do produto");
				String newNome = in.next();
				System.out.println("Digite a quantidade do produto");
				int newQtd = in.nextInt();
				System.out.println("Digite o tipo do produto");
				String newTipo = in.next();
				System.out.println("Digite o valor do produto");
				double newValor = in.nextDouble();
	
				lista[searchId].inserir(newNome, newQtd, newTipo, newValor);
			}
			if(fazer == 7) { // igual
				System.out.println("Digite o id do produto");
				int searchId = in.nextInt();
				System.out.println("Digite o nome para comparação");
				String nomeCom = in.next();
				System.out.println("Digite o tipo para comparação");
				String tipoCom = in.next();
				
				if(lista[searchId].igual(nomeCom, tipoCom)) {
					System.out.println("Os produtos são iguais");
				}else {
					System.out.println("Os produtos são diferentes");
				}
			
			}
			if(fazer == 8) { // sair
				break;
			}
			fazer = start.inicio();
	}while(fazer != 8);
		System.out.println("Tenha um bom dia!");
	}
		
}


//Criar uma classe Produto, que mantém o estoque de produtos de uma loja,
//com as seguintes características: código sequencial, nome do produto, 
//quantidade, tipo, valor do produto. 

//Exemplos de Objetos:	
//001, Jogo Batalha Naval, 10, jogo, 100,00.
//002, Jogo Master, 20, jogo, 150,00.
//003, Jogo Quebra-Cabeça, 30, jogo, 50,00.

//Não é possível criar um objeto de Produto sem pelo menos informar 
//o código. Eles podem ser criados inicialmente da seguinte forma: 
//(*essas formas identificam a necessidade de construtores diferentes)
//- apenas o código;  new Produto(001) 
//- o código e o nome do produto;  new Produto(001, 'Jogo 1')
//- o código, o nome do produto e a quantidade;	new Produto(001,´Jogo 1´, 10)
//- com todos os dados.	new Produto(001,´Jogo 1´, 10, ´jogo´, 100.00)

//A classe Produto deve fornecer as seguintes operações:
//- vender: recebe uma quantidade a ser vendida, verifica se tem 
//estoque, se não tem informa, se tem, baixa do estoque e informa o 
//valor total da venda;
//- comprar: recebe uma quantidade e o novo valor, acrescentar
//produtos no estoque e altera o valor;
//- comprar: recebe apenas a quantidade a ser acrescentada no
//estoque, sem alteração de valor;
//- consultar: informa todos os dados do produto, e a quantidade em estoque;
//- inserir: recebe como parâmetro o nome do produto, a 
//quantidade, o tipo e o valor, e altera os dados do objeto;
//- igual: recebe um produto como parâmetro (objeto de Produto),
//verifica se nome e tipo do objeto corrente são iguais aos do 
//objeto recebido como parâmetro, retornando true (se forem iguais) ou false.

//Criar um programa principal que recebe as informações do usuário
//(Scanner ou JOptionPane) e cria vários objetos do tipo Produto,
//cada um de uma forma diferente (usando construtores diferentes).
//O objeto que for criado com o primeiro construtor (que recebe
//apenas o código), deverá usar posteriormente o método inserir 
//para atualizar os demais dados do produto.
//Para cada objeto criado, usar as operações:  vender, comprar e 
//consultar e comparar(igual). 