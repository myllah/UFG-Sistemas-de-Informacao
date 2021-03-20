public class TransformaNome {
	
	String nome;
	
	TransformaNome(String nome){
		this.nome = nome;
	}
 
	String maiusculo() {
		return nome.toUpperCase();
	}
	
	String minusculo() {
		return nome.toLowerCase();
	}
	
	int buscarBranco() {
		int qtde = 0;
		int i = 0;
		int pos = 0;
		while (pos >= 0) {
			pos = nome.indexOf(' ', i);
			if (pos >= 0) {
				qtde++;
				i = pos + 1;
			}
		}
		return qtde;
	}
	
	String invertido() {
		return new StringBuilder(nome).reverse().toString();
	}
	
	int qtdPalavras() {
		int brancos = buscarBranco();
		return brancos + 1;
	}
	
}