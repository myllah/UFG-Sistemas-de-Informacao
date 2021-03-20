package exercicio05;

public class Horario {
	private int hora;
	private int minuto;
	private int segundo;
	
	Horario(int hora){
		this.hora = hora;
		this.minuto = 0;
		this.segundo = 0;
	}
	
	Horario(int hora, int minuto, int segundo){
		this.hora = hora;
		this.minuto = minuto;
		this.segundo = segundo;
	}
	
	public int getHora() {
		return hora;
	}
	public void setHora(int hora) {
		this.hora = hora;
	}
	public int getMinuto() {
		return minuto;
	}
	public void setMinuto(int minuto) {
		this.minuto = minuto;
	}
	public int getSegundo() {
		return segundo;
	}
	public void setSegundo(int segundo) {
		this.segundo = segundo;
	}
	public String getHorario() {
		return hora + ":" + minuto + ":" + segundo;
	}
	public void setHorario(int hora, int minuto, int segundo) {
		this.hora = hora;
		this.minuto = minuto;
		this.segundo = segundo;
	}
	
	public static double diferenca(Horario horario1, Horario horario2) {
		if(horario1.getHora() - horario2.getHora() > horario2.getHora() - horario1.getHora()) {
			double hora = horario1.getHora() - horario2.getHora();
			double min = horario1.getMinuto() - horario2.getMinuto();
			double seg = horario1.getSegundo() - horario2.getSegundo();
			
			min = min + hora * 60 + seg / 60;
			return min;
		}else {
			double hora = horario2.getHora() - horario1.getHora();
			double min = horario2.getMinuto() - horario1.getMinuto();
			double seg = horario2.getSegundo() - horario1.getSegundo();
		
			min = min + hora * 60 + seg / 60;
			return min;
			}
	}
	public boolean validaHora(int hora) {
		if(hora >= 0 && hora <= 23) {
			return true;
		}else {
			return false;
		}	
	}
	
	public boolean validaMinuto(int minuto) {
		if(minuto >= 0 && minuto <= 59) {
			return true;
		}else {
			return false;
		}	
	}
	
	public boolean validaSegundo(int segundo) {
		if(segundo >= 0 && segundo <= 59) {
			return true;
		}else {
			return false;
		}	
	}
}
