
public class Funcionario {
	private String cpf;
	private int matricula;
	private String nome;
	private String cargo;
	private double salario;
	private String departamento;
	Endereco morador;

	Funcionario(String nome, String cpf, int matricula){
		this.nome = nome;
		this.cpf = cpf;
		this.matricula = matricula;
	}
	
	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public int getMatricula() {
		return matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCargo() {
		return cargo;
	}

	public void setCargo(String cargo) {
		this.cargo = cargo;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public String getDepartamento() {
		return departamento;
	}

	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}

	public Endereco getMorador() {
		return morador;
	}

	public void setMorador(Endereco morador) {
		this.morador = morador;
	}
	
	public String toString() {
		return matricula + " - "
				+ cpf + " - "
				+ nome + " - "
				+ "Departamento : " + departamento + " - "
				+ "Cargo : " + cargo;	
	}
	
	public String show() {
		return "Matricula : " + getMatricula()
				+ "\nCPF : " + getCpf()
				+ "\nNome : " + getNome()
				+ "\nDepartamento : " + getDepartamento()
				+ "\nCargo : " + getCargo()
				+ "\nSalario : " + getSalario()
				+ "\nRua : " + getMorador().getRua()
				+ "\nNum : " + getMorador().getNum()
				+ "\nQuadra : " + getMorador().getQuadra()
				+ "\nLote : " + getMorador().getLote()
				+ "\nComplemento : " + getMorador().getComplemento()
				+ "\nBairro : " + getMorador().getBairro()
				+ "\nCidade : " + getMorador().getCidade()
				+ "\nEstado : " + getMorador().getEstado();	
	}
	
	void aumentarSalario(double percentual){
		salario = salario + salario*percentual;
	}
}
