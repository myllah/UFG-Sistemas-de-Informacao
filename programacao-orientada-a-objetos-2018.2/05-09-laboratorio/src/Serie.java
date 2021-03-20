
public class Serie extends ProgramaTV {
	
	int temporadas;
	int episodios;
	
	public Serie(int codigo, String nome, String categoria, int temporadas, int episodios) {
		super(codigo, nome, categoria);
		this.temporadas = temporadas;
		this.episodios = episodios;
	}

	public int getTemporadas() {
		return temporadas;
	}

	public void setTemporadas(int temporadas) {
		this.temporadas = temporadas;
	}

	public int getEpisodios() {
		return episodios;
	}

	public void setEpisodios(int episodios) {
		this.episodios = episodios;
	}
	
	@Override
	public String toString() {
		super.toString();
		String programa = "Temporadas : " + temporadas +"\n";
		programa = programa + "Episodios : " + episodios +"\n";
		return super.toString() + programa;
	}

}