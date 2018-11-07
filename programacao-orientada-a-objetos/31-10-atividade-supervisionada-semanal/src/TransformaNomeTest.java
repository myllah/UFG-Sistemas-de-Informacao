import static org.junit.Assert.*;
import org.junit.Test;

public class TransformaNomeTest {
	@Test
	public void testMaiusculo() {
		TransformaNome tnome = new TransformaNome("Maria");
		assertEquals("MARIA",tnome.maiusculo());
	}
	
	@Test
	public void testMinusculo() {
		TransformaNome tnome = new TransformaNome("Maria");
		assertEquals("maria",tnome.minusculo());
	}
	
	@Test
	public void testBuscarBranco() {
		TransformaNome tnome = new TransformaNome("Maria Clara Machado");
		assertEquals(2,tnome.buscarBranco());
	}
	
	@Test
	public void testNomeInvertido() {
		TransformaNome tnome = new TransformaNome("Maria");
		assertEquals("airaM" ,tnome.invertido());
		
		TransformaNome tnome1 = new TransformaNome("Machado");
		assertEquals("odahcaM" ,tnome1.invertido());
	}
	
	@Test
	public void testQtdPalavras() {
		TransformaNome tnome = new TransformaNome("Maria Clara Machado");
		assertEquals(3,tnome.qtdPalavras());
		
		TransformaNome tnome1 = new TransformaNome("Joana Carvalho Oliveira da Silva");
		assertEquals(5,tnome1.qtdPalavras());
		
		TransformaNome tnome2 = new TransformaNome("Mariana");
		assertEquals(1,tnome2.qtdPalavras());
	}
}

//Exercício
//1 - Copie as duas classes anteriores (TransformaNome e TransformaNomeTest (Junit));
//2 – Rode o teste para ver se roda com sucesso;
//3 – Implemente dois métodos novos na classe TransformaNome:
//- Um método que retorna o nome invertido;
//- Um método que retorna a quantidade de palavras do nome (use o
//buscarBrancos);
//4 – Implemente 2 métodos de teste na classe de teste para testar os dois novos
//métodos criados.
//5 – Rode a classe de teste