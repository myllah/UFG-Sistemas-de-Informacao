
public class ContaPoupanca extends Conta {
	
	public void atualizaSaldo(double percentual) {
		setSaldo(getSaldo() + getSaldo()*percentual/100);
	}
	
	public void transferir(Conta conta, double valor) {
		sacar(valor);
		conta.depositar(valor);
	}
	
}