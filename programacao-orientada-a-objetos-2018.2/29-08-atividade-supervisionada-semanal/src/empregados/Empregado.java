package empregados;

class Empregado {
	
	private String nome;
	private String matricula;
	private Empresa empresa = new Empresa();
	public Empregado() {
		// TODO Auto-generated constructor stub
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getMatricula() {
		return matricula;
	}
	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}
	public Empresa getEmpresa() {
		return empresa;
	}
	public void setEmpresa(Empresa empresa) {
		this.empresa = empresa;
	}
	@Override
	public String toString() {
		return "Nome = " + getNome()
				+ "\nMatricula = " + getMatricula()
				+ "\nCNPJ = " + getEmpresa().getCnpj()
				+ "\nRazão Social = " + getEmpresa().getRazaoSocial()
				+ "\nRua = " + getEmpresa().getEndereco().getRua()
				+ "\nNúmero = " + getEmpresa().getEndereco().getNumero()
				+ "\nComplemento = " + getEmpresa().getEndereco().getComplemento()
				+ "\nCEP = " + getEmpresa().getEndereco().getCep()
				+ "\nBairro = " + getEmpresa().getEndereco().getBairro()
				+ "\nCidade = " + getEmpresa().getEndereco().getCidade()
				+ "\nEstado = " + getEmpresa().getEndereco().getEstado();
	}
}
