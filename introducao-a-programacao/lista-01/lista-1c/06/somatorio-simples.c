//6 - Somatório simples (+)
#include <stdio.h>
main(){

	int num, i = 1;
	double s = 0 , is;
	scanf("%d", &num);

	if (num <= 1)
	{
		printf("Numero invalido!\n");
		return 0;
	}

	while(i <= num){
		is = i;
		s = s + (1/is);

		i++;
	}

	printf("%.6lf\n", trunc(s*1000000)/1000000);
}
/*
6 - Somatório simples (+)
Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
	n
S = ∑ = 1/k = 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n
	k=1
		Entrada
O programa deve ler um número inteiro positivo e maior que 1.
		Saída
O programa deve apresentar uma linha contendo o valor final do somatório com 6 casas decimais. Caso
o número lido não atenda as especificações da entrada, o programa deve apresentar a mensagem: "Numero
invalido!".
		Observações
Use precisão dupla para o cálculo de S. para isso use a função trunc() e não truncf()
*/
