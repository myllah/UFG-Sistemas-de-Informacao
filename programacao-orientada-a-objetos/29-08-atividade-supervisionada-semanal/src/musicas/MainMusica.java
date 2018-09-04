//Mylena Mariana 201804692
package musicas;
//import java.util.Scanner;
import javax.swing.JOptionPane;

public class MainMusica {

	public static void main(String[] args) {
								
		//Scanner in = new Scanner(System.in);
		
		int m = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade de musicas desejada"));
		Musica musicas[] = new Musica[m];
		int i = 0;
		
		for(i=0; i < m; i++) {
			musicas[i] = new Musica();
		}
		
		for(i = 0; i < m; i++){
			String newNome = JOptionPane.showInputDialog("Digite o nome da música");
			musicas[i].setNome(newNome);
			
			String newAno = JOptionPane.showInputDialog("Digite o ano da música");
			musicas[i].setAno(newAno);
			
			String newTipo = JOptionPane.showInputDialog("Digite o tipo da música");
			musicas[i].setTipo(newTipo);
			
			String newNomeCompositor = JOptionPane.showInputDialog("Digite o nome do Compositor");
			musicas[i].getCompositor().setNomeCompositor(newNomeCompositor);
			
			String newNacionalidade = JOptionPane.showInputDialog("Digite a nacionalidade do Compositor");
			musicas[i].getCompositor().setNacionalidade(newNacionalidade);		
				
			JOptionPane.showMessageDialog(null, musicas[i].toString(), "Música", 1);
			
		}
		for (i=0; i<m; i++) {
				musicas[i].toString();
				//JOptionPane.showMessageDialog(null, musicas[i].toString());
				System.out.println(musicas[i].toString() + "\n");
			}
		}
}

//
//Exercícios Laboratório – Associação entre Classes
//
//1 – Para cada contexto, modelar e implementar as 
//classes e uma classe principal para gerar instâncias 
//de cada situação. Crie também construtores próprios
//para cada classe. Os construtores devem receber como
//parâmetro o valor do nome e inicializar o atributo
//correspondente (nome/razão social para empresa), 
//e um método toString() para mostrar a instância.
//
//Músicas e Compositores
//Para músicas precisamos do nome, ano, tipo e compositor;
//e para compositores precisamos do nome e da nacionalidade
//Criar/Instanciar algumas músicas, cada uma com seu 
//compositor e mostrá-los;
//Alterar a implementação para que uma música tenha 
//mais de um compositor;