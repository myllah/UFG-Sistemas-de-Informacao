//8 - Conversão de Decimal para Binário
#include <stdio.h>
main(){

	int d = 1, i = 0, b[32], j;

	scanf("%d", &d);

	if(d == 0){
        b[i] = 0;
        printf("%d", b[i] );
    }

    while(d > 0){

		b[i] = d%2;
	    i++;
	    d = d/2;
    }

    for(j=i-1; j>=0; j--){
    	printf("%d", b[j] );
    }
}

/*
8 - Conversão de Decimal para Binário (++)

Escreva um programa que leia vários números inteiros positivos na base decimal e escreva os valores
correspondentes desses números na base binária.
	Entrada
A entrada contém várias linhas, cada uma contendo um valor inteiro N na base decimal tal que seu
número binário equivalente possui no máximo 32 bits. A saída termina por fim de arquivo.
	Saída
A saída é formada por tantas linhas quantas forem as linhas na entrada. Cada linha contém a conversão
para a base binária do valor em decimal que aparece na linha correspondente da entrada.
*/
