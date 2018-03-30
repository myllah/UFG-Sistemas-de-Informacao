//4. Custo da Lata de Cerveja

#include<stdio.h>
#include<math.h>

float r = 3.14159;

main() {

	float raio;
	float altura;
	float areaCirculo;
	float areaLateral;
	float area;
	float custo;

	//printf("Digite o raio da lata\n");
	scanf("%f", &raio);
	//printf("Digite a altura da lata\n");
	scanf("%f", &altura);

	areaCirculo = (r*(raio*raio));
	areaLateral = 2*r*raio*altura;
	area = 2*areaCirculo + areaLateral;
	custo = area * 100;

	printf("O VALOR DO CUSTO E = %.2f\n", truncf(custo*100)/100);

}
/*
4. Custo da Lata de Cerveja (+)
Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de
alumínio, sabendo-se que o custo do alumínio por m2 é R$ 100,00.
		Entrada
O programa deve ler dois valores na entrada: o raio e a altura da lata. Ambos os valores correspondem
a valores em metros. Cada valor ocorre em uma linha diferente na entrada.
		Saída
O programa deve imprimir a frase: O VALOR DO CUSTO E = XXX.XX, onde XXX.XX é o valor do
custo da lata. Logo após o valor do custo da lata o programa deve imprimir o caractere de quebra de linha ‘\n’.
		Observações
• O seu programa deve utilizar a constante π com o valor aproximado de 3.14159.
• O valor total da área de um cilindro é dada por At = 2Ac + Al
, onde Ac é a área do círculo, calculada como: Ac = πr2 e Al é a área lateral do cilindro, computada
por Al = 2πra, onde r é o raio e a altura da lata em metros.
• Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ",
x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir
0.34 enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado
pelo Sharif. Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf():
printf("%.2f", truncf(x*100.0)/100.0); A expressão acima multiplica o valor de x por 100.00 antes
de trunca-lo (podar sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo
com que o número seja impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00=
34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/