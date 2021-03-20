package exercicio01;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		
		Cursos curso01 = new Cursos();
		System.out.println("Digite o ID do Curso");
		curso01.id = in.nextInt();
		System.out.println("Digite o nome do Curso");
		curso01.nome = in.next();
		System.out.println("Digite o periodos do Curso");
		curso01.periodos = in.nextInt();
		System.out.println("Digite o grau Academico do Curso");
		curso01.grauAcademico = in.next();
		
		Cursos curso02 = new Cursos();
		System.out.println("Digite o ID do Curso");
		curso02.id = in.nextInt();
		System.out.println("Digite o nome do Curso");
		curso02.nome = in.next();
		System.out.println("Digite o periodos do Curso");
		curso02.periodos = in.nextInt();
		System.out.println("Digite o grau Academico do Curso");
		curso02.grauAcademico = in.next();
		
		Cursos curso03 = new Cursos();
		System.out.println("Digite o ID do Curso");
		curso03.id = in.nextInt();
		System.out.println("Digite o nome do Curso");
		curso03.nome = in.next();
		System.out.println("Digite o periodos do Curso");
		curso03.periodos = in.nextInt();
		System.out.println("Digite o grau Academico do Curso");
		curso03.grauAcademico = in.next();

		Cursos curso04 = new Cursos();
		System.out.println("Digite o ID do Curso");
		curso04.id = in.nextInt();
		System.out.println("Digite o nome do Curso");
		curso04.nome = in.next();
		System.out.println("Digite o periodos do Curso");
		curso04.periodos = in.nextInt();
		System.out.println("Digite o grau Academico do Curso");
		curso04.grauAcademico = in.next();
		
		System.out.println("ID = " + curso01.id 
							+ " nome = " + curso01.nome
							+ " periodos = " + curso01.periodos
							+ " grau academico = " + curso01.grauAcademico);
		
		System.out.println("ID = " + curso02.id 
				+ " nome = " + curso02.nome
				+ " periodos = " + curso02.periodos
				+ " grau academico = " + curso02.grauAcademico);

		System.out.println("ID = " + curso03.id 
				+ " nome = " + curso03.nome
				+ " periodos = " + curso03.periodos
				+ " grau academico = " + curso03.grauAcademico);
		
		System.out.println("ID = " + curso04.id 
				+ " nome = " + curso04.nome
				+ " periodos = " + curso04.periodos
				+ " grau academico = " + curso04.grauAcademico);

	}
}

//1) Crie uma classe que represente os vários cursos de uma universidade
//com 4 atributos (a sua escolha).

//2) Crie uma classe Principal que instância 4 cursos diferentes da
//universidade e mostre os dados de cada curso. 
//Essa  classe principal deve solicitar ao usuário os dados para 
//criar os 4 cursos, instanciá-los e no final mostrar os dados de cada curso.

//3) Criar uma nova classe, semelhante a Principal, onde os cursos 
//instanciados serão armazenados em um vetor, e a quantidade de cursos 
//poderá ser definida pelo usuário, e depois ler o vetor e mostrar os 
//dados dos objetos. 