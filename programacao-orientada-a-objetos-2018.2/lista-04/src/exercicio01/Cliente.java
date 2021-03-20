package exercicio01;

public class Cliente{
	
	private String nome;
	private String sexo;
	private int idade;
	
	public Cliente(String nome, String sexo, int idade) {
		this.nome = nome;
		this.sexo = sexo;
		this.idade = idade;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getSexo() {
		return sexo;
	}
	public void setSexo(String sexo) {
		this.sexo = sexo;
	}

	@Override
	public String toString() {
		return "Nome = " + nome
				+ "\nSexo = " + sexo
				+ "\nIdade = " + idade;
	}

}

//1 – Escreva um programa que receba dados sobre clientes (nome, sexo
//e separadamente dia, mês e ano de nascimento) e valide os 
//dados de entrada só permitindo os sexos F,M através da criação de 
//um tipo de exceção próprio; e valores numéricos para dia, mês e ano 
//de nascimento também através do tratamento de exceções de tipo de 
//entrada inválido.

//A entrada de dados deve continuar até que o usuário digite “fim” no nome.

//Se os valores forem válidos, instanciar um cliente, calcular a idade
//do cliente baseada na data atual  e gravar o objeto cliente em um vetor. 

//Os atributos da classe cliente devem ser (nome, sexo e idade). 
//Ao final, ler o vetor e mostrar os dados de cada cliente.
