
public class ContaSalario extends ContaCorrente {

	public void sacar(double valor) {
		setSaldo(getSaldo() - valor - 0.01);
	}
	
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor - 0.01);
	}	
	
	public void transferir(Conta conta, double valor) {
		sacar(valor);
		conta.depositar(valor);
	}
}
