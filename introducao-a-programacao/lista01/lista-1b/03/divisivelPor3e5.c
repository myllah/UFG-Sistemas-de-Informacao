//3-Divisível por 3 e 5
#include <stdio.h>
#include <math.h>

main(){
	int num;
	//printf("Digite um numero\n");
	scanf("%d", &num);

	if (num%3 == 0 && num%5 == 0)
	{
		printf("O NUMERO E DIVISIVEL\n");
	} else{
		printf("O NUMERO NAO E DIVISIVEL\n");
	}
}
/*
3- Divisível por 3 e 5 (+)
Desenvolver um programa que leia um número inteiro e verifique se o número é divisível por três e
também é divisível por cinco.
	Entrada
O programa deve ler uma linha contendo um número inteiro na entrada.
	Saída
O programa deve imprimir uma linha contendo a frase: O NUMERO E DIVISIVEL, se ele for divisível
tanto por três quanto por cinco, ou a frase O NUMERO NAO E DIVISIVEL, em caso contrário. Após
imprimir uma das frases, o programa deve imprimir um caractere de quebra de linha: ‘\n’.
*/