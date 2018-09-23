
public class Triangulo extends Figura{
	
	private int base;
	private int lado1;
	private int lado2;
	private int altura;
	
	public Triangulo(int base, int lado1, int lado2, int altura) {
		this.base = base;
		this.lado1 = lado1;
		this.lado2 = lado2;
		this.altura = altura;
	}

	public Triangulo() {
	}
	
	public double calculaArea() {
		return (base*altura)/2;
	}

	public double calculaPerimetro() {
		return base+lado1+lado2;
	}

	public int getBase() {
		return base;
	}

	public void setBase(int base) {
		this.base = base;
	}

	public int getLado1() {
		return lado1;
	}

	public void setLado1(int lado1) {
		this.lado1 = lado1;
	}

	public int getLado2() {
		return lado2;
	}

	public void setLado2(int lado2) {
		this.lado2 = lado2;
	}

	public int getAltura() {
		return altura;
	}

	public void setAltura(int altura) {
		this.altura = altura;
	}
	
	public String desenhar() {
		return "Desenhando a figura Triangulo";
	}
	
}

// Triângulo, tendo a base, lado1, lado2 e altura como atributo e Círculo, tendo o raio
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