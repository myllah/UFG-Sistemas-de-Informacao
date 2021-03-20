package exercicio03;

public class Jogo extends Item{
	
	private int numJogadores;
	private String plataforma;
	
	public int getNumJogadores() {
		return numJogadores;
	}
	public void setNumJogadores(int numJogadores) {
		this.numJogadores = numJogadores;
	}
	public String getPlataforma() {
		return plataforma;
	}
	public void setPlataforma(String plataforma) {
		this.plataforma = plataforma;
	}
	
	public String especifico() {
		return "\nNúmero de Jogadores = " + numJogadores;
	}
	
	public String showPlataforma() {
		return "\nPlataforma = " + plataforma;
	}
}