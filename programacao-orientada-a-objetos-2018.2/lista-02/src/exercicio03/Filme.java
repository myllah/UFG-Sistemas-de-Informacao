package exercicio03;

public class Filme extends Item{

	private String diretor;
	
	public String getDiretor() {
		return diretor;
	}

	public void setDiretor(String diretor) {
		this.diretor = diretor;
	}
	
	public String especifico() {
		return "\nDiretor = " + diretor;
	}
}