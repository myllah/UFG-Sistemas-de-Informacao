//10 - Gerador de tabuada
#include <stdio.h>
main(){

	int cont = 1;
	float n, i , k , s;

	scanf("%f %f %f %f", &n, &i, &k, &s);

	float iso=i, isu=i, imu=i, idi=i;

	printf("Tabuada de soma:\n");
		while(cont <= k){

			printf("%.2f + %.2f = %.2f\n",n, iso, n+iso);

			iso = iso + s;
			cont++;
		}
	cont = 1;
	printf("Tabuada de subtracao:\n");

		while(cont <= k){

			printf("%.2f - %.2f = %.2f\n",n, isu, n-isu);

			isu = isu + s;
			cont++;
		}
	cont = 1;
	printf("Tabuada de multiplicacao:\n");

		while(cont <= k){

			printf("%.2f x %.2f = %.2f\n",n, imu, n*imu);

			imu = imu + s;
			cont++;
		}
	cont = 1;
	printf("Tabuada de divisao:\n");

		while(cont <= k){

			printf("%.2f / %.2f = %.2f\n",n, idi, n/idi);

			idi = idi + s;
			cont++;
		}
}
/*
10 - Gerador de tabuada (++)
Escreva um programa em linguagem C que leia um número qualquer n de 0 a 9 e imprima na tela
a tabuada de soma, subração, multiplicação e divisão desse número para o K valores, iniciando em i em
incrementos de s.
	Entrada
O programa deve ler quatro números quaisquer n, i, K e s.
	Saída
O programa deve apresentar, em sequência, a tabuada de soma, subtração, multiplicação e divisão,
com o texto: "Tabuada de soma:", "Tabuada de subtracao:", "Tabuada de multiplicacao:"e "Tabuada de
divisao:"antes de cada tabuada. Cada linha da tabuada segue o formado: "n op B = R", onde n é o número
lido, B é o segundo termo da tabuada, op é o operador da tabuada e R o resultado da operação. Os números
devem ser apresentados com 2 casas decimais.
*/
