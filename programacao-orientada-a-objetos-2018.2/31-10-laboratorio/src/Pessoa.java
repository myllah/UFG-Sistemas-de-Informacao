
public class Pessoa {
	private String nome;
	private double salario;
	private int idade;
	private int numDependentes;
	private double imposto;
	
	public Pessoa(String nome, double salario, int numDependentes, int idade) {
		this.nome = nome;
		this.salario = salario;
		this.numDependentes = numDependentes;
		this.idade = idade;
	}
	
	public double calculaImposto() {
		if(idade >= 65) {
			imposto = 0;
		} else {
			if(salario < 1787.77) {
				imposto = 0;
			}else if(salario > 1787.78 && salario < 2679.29) {	
				imposto = salario*7.5/100 - 134.08 - 179.71*(numDependentes);
			}else if(salario > 2679.30 && salario < 3572.43) {
				imposto = salario*15/100 - 335.03 - 179.71*(numDependentes);
			}else if(salario > 3572.44 && salario < 4463.81) {
				imposto = salario*22.5/100 - 602.96 - 179.71*(numDependentes);
			}else if(salario > 4463.81) {
				imposto = salario*27.5/100 - 826.15 - 179.71*(numDependentes);

			}
		}
		if(imposto < 0) {
			imposto = 0;
		}
		return imposto;
	}
}
//
//Salário                   Percentual     Dedução
//Até 1.787,77 	              ----         ------
//De 1.787,78 até 2.679,29   7,5%         134,08
//De 2.679,30 até 3.572,43    15%          335,03
//De 3.572,44 até 4.463,81   22,5%        602,96
//Acima de 4.463,81          27,5%        826,15
//