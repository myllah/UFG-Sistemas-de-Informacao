
public class ContaCorrente extends Conta {

	public void sacar(double valor) {
		setSaldo(getSaldo() - valor - 0.05);
	}
	
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor - 0.05);
	}	
	
	public void transferir(Conta conta, double valor) {
		sacar(valor);
		conta.depositar(valor);
	}
}
