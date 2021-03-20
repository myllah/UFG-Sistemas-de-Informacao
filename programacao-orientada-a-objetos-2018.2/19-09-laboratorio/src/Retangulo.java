
public class Retangulo extends Quadrado{
	private int altura;
	
	public Retangulo(int lado, int altura) {
		super(lado);
		this.altura = altura;
	}
	public Retangulo() {}
	
	public double calculaArea() {
		return getLado()*altura;
	}

	public double calculaPerimetro() {
		return getLado()*2 + altura*2;
	}

	public int getLado() {
		return super.getLado();
	}

	public void setLado(int lado) {
		super.setLado(lado);
	}	
	

	public int getAltura() {
		return altura;
	}

	public void setAltura(int altura) {
		this.altura = altura;
	}	
	
	public String desenhar() {
		return "Desenhando a figura Retangulo";
	}
	
}