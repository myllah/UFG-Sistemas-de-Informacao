//Mylena Mariana Pires Barbosa 201804692
import java.util.ArrayList;

import javax.swing.JOptionPane;
public class TestaConta {
	
	public static void main(String[] args) {

		ArrayList<Conta> list = new ArrayList<Conta>();
		
		int num = 0;
		do {
			
			num = Integer.parseInt(JOptionPane.showInputDialog("Digite o número correspondente ao tipo da conta"
					+ "\n1 - Corrente\n2 - Conta Salário\n3 - Poupança"));
			if(num == 0) {
				break;
			}
			
			String nome = JOptionPane.showInputDialog("Digite o nome completo do cliente");
			String telefone = JOptionPane.showInputDialog("Digite o telefone do cliente");
			
			Cliente cliente = new Cliente(nome, telefone);
			
			long numero = Long.parseLong(JOptionPane.showInputDialog("Digite o número da conta"));
			double saldo = Double.parseDouble(JOptionPane.showInputDialog("Digite o saldo da conta"));
		
			if(num == 1) {
				Conta newConta = new ContaCorrente();	
				newConta.setCliente(cliente);
				newConta.setNumero(numero);
				newConta.setSaldo(saldo);
				list.add(newConta);
			}else if(num == 2) {
				Conta newConta = new ContaCorrente();	
				newConta.setCliente(cliente);
				newConta.setNumero(numero);
				newConta.setSaldo(saldo);
				list.add(newConta);
			}else if(num == 3) {
				Conta newConta = new ContaCorrente();
				newConta.setCliente(cliente);
				newConta.setNumero(numero);
				newConta.setSaldo(saldo);
				list.add(newConta);
			}else {
				JOptionPane.showMessageDialog(null, "ERRO! Você digitou "
						+ "um tipo de conta inexistente", "ERRO", 0);
				break;
			}
		}while(num != 0);
		
		for(int i = 0; i < list.size(); i++) {
			JOptionPane.showMessageDialog(null, list.get(i).toString());
			System.out.println(list.get(i).toString() + "\n");
			
		}		
	}
}


/////////////////////////////////////////////////////////////

//Aula Exercícios Polimorfismo
//
//1) Criar uma classe Conta com número, dono e saldo.

//2)Criar métodos gets e sets

//3)Criar os métodos:
//• sacar:que recebe um valor como parâmetro e atualiza o saldo diminuindo este valor;
//• depositar: que recebe um valor como parâmetro e atualiza o saldo somando este valor;
//• transferir:que recebe como parâmetro a conta destino e um valor, saca o valor 
//da conta de origem e deposita na destino;

//4)Criar duas sub classes ContaCorrente e ContaPoupanca
//• A classe ContaCorrente deverá ter os métodos sacar e depositar sobrescritos pois 
//todo saque ou depósito de uma conta corrente deve cobrar uma taxa de R$ 0,05.
//• A classe ContaPoupanca deve ter um método chamado atualizaSaldo que recebe 
//um percentual e atualiza o saldo da conta.

//5) Criar a classe TestaConta que declare duas referências a objetos do tipo Conta, 
//sendo que uma será uma instância de ContaCorrente e a outra de ContaPoupanca.

//6) Configure os dados das duas contas usando os métodos sets (número, dono e saldo).

//7) Para cada conta, invoque os métodos depositar, sacar e veja os resultados.
//Observe as diferenças nos métodos chamados.

//8) Para o objeto da ContaPoupanca, invoque o método atualiza passando um valor e 
//veja o resultado.
//Observe que haverá a necessidade de usar o casting.

//10) Altere a declaração das contas para seus tipos próprios, retire o casting
//e veja os resultados.

//11) Crie outras contas dos dois tipos e use o método transferir entre elas.
//Execute e veja os resultados. Observe que o método transferir também 
//precisa aplicar as taxas de depósito e saque nas devidas contas.

//12) Crie outra subclasse de ContaCorrente que se refere à ContaSalario. 
//Este tipo de conta tem uma diferenciação com relação à taxa cobrada em 
//cada transação (saque e depósito). A taxa deixa de ser R$ 0,05 e passa a ser R$ 0,01.

//13) Na classe TestaConta, declare contas do tipo ContaSalario, configure seus dados
//e invoque os métodos sacar, depositar e transferir avaliando os resultados.

//14) Faça transferência entre contas de tipos diferentes e avalie os resultados.
//Veja se os cálculos das taxas estão corretos.

//15) Mostre sempre os saldos no final de cada operação para verificar o resultado.

//16) Alterações nas classes existentes .. Continuação
//• criar uma classe Cliente com os atributos privates nome e telefone;
//• alterar o atributo dono da classe Conta para fazer referência à um Cliente;
//• como os atributos são todos privates, gerar os métodos necessários para 
//acesso aos atributos de Cliente;
//• Criar um construtor para a classe Cliente;
//• Alterar os métodos toString para ao invés de mostrar o atributo dono, 
//mostrar os atributos de Cliente utilizando os métodos gets;
//• alterar a classe Conta e o método transferir para abstract, e fazer as devidas
//implementações em ContaPoupanca e ContaCorrente;
//• Na classe TesteConta, alterar a entrada de dados para simular um cadastro de 
//contas correntes, contas poupanças e salários da seguinte forma:
//◦ Criar uma interface para pedir os dados da Conta e do Cliente (JoptionPane);
//◦ Ler os dados até que o usuário digite o número da conta = 0;
//◦ Solicitar um tipo de conta (1-Corrente, 2-Conta SalárioSalário ou 3-poupança);
//◦ Receber os dados, instanciar um Cliente com os dados de entrada do cliente, e 
//instanciar a conta de acordo com o tipo informado 
//(ContaCorrente, ContaPoupanca ou ContaSalário);
//◦ Armazenar os dados recebidos em um Array de Contas;
//◦ Ao final do cadastro, o programa deve percorrer o Array e mostrar todas as
//contas cadastradas com todos os seus dados (usar o método toString);

