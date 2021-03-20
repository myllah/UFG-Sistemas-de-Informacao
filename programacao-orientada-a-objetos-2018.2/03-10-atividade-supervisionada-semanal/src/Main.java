public class Main {
	public static void main(String[] args) {
		
		RevistaVeja revistaVeja= new RevistaVeja();       
		AssinanteMensal assinanteMensal = new AssinanteMensal(revistaVeja);
		AssinanteAnual assinanteAnual = new AssinanteAnual(revistaVeja);
		         
		revistaVeja.setNome("Veja");
		revistaVeja.setEdicao(1);
		revistaVeja.setEdicao(3);
		revistaVeja.setEdicao(5);
		revistaVeja.setEdicao(7);
		revistaVeja.setEdicao(9);
	}
}

///////////////////////////////////////////////

//Laboratório Padrões de Projetos - Observer
//
//Exercício:
//Implemente a seguinte situação usando o padrão Observer:
//Um Assinante de uma revista deve ser informado a cada alteração
//de edição da revista.
//Crie uma interface Revista que será observada e uma interface 
//Assinante que será a observadora.
//Crie as classes RevistaVeja implementando a interface Revista,
//AssinanteAnual e AssinanteMensal implementando a interface Assinante.
//A Classe RevistaVeja tem o nome da revista, e a edição.
//Crie os métodos necessários para a cada alteração na edição ou nome 
//da revista, os assinantes sejam informados.
//Crie uma classe principal para instanciar a revista e os assinantes
//e realizar as alterações nas edições.