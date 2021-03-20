import java.util.ArrayList;

public class ProgramaTV {
	
	private static int ID = 0;
	
	int codigo;
	String nome;
	ArrayList <Pessoa> artistas = new ArrayList <Pessoa>();
	ArrayList <Serie> series = new ArrayList <Serie>();
	Pessoa diretor;
	String categoria;
	
	ProgramaTV(int codigo, String nome, String categoria) {
		this.codigo = getNextMatricula();
		this.nome = nome;
		this.categoria = categoria;
	}
	
	public static int getNextMatricula() {
		return ID++;
	}
	
	void setDiretor(Pessoa diretor){
		this.diretor = diretor;
	}
	
	void setArtistas(Pessoa artista) {
		artistas.add(artista);
	}
	
	void setSerie(Serie serie) {
		series.add(serie);
	}
	
	public String toString() {
		String programa = codigo + "-" + nome + " (" + categoria + ")\n";
		programa = programa + "Diretor : " + diretor +"\n";
		programa = programa + "Artistas : \n";
		for (int i=0;i<artistas.size();i++) {
			programa = programa + artistas.get(i) + "\n";
		}
		return programa;
	}
}