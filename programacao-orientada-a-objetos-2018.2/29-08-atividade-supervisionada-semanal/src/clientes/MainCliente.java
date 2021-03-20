package clientes;
//Mylena Mariana 201804692
import javax.swing.JOptionPane;
public class MainCliente {

	public static void main(String[] args) {
	
		int n = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade de clientes"));
		Cliente cliente[] = new Cliente[n];
		int i = 0;
						
		for(i=0; i < n; i++) {
			cliente[i] = new Cliente();
		}
						
		for(i = 0; i < n; i++){
			
			String nome = JOptionPane.showInputDialog("Digite o nome do cliente");
			cliente[i].setNome(nome);
				
			String cpf = JOptionPane.showInputDialog("Digite o CPF do cliente");
			cliente[i].setCpf(cpf);
			
			String rua = JOptionPane.showInputDialog("Digite a rua");
			cliente[i].getEndereco().setRua(rua);
							
			int numero = Integer.parseInt(JOptionPane.showInputDialog("Digite o número"));
			cliente[i].getEndereco().setNumero(numero);	
							
			String complemento = JOptionPane.showInputDialog("Digite o complemento");
			cliente[i].getEndereco().setComplemento(complemento);
					
			String cep = JOptionPane.showInputDialog("Digite o CEP");
			cliente[i].getEndereco().setCep(cep);
					
			String bairro = JOptionPane.showInputDialog("Digite o Bairro");
			cliente[i].getEndereco().setBairro(bairro);
					
			String cidade = JOptionPane.showInputDialog("Digite a Cidade");
			cliente[i].getEndereco().setCidade(cidade);
			
			String estado = JOptionPane.showInputDialog("Digite o Estado");
			cliente[i].getEndereco().setEstado(estado);		
			
			JOptionPane.showMessageDialog(null, cliente[i].toString(), "Cliente" + cliente[i].getNome(), 1);
		
		}
		
		for (i=0; i<n; i++) {
			System.out.println(cliente[i].toString() + "\n");
				
		}
	}
}

//Clientes com seu endereço 
//Um cliente tem nome, cpf e endereço;
//um endereço é formado pela rua, número,
//complemento, cep, bairro, cidade e estado
//Criar/Instanciar clientes com seu endereço 
//e mostrar cada um deles;
