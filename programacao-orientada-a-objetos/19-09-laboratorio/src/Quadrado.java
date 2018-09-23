
public class Quadrado extends Figura{

	private int lado;
	
	public Quadrado(int lado) {
		this.lado = lado;
	}
	
	public Quadrado() {
	}
	
	public double calculaArea() {
		return lado*lado;
	}

	public double calculaPerimetro() {
		
		return lado * 4;
	}

	public int getLado() {
		return lado;
	}

	public void setLado(int lado) {
		this.lado = lado;
	}
	
	public String desenhar() {
		return "Desenhando a figura Quadrado";
	}
	
}