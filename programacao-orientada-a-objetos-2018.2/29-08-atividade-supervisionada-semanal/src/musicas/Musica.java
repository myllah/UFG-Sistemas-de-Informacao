package musicas;

public class Musica {
	
	private String nome;
	private String ano;
	private String tipo;
	private Compositor compositor = new Compositor();
	
	public Musica() {
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getAno() {
		return ano;
	}

	public void setAno(String ano) {
		this.ano = ano;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	@Override
	public String toString() {
		return " Nome = " + nome 
				+ "\n Ano = " + ano
				+ "\n Tipo = " + tipo 
				+ "\n Nome compositor = " + compositor.nomeCompositor
				+ "\n Nacionalidade compositor = " + compositor.nacionalidade;
	}

	public Compositor getCompositor() {
		return compositor;
	}

	public void setCompositor(Compositor compositor) {
		this.compositor = compositor;
	}

}