package exercico02;

public abstract class Loja implements Registro{
	
	private int id;
	private String cnpj;
	private String razaoSocial;
	private boolean aberta;
	
	public Loja(int id, String cnpj, String razaoSocial) {
		this.id = id;
		this.cnpj = cnpj;
		this.razaoSocial = razaoSocial;
		this.aberta = false;
	}

	public String getCnpj() {
		return cnpj;
	}

	public String getRazaoSocial() {
		return razaoSocial;
	}

	public boolean isAberta() {
		return aberta;
	}

	public void registra_abertura_dia() {
		if(aberta == false) {
			aberta = true;
		}else {
			System.out.println("Loja já está aberta");
		}
	}
	
	public void registra_fechamento_dia() {
		if(aberta == true) {
			aberta = false;
		}else {
			System.out.println("Loja já está fechada");
		}
	}
	
	@Override
	public String toString() {
		return "id = " + id
				+ ", cnpj = " + cnpj
				+ ", razaoSocial = " + razaoSocial
				+ ", aberta = " + aberta;
	}
	
}
