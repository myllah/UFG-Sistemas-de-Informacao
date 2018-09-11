import java.util.Scanner;

public class Cadastro {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		Caixa caixa01 = new Caixa("0001", "Maria");
		caixa01.setHorario("Noturno");
		caixa01.setTelefone("55 5555-5555");
		caixa01.setSalario(1000);
		caixa01.aumentaSalario(10);
		System.out.println(caixa01.toString() + "\n");
		caixa01.recebimentoAnual();
		
		Gerente gerente01 = new Gerente("0002", "José");
		gerente01.setTelefone("77 7777-7777");
		gerente01.setSalario(2000);
		gerente01.setBonificacao(200);
		gerente01.setTipo("PF");
		gerente01.aumentaSalario(20);
		System.out.println(gerente01.toString() + "\n");
		gerente01.recebimentoAnual(gerente01);
		
		Cliente cliente01 = new Cliente("Ana", "11 1111-1111", 19, "123455678");
		Cliente cliente02 = new Cliente("Carol", "22 2222-2222", 23, "11245586564");
		Cliente cliente03 = new Cliente("João", "33 3333-3333", 18, "345657523");
		
		cliente02.desativarCliente();
		System.out.println(cliente01.toString() + "\n");
		System.out.println(cliente02.toString() + "\n");
		System.out.println(cliente03.toString() + "\n");

	}

}

//Exercícios Herança
//
//Dada a seguinte situação:
//
//	Um banco deseja controlar os dados de todos os tipos de pessoas que se 
//	relacionam com os seus sistemas, tanto funcionários quanto clientes.
//	Para isso, foram levantadas algumas informações sobre características 
//	de cada tipo de pessoa.
//
//Um caixa de banco é um funcionário e tem como características:
//	nome, telefone, matricula, salário, horário;
//Um gerente é um funcionário e tem como características:
//	nome, telefone, matrícula, salário,  bonificação (fixa mensal) 
//	e um tipo (PF para gerente de pessoa física ou PJ para jurídica);
//Um cliente tem como características:
//	nome, telefone, idade, cpf, status (“A” – ativo, “I” - inativo)
//
//1 - Escreva as classes, com seus atributos, necessárias para representar 
//o enunciado usando o
//conceito de herança e as boas práticas (atributos protegidos e métodos públicos).
//
//2 – Escreva os métodos das classes de acordo com os seguintes requisitos:
//Todos os funcionários do banco podem ter aumento de salário sendo que este
//é aplicado
//através da chamada de um método que recebe um percentual e atualiza o
//salário somando o
//salário atual com esse percentual;
//
//Todo os funcionários devem ter um método que retorna o total de recebimento 
//anual do funcionário sendo que os gerentes recebem, além do salário, 
//a bonificação mensal;
//Todo funcionário, ao ser criado, deve ter obrigatoriamente a matrícula e o nome;
//Para a criação de um cliente devem ser informados todos os dados e o 
//status inicial de criação é sempre ativo (criação de construtor);
//Também é possível desativar um cliente invocando um método chamado 
//desativar que verifica se o cliente está ativo e troca o seu estado para inativo;
//O cliente deve ter um método para mostrar seus dados concatenados
//com a informação se ativo ou inativo;
//ex: “Maria – Tel:2345-6697 – idade: 20 anos – cpf: 8889989898 - ativo”
//Todas as classes devem ter os métodos gets e sets necessários.
//
//3 - Escrever uma classe de Cadastro para instanciar tipos de
//pessoas diferentes:
//
//criar um funcionário caixa;
//configurar seu horário, telefone e salário;
//aumentar o salário com um percentual de 10%;
//mostrar os dados do funcionário e o recebimento anual;
//criar um funcionário gerente;
//configurar telefone, salário, bonificação e tipo;
//aumentar o salário em 20%;
//mostrar os dados do funcionário e o recebimento anual;
//criar 3 instâncias de cliente : cliente1, cliente2, cliente3;
//desativar um dos clientes usando o método criado anteriormente;
//mostrar seus dados através do método criado para mostrar os dados do cliente;
