//13 - Média de pares e ímpares

#include <stdio.h>
main(){

	int x;
	float impar =0,par =0, contPar, contImpar;
	float mediaPar, mediaImpar;

	do{
		scanf("%d", &x);

		if (x%2 == 0 && x !=0)
		{
			par = par + x;
			contPar++;
		} else if (x%2 != 0)
		{
			impar = impar + x;
			contImpar++;
		}

	} while(x != 0);
	mediaPar = par/contPar;
	mediaImpar = impar/contImpar;
	printf("MEDIA PAR: %.2f\n", truncf(mediaPar*100)/100);
	printf("MEDIA IMPAR: %.2f\n", truncf(mediaImpar*100)/100);

}
/*
13 - Média de pares e ímpares (++)
Faça um programa que leia uma sequência de números inteiros diferente de zero e apresente a média
nos números pares e a média nos números ímpares.
	Entrada
O programa deve ler uma sequência de números inteiros diferentes de zero.
	Saída
O programa deve apresentar duas linhas, a primeira contendo a mensagem: "MEDIA PAR = mp"e a
segunda com a mensagem: "MEDIA IMPAR = mi", onde mp e mi são os valores das médias dos números
pares e ímpares respectivamente, escritos com até duas casas decimais.
*/
