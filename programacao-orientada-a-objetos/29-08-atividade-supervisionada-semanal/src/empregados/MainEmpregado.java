package empregados;
//Mylena Mariana 201804692
import javax.swing.JOptionPane;
public class MainEmpregado {

	private static int i = 0;

	public static void main(String[] args) {

		int n = Integer.parseInt(JOptionPane.showInputDialog("Informe a quantidade de empregados"));
		
		Empregado empregado[] = new Empregado[n];

		for(i = 0; i < n; i++) {
			empregado[i] = new Empregado();
		}

		for(i = 0; i < n; i++){
			//uma empresa tem cpnj, razão social e endereço
			
			//um endereço é formado pela rua, número,
			//complemento, cep, bairro, cidade e estado
			String nome = JOptionPane.showInputDialog("Digite o nome do empregado");
			empregado[i].setNome(nome);
				
			String matricula = JOptionPane.showInputDialog("Digite a matricula do empregado");
			empregado[i].setMatricula(matricula);
			
			String cnpj = JOptionPane.showInputDialog("Digite o cnpj da empresa");
			empregado[i].getEmpresa().setCnpj(cnpj);
				
			String razaoSocial = JOptionPane.showInputDialog("Digite a razao social da empresa");
			empregado[i].getEmpresa().setRazaoSocial(razaoSocial);
			
			JOptionPane.showMessageDialog(null, "Informe a seguir o endereço da empresa", "Endereço da Empresa", 1);
			
			String rua = JOptionPane.showInputDialog("Digite a rua");
			empregado[i].getEmpresa().getEndereco().setRua(rua);
							
			int numero = Integer.parseInt(JOptionPane.showInputDialog("Digite o número"));
			empregado[i].getEmpresa().getEndereco().setNumero(numero);	
							
			String complemento = JOptionPane.showInputDialog("Digite o complemento");
			empregado[i].getEmpresa().getEndereco().setComplemento(complemento);
					
			String cep = JOptionPane.showInputDialog("Digite o CEP");
			empregado[i].getEmpresa().getEndereco().setCep(cep);
					
			String bairro = JOptionPane.showInputDialog("Digite o Bairro");
			empregado[i].getEmpresa().getEndereco().setBairro(bairro);
					
			String cidade = JOptionPane.showInputDialog("Digite a Cidade");
			empregado[i].getEmpresa().getEndereco().setCidade(cidade);
			
			String estado = JOptionPane.showInputDialog("Digite o Estado");
			empregado[i].getEmpresa().getEndereco().setEstado(estado);		
			
			JOptionPane.showMessageDialog(null, empregado[i].toString(), "Empregado" + empregado[i].getNome(), 1);
		
		}
		
		for (i=0; i<n; i++) {
			System.out.println(empregado[i].toString() + "\n");
				
		}
	}

}

//Empregado trabalhando em uma empresa
//Um empregado tem nome, matricula e empresa; 
//uma empresa tem cpnj, razão social e endereço
//(igual ao do empregado no exercício anterior);
//Criar/Instanciar empregados com sua empresa,
//a empresa com seu endereço, e mostrá-los.