
public class Circulo extends Figura {
	private int raio;
	
	public Circulo(int raio) {
		this.raio = raio;
	}
	
	public Circulo() {
	}
	
	public double calculaArea() {
		return Math.PI*Math.pow(raio, 2);
	}

	public double calculaPerimetro() {
		return 2*Math.PI*raio;
	}

	public int getRaio() {
		return raio;
	}

	public void setRaio(int raio) {
		this.raio = raio;
	}
	public String desenhar() {
		return "Desenhando a figura Círculo";
	}
	

}