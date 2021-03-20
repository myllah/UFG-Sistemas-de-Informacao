package exercicio03;

public class Item {
	
	private String titulo;
	private int ano;
	private String tempoDuracao;
	private String comentarios;
	
	public String getTitulo() {
		return titulo;
	}
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public String getTempoDuracao() {
		return tempoDuracao;
	}
	public void setTempoDuracao(String tempoDuracao) {
		this.tempoDuracao = tempoDuracao;
	}
	public String getComentarios() {
		return comentarios;
	}
	public void setComentarios(String comentarios) {
		this.comentarios = comentarios;
	}
	
	public String comum() {
		return "\nTítulo = " + titulo
				+ "\nAno = " + ano
				+ "\nTempo de Duração = " + tempoDuracao
				+ "\nComentários = " + comentarios;
	}
	
}
