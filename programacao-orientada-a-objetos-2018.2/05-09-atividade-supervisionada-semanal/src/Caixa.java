
public class Caixa extends Funcionario{
	
	private String horario;
	
	public Caixa(String matricula, String nome) {
		super(matricula, nome);
	}

	public String getHorario() {
		return horario;
	}

	public void setHorario(String horario) {
		this.horario = horario;
	}
	
	public String toString() {
		return(super.toString()
				+ "\nHorário: " + horario);
	}
	
}
