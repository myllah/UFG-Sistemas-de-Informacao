//13 - Soma dos 3 menores

#include <stdio.h>
main(){

	int i = 1, a, b, c, d, soma;

	//printf("Digite os numeros: ");
	scanf("%d", &a );
	scanf("%d", &b );
	scanf("%d", &c );
	scanf("%d", &d );

	if (a >= b && a >= c && a >= d)
	{
		if (b >= c && c >=d)
		{
			soma  = d + b + c;
		}else if (b >= d && d >=c)
		{
			soma  = c + b + d;
		}else if (c >= b && b >=d)
		{
			soma  = d + b + c;
		}else if (c >= d && d >=b)
		{
			soma  = b + d + c;
		}else if (d >= b && b >=c)
		{
			soma  = c + b + d;
		}else if (d >= c && c >=b)
		{
			soma  = b + d + c;
		}
	}else if (b >= a && b >= c && b >= d)
	{
		if (a >= c && c >=d)
		{
			soma  = a + d + c;
		}else if (a >= d && d >=c)
		{
			soma  = a + c + d;
		}else if (c >= a && a >=d)
		{
			soma  = a + d + c;
		}else if (c >= d && d >=a)
		{
			soma  = a + d + c;
		}else if (d >= a && a >=c)
		{
			soma  = a + c + d;
		}else if (d >= c && c >=a)
		{
			soma  = a + d + c;
		}
	}else if (c >= a && c >= b && c >= d)
	{
		if (a >= b && b >=d)
		{
			soma  = a + b + d;
		}else if (a >= d && d >=b)
		{
			soma  = a + b + d;
		}else if (b >= a && a >=d)
		{
			soma  = a + b + d;
		}else if (b >= d && d >=a)
		{
			soma  = b + d + a;
		}else if (d >= a && a >=b)
		{
			soma  = a + b + d;
		}else if (d >= b && b >=a)
		{
			soma  = b + d + a;
		}
	}else if (d >= a && d >= b && d >= c)
	{
		if (a >= b && b >=c)
		{
			soma  = a + b + c;
		}else if (a >= c && c >=b)
		{
			soma  = a + c + b;
		}else if (b >= a && a >=c)
		{
			soma  = a + b + c;
		}else if (b >= c && c >=a)
		{
			soma  = b + a + c;
		}else if (c >= a && a >=b)
		{
			soma  = a + c + b;
		}else if (c >= b && b >=a)
		{
			soma  = b + a + c;
		}
	}
	printf("%d\n", soma);
}

/*
13 - Soma dos 3 menores (++)
Fazer um programa para quatro valores inteiros e imprimir a soma dos três menores.
Entrada
O programa deve ler quatros valores inteiros na entrada. Cada valor ocupa uma linha na entrada.
Saída
O programa deve imprimir uma linha contendo o valor da soma dos três menores números. Após o valor
da soma, o programa deve imprimir um caractere de quebra de linha: ‘\n’.
*/