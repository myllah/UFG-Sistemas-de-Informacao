import java.util.ArrayList;
public class Main {

	public static void main(String[] args) {
		
		Quadrado quadrado = new Quadrado(2);
		Triangulo triangulo = new Triangulo(3,3,3,3);
		Circulo circulo = new Circulo(4);
		Retangulo retangulo = new Retangulo(5,6);
		
		System.out.print(quadrado.desenhar());
		System.out.println(" - Perímetro: " + quadrado.calculaPerimetro()
							+ " Área: " + quadrado.calculaArea() + "\n");
		System.out.print(triangulo.desenhar());
		System.out.println(" - Perímetro: " + triangulo.calculaPerimetro()
							+ " Área: " + triangulo.calculaArea()+ "\n");
		System.out.print(circulo.desenhar());
		System.out.println(" - Perímetro: " + circulo.calculaPerimetro()
							+ " Área: " + circulo.calculaArea()+ "\n");
		System.out.print(retangulo.desenhar());
		System.out.println(" - Perímetro: " + retangulo.calculaPerimetro()
							+ " Área: " + retangulo.calculaArea()+ "\n");
		
		
		ArrayList<Figura> figura = new ArrayList<Figura>();
		
		figura.add(quadrado);
		figura.add(triangulo);
		figura.add(circulo);
		figura.add(retangulo);
		System.out.println("---------------------\n");
		for(int i = 0; i < figura.size(); i++) {
			System.out.println(figura.get(i).desenhar() + " - Perímetro: " + figura.get(i).calculaPerimetro()
			+ " Área: " + figura.get(i).calculaArea() + "\n");
		}

	}
}

//1) Implemente uma classe abstrata Figura, sem nenhum atributo. Ela possui dois métodos
//abstratos: um que calcula e retorna a área da figura e um que calcula e retorna o perímetro da
//figura.
//a) A classe Figura é superclasse de três classes: Quadrado, tendo o lado como
//atributo; Triângulo, tendo a base, lado1, lado2 e altura como atributo e Círculo, tendo o raio
//como atributo. Cada classe herdada deve implementar os métodos abstratos da superclasse.
//Os atributos podem ou não ser preenchidos nos construtores (criar dois construtores: um
//padrão e outro recebendo os atributos). Os métodos para consultar e alterar (gets e sets) o
//valor dos atributos devem estar disponíveis.
//b) Crie ainda uma classe Retângulo, que é um tipo especial (filha) de Quadrado. A
//classe deve sobrescrever os métodos para calcular a área e o perímetro da Figura, já que ela
//também precisa da altura, além do atributo lado que já existe. Em seguida, crie um objeto deste
//tipo e utilize seus métodos.
//c) Escreva um programa que crie um objeto para cada uma das quatro classes e
//utilize os métodos para calcular a área e o perímetro.
//d) Crie ainda, no programa, uma lista de figuras que armazena os objetos criados.
//Esta lista deve executar os métodos para calcular a área e o perímetro de cada figura.
//
//2) Crie uma interface Desenho que tenha um método desenhar que retorna um String. As
//classes Quadrado, Retângulo, Círculo e Triângulo devem implementar a interface obrigando
//que cada uma tenha o método desenhar implementado. Cada classe, no método desenhar,
//deve retornar uma mensagem referente ao desenho de cada figura, como por exemplo:
//“Desenhando a Figura Quadrado”.
//3) Desenhe o diagrama de classes correspondente.