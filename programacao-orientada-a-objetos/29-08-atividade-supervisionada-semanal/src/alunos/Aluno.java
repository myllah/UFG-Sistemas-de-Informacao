package alunos;

public class Aluno {
	
	private String nome;
	private String matricula;
	private int ano;
	private Curso curso = new Curso();
	
	public Aluno() {
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
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public Curso getCurso() {
		return curso;
	}
	public void setCurso(Curso curso) {
		this.curso = curso;
	}

	@Override
	public String toString() {
		return "Nome do Aluno = " + getNome()
				+ "\nMatricula = " + getMatricula()
				+ "\nAno = " + getAno()
				+ "\nNome do Curso = " + getCurso().getNome()
				+ "\nSigla do Curso = " + getCurso().getSigla()
				+ "\nNome do Departamento = " + getCurso().getDepartamento().getNome()
				+ "\nSigla do Departamento = " + getCurso().getDepartamento().getSigla();
	}
	
}