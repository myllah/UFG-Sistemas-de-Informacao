package exercicio01;
import java.util.Scanner;

public class Main02 {

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		int n;
		System.out.println("Digite a quantidade de Cursos desejada");
		n = in.nextInt();
		
		Cursos lista[] = new Cursos[n];
		
		for(int i = 0; i < n; i++){
			lista[i] = new Cursos();
		}
		
		for(int i = 0; i < n; i++){
			System.out.println("Digite o ID do Curso");
			lista[i].id = in.nextInt();
			System.out.println("Digite o nome do Curso");
			lista[i].nome = in.next();
			System.out.println("Digite o periodos do Curso");
			lista[i].periodos = in.nextInt();
			System.out.println("Digite o grau Academico do Curso");
			lista[i].grauAcademico = in.next();
			
		}
		
		for(int i = 0; i < n; i++){
			System.out.println("ID = " + lista[i].id 
					+ " nome = " + lista[i].nome
					+ " periodos = " + lista[i].periodos
					+ " grau academico = " + lista[i].grauAcademico);
		}
	}
}
