package exercicio04;

import java.util.ArrayList;

public class Empresa {
	private String cnpj;
	private String nome;
	private ArrayList<Funcionario> funcionarios = new 
			ArrayList<Funcionario>();
	
	public Empresa(String cnpj, String nome) {
		super();
		this.cnpj = cnpj;
		this.nome = nome;
	}
	
	public void addFuncionario(Funcionario funcionario) {
		funcionarios.add(funcionario);
	}
	
	public void mostrarLista() {
		for(int i = 0; i < funcionarios.size(); i++) {
			System.out.println(funcionarios.get(i) + "\n");
		}
	}

	@Override
	public String toString() {
		String retorno = "CNPJ = " + cnpj
				+ "\nNome = " + nome
				+ "\n";
		for(int i = 0; i < funcionarios.size(); i++) {
			retorno = retorno + "\n" + funcionarios.get(i) + "\n";
		}
		
		return retorno;
	}

	public String getCnpj() {
		return cnpj;
	}

	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public ArrayList<Funcionario> getFuncionarios() {
		return funcionarios;
	}

	public void setFuncionarios(ArrayList<Funcionario> funcionarios) {
		this.funcionarios = funcionarios;
	}
	
}
