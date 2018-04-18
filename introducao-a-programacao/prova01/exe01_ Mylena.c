
#include<stdio.h>
#include<math.h>

main(){

	int num, newNum, alg1, alg2, alg3, alg4;
	printf("INFORME UM NUMERO\n");
	scanf("%d", &num);

	alg2 = num/10;
	alg2 = alg2%10;

    alg3 = num;
	alg3 = alg3%10;

    alg1 = num/100;

	alg4 = (alg1 + (alg2 * 3) + (alg3 * 5))% 7;

    newNum = (alg1*1000) + (alg2*100) + (alg3*10) + alg4;

    printf("\nO NOVO NUMERO E = %d\n", newNum);


}

/*
Questão 01 (3,0 pontos) – Dado um número inteiro de três algarismos, construir outro número
inteiro de quatro algarismos de acordo com a seguinte regra: os três primeiros algarismos,
contados da esquerda para a direita são iguais ao número dado. O quarto algarismo é um
digito de controle calculado da seguinte forma: primeiro algarismo + segundo algarismo*3 +
terceiro algarismo*5. O dígito de controle é igual ao resto da divisão dessa soma por 7.
	Entrada
O programa deve ler uma linha de dados contendo apenas um número com três algarismos.
	Saída
O programa deve imprimir uma linha contendo a frase: O NOVO NUMERO E = X, onde X é o
novo número inteiro com quatro algarismos, seguido por um caractere de quebra de linha: ‘\n’.
*/
