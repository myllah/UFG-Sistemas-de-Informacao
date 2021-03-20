#include <stdio.h>

int main() {
	int ano;
	float vezes;
	scanf("%d", &ano);
	
	vezes = (ano - 10) / 76;
	vezes++;
	
	float qtdAnos = 0;
	if(ano > 1986){
		qtdAnos = (ano - 1986) / 4;
	} else if(ano < 1986){
		qtdAnos = (1986 - ano) / 4;
	}
	
	int bi = 0;
	
	while(qtdAnos > 365){
			bi++;
			qtdAnos = qtdAnos - 365;
	}
	
	printf("%d\n", (int) (vezes * 76 + 10 - bi));
	
	return 0;
}

/*cometa (+) 
O cometa Halley é um dos cometas de menor período do Sistema Solar, completando uma volta em
torno do Sol a cada 76 anos. Na última ocasião em que ele se tornou visível do planeta Terra, em 1986,
várias agências espaciais enviaram sondas para coletar amostras de sua cauda e assim confirmar teorias
sobre sua composição química. Saiba mais sobre ele em http://astro.if.ufrgs.br/solar/
halley.htm.
Escreva um programa C que, dado o ano atual, determina qual o próximo ano em que o cometa Halley
será visível novamente no planeta Terra. Se o ano atual é um ano de passagem do cometa, considere que o
cometa já passou nesse ano, ou seja, considere sempre o próximo ano de passagem após o atual.
Observação: Não se esqueça de considerar os anos bissextos, ou seja, que a cada quatro anos (em di-
reção ao futuro ou ao passado) há um erro de um dia em relação ao ano solar que, neste caso, é considerado
como tendo exatamente 365 dias terrestres. O ano de 1986, quando o cometa de Halley se tornou visível na
Terra pela última vez, é considerado o “marco de sincronismo” para os cálculos do programa a ser elaborado.

Entrada
A única linha da entrada do programa contém um único inteiro A, indicando o ano atual, sendo que
0 ≤ A ≤ 10 4 .

Saída
Seu programa deve imprimir uma única linha, contendo um número inteiro, indicando o próximo ano
em que o cometa Halley será visível novamente do planeta Terra.
Exemplos

Entrada
Saída
2635
2670
* 
Entrada
Saída
2010
2062

Entrada
Saída
2270
2290

Entrada
Saída
1910
1986

Entrada
Saída
460
465

 */
