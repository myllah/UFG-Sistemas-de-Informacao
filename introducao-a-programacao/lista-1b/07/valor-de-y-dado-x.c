//7 - Valor de y dado x
#include <stdio.h>
#include <math.h>
main(){
	int x, y;
	scanf("%d", &x);

	if (x < 1)
	{
		y = x;
	} else if (x == 1)
	{
		y = 0;
	} else if (x > 1)
	{
		y = pow(x,2);
	}

	printf("Y = %d\n", y);

}
/*
7 - Valor de y dado x (+)
Desenvolver um algoritmo para ler um número x, calcular e imprimir o valor de y de acordo com as
condições abaixo:

y =			{x, se x < 1;

			0, se x = 1;

			x², se x > 1;}
Entrada
O programa deve ler uma linha contendo um único número inteiro correspondendo ao valor de x.
Saída
O programa deve imprimir Y = y, onde y é o valor computado de y dado x. Após o valor de y, o programa
deve imprimir um caractere de quebra de linha: ‘\n’.
*/
