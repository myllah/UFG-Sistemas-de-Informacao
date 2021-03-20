//17 - Número palíndromo

#include<stdio.h>
#include<math.h>

main(){

    int num, newNum, alg1, alg2, alg3, alg4, alg5;

    //printf("INFORME UM NUMERO\n");
    scanf("%d", &num);

    if (num > 99999){
        printf("NUMERO INVALIDO\n");
        return 0;
    }

	if (num > 0 && num < 100) {

    	alg2 = (num)%10;
        alg1 = (num/10);

        newNum = (alg2*10) + alg1;

	} else if (num >= 100 && num < 1000) {

        alg2 = (num/10)%10;
        alg3 = (num)%10;
        alg1 = (num/100);

        newNum = (alg3*100) + (alg2*10) + alg1;

    } else if (num >= 1000 && num < 10000) {

        alg2 = (num/100)%10;
        alg3 = (num/10)%10;
        alg4 = (num)%10;
        alg1 = (num/1000);

        newNum = (alg4*1000) + (alg3*100) + (alg2*10) + alg1;

    } else if (num >= 10000 && num < 100000) {

        alg2 = (num/1000)%10;
        alg3 = (num/100)%10;
        alg4 = (num/10)%10;
        alg5 = (num)%10;
        alg1 = (num/10000);

        newNum = (alg5*10000) + (alg4*1000) + (alg3*100) + (alg2*10) + alg1;

    }

    if (num == newNum){
        printf("PALINDROMO\n");
    } else if (num != newNum){
        printf("NAO PALINDROMO\n");
    }
}

/*
17 - Número palíndromo (+++)
Faça um programa que leia um número e verifique se ele é palíndromo. Um número é palíndromo
quando representa a mesma quantidade lido da esquerda para a direita e da direita para a esquerda. Neste
exercício o usuário irá informar números inteiros de no máximo 5 dígitos.
	Entrada
Um número inteiro.
	Saída
Se o número fornecido exceder 5 dígitos o programa deve imprimir a mensagem "NUMERO INVA-
LIDO". Caso o número seja válido o programa deve imprimir a mensagem "PALINDROMO", caso o
número seja palíndromo, ou "NAO PALINDROMO"caso contrário.
*/
