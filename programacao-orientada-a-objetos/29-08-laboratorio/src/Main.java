//////// CODIGO COM ERRO ////////

//Mylena Mariana 201804692
import java.util.Scanner;
import java.util.ArrayList;
public class Main {

	public static void main(String[] args) { 	
		//O usuário deve informar primeiramente a matrícula. Se for 0, o 
		//programa termina e mostra todos os Funcionários cadastrados usando
		//o método criado no item 6 (percorrendo a lista);
		//Se a matrícula for diferente de zero, o usuário informa os demais
		//dados do funcionário, os dados do endereço, cria os objetos Funcionário
		//e Endereço, faz a associação entre eles, usa os métodos de acesso para 
		//os atributos e armazena na lista.

		Scanner in = new Scanner(System.in);
		 
		ArrayList<Funcionario> listaFuncionarios = new ArrayList<Funcionario>();
		Funcionario funcionario1 = new Funcionario("Maria", "123456789-90", 1);
		listaFuncionarios.add(funcionario1);
		Funcionario funcionario2 = new Funcionario("Ana", "123456789-91", 2);
		listaFuncionarios.add(funcionario2);
		Funcionario funcionario3 = new Funcionario("João", "123456789-92", 3);
		listaFuncionarios.add(funcionario3);
		Funcionario funcionario4 = new Funcionario("José", "123456789-93", 4);
		listaFuncionarios.add(funcionario4);
		Funcionario funcionario5 = new Funcionario("Júlia", "123456789-94", 5);
		listaFuncionarios.add(funcionario5);

		System.out.println("Informe a matricula");
		int numero = in.nextInt();
		    
		if(numero == 0){
			int i;
			int n = listaFuncionarios.size();
			for (i=0; i<n; i++) {
				System.out.println(listaFuncionarios.get(i));
			}
		}else{
			numero = numero-1;
				System.out.println(listaFuncionarios.get(numero).toString());
				
				System.out.println("Informe o cargo");
				String cargo = in.next();
				listaFuncionarios.get(numero).setCargo(cargo);
				
				System.out.println("Informe o salario");
				double salario = in.nextDouble();
				listaFuncionarios.get(numero).setSalario(salario);
				
				System.out.println("Informe o departamento");
				String departamento = in.next();
				listaFuncionarios.get(numero).setDepartamento(departamento);
				
				System.out.println("Informe a rua");
				String rua = in.next();
				listaFuncionarios.get(numero).getMorador().setRua(rua);

				System.out.println("Informe o numero");
				int num = in.nextInt();
				listaFuncionarios.get(numero).getMorador().setNum(num);
				
				System.out.println("Informe a quadra");
				int quadra = in.nextInt();
				listaFuncionarios.get(numero).getMorador().setQuadra(quadra);
				
				System.out.println("Informe o lote");
				int lote = in.nextInt();
				listaFuncionarios.get(numero).getMorador().setLote(lote);
				
				System.out.println("Informe o complemento");
				String complemento = in.next();
				listaFuncionarios.get(numero).getMorador().setComplemento(complemento);
				
				System.out.println("Informe o bairro");
				String bairro = in.next();
				listaFuncionarios.get(numero).getMorador().setBairro(bairro);
				
				System.out.println("Informe a cidade");
				String cidade = in.next();
				listaFuncionarios.get(numero).getMorador().setCidade(cidade);
				
				System.out.println("Informe o estado");
				String estado = in.next();
				listaFuncionarios.get(numero).getMorador().setEstado(estado);
				
				System.out.println(listaFuncionarios.get(numero).show());		
		}

			int i;
			int n = listaFuncionarios.size();
			for (i=0; i<n; i++) {
				listaFuncionarios.get(numero).aumentarSalario(30);
				//System.out.println(listaFuncionarios.get(i));
			}
	}

}

//Exercícios Laboratório – Abstração (Classes e Objetos)

//O sistema precisa controlar os funcionários e seus endereços
//sendo que um funcionário pode ser representado pelo seu cpf,
//matrícula, nome, cargo, salário, departamento e Endereço. 
//Um endereço consiste na rua, número, quadra, lote, 
//complemento, bairro, cidade e estado.
//1 - Criar as classes Funcionário e Endereço com seus atributos

//2 - Criar um construtor para Funcionário que recebe como
//parâmetro o nome, cpf e matrícula e inicializa os dados do funcionário

//3 - Criar um construtor para Endereço que recebe como 
//parâmetro a rua e o número e atualiza os respectivos
//atributos do endereço.

//4 - Criar um método que aumenta o salário do Funcionário 
//de acordo com um percentual recebido como parâmetro.

//5 – Criar métodos de acesso necessários (gets e sets).

//6 - Criar um método para mostrar os dados do Funcionário
//que retorna os dados da seguinte forma:   	
//	0001 – 96681999999 - Maria Helena – Departamento : XXX – Cargo : YYY

//7 - Criar uma Classe Principal, contendo o método main, 
//que vai utilizar as classes Funcionário e Endereço, e armazenar
//os dados dos Funcionários em uma lista dinâmica (ArrayList). 
//Exemplo: 	
//ArrayList <Funcionario> listaFuncionarios = new ArrayList<Funcionario>;
//	Funcionario funcionario1 = new Funcionario();
//	listaFuncionarios.add(funcionario1)   /* adicionando um funcionário em uma lista */
//	listaFuncionarios.get(i)  /* acessando o funcionário <i> da lista */
//
//O usuário deve informar primeiramente a matrícula. Se for 0, o 
//programa termina e mostra todos os Funcionários cadastrados usando
//o método criado no item 6 (percorrendo a lista);
//Se a matrícula for diferente de zero, o usuário informa os demais
//dados do funcionário, os dados do endereço, cria os objetos Funcionário
//e Endereço, faz a associação entre eles, usa os métodos de acesso para 
//os atributos e armazena na lista.

//8 – Na classe Principal, percorrer a lista e aumentar o salário de
//todos os funcionários em 30% usando o método criado no item 5 e mostrar 
//novamente os funcionários.
