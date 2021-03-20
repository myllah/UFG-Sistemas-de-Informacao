//Mylena Mariana 201804692
package alunos;
import javax.swing.JOptionPane;
public class MainAluno {

	public static void main(String[] args) {
				
		int n = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade de alunos"));
		Aluno aluno[] = new Aluno[n];
		int i = 0;
				
		for(i=0; i < n; i++) {
			aluno[i] = new Aluno();
		}
				
		for(i = 0; i < n; i++){
			String newNome = JOptionPane.showInputDialog("Digite o nome do aluno");
			aluno[i].setNome(newNome);
				
			String newMatricula = JOptionPane.showInputDialog("Digite a matricula do aluno");
			aluno[i].setMatricula(newMatricula);
					
			int newAno = Integer.parseInt(JOptionPane.showInputDialog("Digite o ano"));
			aluno[i].setAno(newAno);
			
			String newNomeCurso = JOptionPane.showInputDialog("Digite o nome do curso");
			aluno[i].getCurso().setNome(newNomeCurso);
					
			String newSiglaCurso = JOptionPane.showInputDialog("Digite a sigla do curso");
			aluno[i].getCurso().setSigla(newSiglaCurso);
			
			String newNomeDepartamento = JOptionPane.showInputDialog("Digite o nome do departamento");
			aluno[i].getCurso().getDepartamento().setNome(newNomeDepartamento);
					
			String newSiglaDepartamento = JOptionPane.showInputDialog("Digite a sigla do departamento");
			aluno[i].getCurso().getDepartamento().setSigla(newSiglaDepartamento);
			
			JOptionPane.showMessageDialog(null, aluno[i].toString(), "Aluno" + aluno[i].getMatricula(), 1);
			
		}
		for (i=0; i<n; i++) {
			System.out.println(aluno[i].toString() + "\n");
		
		}
	}
}
//Alunos matriculados em cursos de um departamento
//Os alunos têm nome, matricula, ano e curso; os cursos
//têm nome, sigla e departamento e cada departamento
//tem seu nome e sua sigla;
//Criar/Instanciar alunos, cursos e departamentos, 
//fazer os vínculos entre eles e mostrá-los;