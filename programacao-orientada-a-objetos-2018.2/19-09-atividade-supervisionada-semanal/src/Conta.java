
public abstract class Conta {
	
	private long numero;
	//private String dono;
	Cliente cliente;
	private double saldo;
	
	public long getNumero() {
		return numero;
	}
	public void setNumero(long numero) {
		this.numero = numero;
	}
//	public String getDono() {
//		return dono;
//	}
//	public void setDono(String dono) {
//		this.dono = dono;
//	}
	public Cliente getCliente() {
		return cliente;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}
	public double getSaldo() {
		return saldo;
	}
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	
	public void sacar(double valor) {
		this.saldo = this.saldo - valor;
	}
	
	public void depositar(double valor) {
		this.saldo = this.saldo + valor;
	}
	
	public abstract void transferir(Conta conta, double valor);

	public String toString() {
		return "Número da Conta = " + numero
				+ cliente.toString()
				+ "\nSaldo da Conta = " + saldo;
	}
	
}
