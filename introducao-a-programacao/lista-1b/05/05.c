//5 - Conversão de Nota em Conceito

#include <stdio.h>

main()
{
	float nota;
	char conceito;

	//printf("Digite a nota\n");
	scanf("%f", &nota);

	if (nota <=10 && nota >=9.0)
	{
		conceito = 'A';
	} else if (nota < 9 && nota >=7.5)
	{
		conceito = 'B';
	} else if (nota < 7.5 && nota >=6)
	{
		conceito = 'C';
	} else if (nota < 6 && nota >=0)
	{
		conceito = 'D';
	} else
	{
		printf("NOTA INVALIDA\n");
		return 0;
	}

	printf("NOTA = %.1f CONCEITO = %c\n",  truncf(nota*10)/10 ,conceito);
}
/*
5 - Conversão de Nota em Conceito (+)
Em um curso de mestrado as avaliações dos alunos no histórico escolar aparecem em forma de conceito.
O regulamento do mestrado indica que um professor pode avaliar seus alunos com notas convencionais de
zero a dez, mas precisa repassar à secretaria do curso a avaliação em termos de conceito. Nesse caso, a
seguinte tabela de conversão deve ser usada pelo professor:
Intervalo da Nota 	 	 Conceito
[9,0 a 10]        	    	A
[7,5,9,0)					B
[6, 7,5)					C
[0 ,6,0)					D

Escreva um programa para ler um nota e converte-la no conceito correspondente.
	Entrada
A entrada consiste de uma linha com um valor real entre 0 e 10 e com uma casa decimal.
	Saída
O programa deve imprimir a seguinte frase: NOTA = x CONCEITO = y, onde x é o valor da nota lido
na entrada, impresso com uma casa decimal y é o conceito correspondente. Após a frase, o programa deve
imprimir o caractere de quebra de linha: ’\n’.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sha-
rif. Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/
