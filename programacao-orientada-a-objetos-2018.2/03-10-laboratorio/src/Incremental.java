
final class Incremental { 
	public static Incremental instancia;
	private static int count = 0; 
	private static int numero; 
	
	private Incremental() { 
		numero = ++count; 
	} 
	
	public String toString() { 
		return "Incremental " + numero; 
	} 
	
	public static Incremental getInstancia(){
		if (instancia == null) {
			instancia = new Incremental();
		}
		return instancia;
	}
}
	
//
//Laboratório Padrões de Projetos - Singleton
//
//
//Exercício:
//1 - Copie o código abaixo, execute e veja o resultado. 
//2 – Altere a implementação para que a classe Incremental seja Singleton.
//
//class Incremental { 
//   private static int count = 0; 
//   private int numero; 
//
//   public Incremental() { 
//      numero = ++count; 
//   } 
//
//   public String toString() { 
//      return "Incremental " + numero; 
//   } 
//} 
//
//
//public class TesteIncremental { 
//   public static void main(String[] args) { 
//      for (int i = 0; i < 10; i++) { 
//         Incremental inc = new Incremental(); 
//        System.out.println(inc); 
//      } 
//   } 
//}
//
