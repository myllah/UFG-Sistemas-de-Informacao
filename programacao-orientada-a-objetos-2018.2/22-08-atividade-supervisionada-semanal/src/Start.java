import java.util.Scanner;

public class Start {
	Scanner in = new Scanner(System.in);
	
	public Start() {
		// TODO Auto-generated constructor stub
	}
	
	int inicio() {
		System.out.println("\nDigite o número correspondente ao que deseja fazer"
				+ "\n1 - novo produto"
				+ "\n2 - vender"
				+ "\n3 - comprar"
				+ "\n4 - comprar e modificar valor"
				+ "\n5 - consultar"
				+ "\n6 - inserir"
				+ "\n7 - igual"
				+ "\n8 - terminar o programa");
		return in.nextInt();
	}

}
