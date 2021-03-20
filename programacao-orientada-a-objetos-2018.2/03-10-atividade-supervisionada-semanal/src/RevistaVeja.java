import java.util.ArrayList;
import java.util.Observable;
import java.util.Observer;

public class RevistaVeja extends Observable {
	
	ArrayList<Observer> observers = new ArrayList<Observer>();
	
	private String nome;
	private int edicao;
	
	public void setNome(String nome) {
		this.nome = nome;
		setChanged();//
		notifyObservers();
	}
	
	public void setEdicao(int edicao) {
		this.edicao = edicao;
		setChanged();//
		notifyObservers();
	}
	
	public int getEdicao() {
		return edicao;
	}

}

//public class Dieta extends Observable {
//private List observers = new ArrayList();
//private double peso;
////Classe observadora "Balança"
//class BalancaDieta implements Observer {
//public Dieta(double peso) {
//this.peso = peso;
//}
//public void setPeso(double peso) {
//this.peso = peso;
////Quando a alteração do peso ocorre notifica os observadores.
//this.notifyObservers();
//}
//public void registerObserver(Observer observer) {
//observers.add(observer);
//}
//public void removeObserver(Observer observer) {
//observers.remove(observer);
//}
//public void notifyObservers() {
////Chama o método de atualização dos observers disponíveis.
//for (Observer ob : observers) {
//System.out.println("Notificando observers!");
//ob.update(this.peso);
//}
//}}
//}
//public void update(double novoPeso) {
//if (peso >= 100) {
//System.out.println
//("Você ultrapassou o peso limite no sistema!");
//}
//}


//Crie os métodos necessários para a cada alteração na edição ou nome 
//da revista, os assinantes sejam informados.
//Crie uma classe principal para instanciar a revista e os assinantes
//e realizar as alterações nas edições.