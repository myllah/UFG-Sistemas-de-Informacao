//18 - Ordem
#include <stdio.h>
main(){

	int a = 0, b = 0, c = 0, menor, medio, maior;
	char x, y, z;

	scanf("%d\n ", &a);
	scanf("%d\n ", &b);
	scanf("%d\n ", &c);

	scanf(" %c", &x);
	scanf(" %c", &y);
	scanf(" %c", &z);

	if (a >= b && a >= c)
	{
		if (c >= b)
		{
			maior = a;
			menor = b;
			medio = c;

		} else if (b >= c)
		{
			maior = a;
			menor = c;
			medio = b;

		}
	} else if (b >= a && b >= c)
	{
		if (c >= a)
		{
			maior = b;
			menor = a;
			medio = c;

		} else if (a >= c)
		{
			maior = b;
			menor = c;
			medio = a;

		}
	} else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			maior = c;
			menor = a;
			medio = b;

		} else if (a >= b)
		{
			maior = c;
			menor = b;
			medio = a;

		}
	}

	if (x == 'A')
	{
		printf("%d ", menor);
	} else if (x == 'B')
	{
		printf("%d ", medio);
	} else if (x == 'C')
	{
		printf("%d ", maior);
	}

	if (y == 'A')
	{
		printf("%d ", menor);
	} else if (y == 'B')
	{
		printf("%d ", medio);
	} else if (y == 'C')
	{
		printf("%d ", maior);
	}


	if (z == 'A')
	{
		printf("%d\n", menor);
	} else if (z == 'B')
	{
		printf("%d\n", medio);
	} else if (z == 'C')
	{
		printf("%d\n", maior);
	}

}

/*
18 - Ordem (+++)

Você receberá três valores inteiros e deve descobrir quais deles correspondem às variáveis a, b e c. Os
números não serão dados em ordem exata, mas sabemos que o valor correspondente a a é menor do que
o valor correspondente a b, e que o valor correspondente a b é menor do que o correspondente a c . Será
informada a você a ordem em que os valores associados a cada variável devem ser impressos. Escreva um
programa que imprima os valores na ordem requisitada.
	Entrada
A entrada conterá duas linhas. A primeira, com três números inteiros positivos, separados entre si por
um espaço. Todos os três números são inferiores ou iguais a 100. A segunda linha conterá três letras
maiúsculas A, B e C (sem espaços entre elas) representando a ordem desejada de impressão dos valores das
variáveis.
	Saída
A saída deve conter, numa linha, os inteiros a, b e c na ordem desejada, separados por espaços simples.
Após o último número da saída deve aparecer apenas o caractere de quebra de linha: ‘\n’.
	Observações
Após o último número na primeira linha da entrada, está no buffer de entrada o caractere ‘\n’. Com
isso ao tentar ler o primeiro caractere (A, B, ou C) na segunda linha de entrada com scanf("%d", &x);
será lido o caractere ‘\n’ na variável x , ao invés de uma das letras na entrada (A, B, ou C). Para evitar isso,
você pode fazer com que a leitura do último número na primeira linha consuma o caractere ‘\n’ da primeira
linha, colocando esse caractere na especificação de formato do scanf() . Por exemplo, suponha que você
declarou as seguintes variáveis na entrada: int a, b,c; para armazenar os três número da primeira linha
e char x, y, z; , para armazenar as três letras que aparecem na segunda linha de entrada. A leitura dessas
variáveis de entrada pode ser realizada assim: scanf("%d %d %d\n", &a, &b, &c); scanf(%c%c%c",
&x, &y, &z); Repare o ‘\n’ ao final da formatação do primeiro scanf e repare que não há espaços entre
os "%c"na formatação do segundo scanf . O ‘\n’. ao final da formatação do primeiro scanf() faz com que
o caractere de quebra de linha seja consumido no buffer. Asssim, no segundo scanf() será armazenada na
variável x a primeira letra da segunda linha e não o ‘\n’, resolvendo o problema da leitura.
*/
