//9 - Fatorial (++)
#include <stdio.h>
main(){

	int i = 1;
	double n = 1;
	double cont;
	double f = 1;

	scanf("%lf", &n);

	i = 1;
    f = n;

    if (n == 0)
	{
		printf("0! = 1\n");
		return 0;
	}

	while(i <n){
		cont = i;

		f = f * (n-cont);
		cont++;
		i++;
	}

	printf("%.0lf! = %.0lf\n", n, f);
}
/*
9 - Fatorial (++)
Dado um número inteiro n, calcule seu fatorial n!. O fatorial de um número é dado pela equação:
n! = n(n − 1)(n − 2) . . . 1. Por definição, 0! = 1.
	Entrada
O programa deve ler um número inteiro n.
	Saída
O programa deve apresentar uma linha com a mensagem: "n! = f", onde n é o número lido e f o seu
fatorial.
	Observações
O fatorial de um número é resultado de uma operação de produtório que pode levar a valores incrivel-
mente grandes. Lembre-se de usar tipos de dados apropriados ao problema proposto.
*/
