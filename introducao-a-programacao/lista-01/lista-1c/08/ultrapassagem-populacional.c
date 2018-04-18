//8 - Ultrapassagem populacional
#include <stdio.h>
main(){

	int A, B, anos = 0;
	scanf("%d %d", &A, &B);


	while(A < B){

		A = A + (A*3)/100;
		B = B + (B*1.5)/100;

		anos++;

	}

	printf("ANOS = %d\n", anos);

}
/*
8 - Ultrapassagem populacional (+)
Supondo que a população de um país A seja de a habitantes com uma taxa anual de crescimento de 3%
e que a população de um país B seja de b habitantes, com uma taxa anual de crescimento de 1,5%, fazer um
algoritmo que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou
iguale a população do país B, mantidas essas taxas de crescimento.
	Entrada
O programa deverá ler duas linhas de entrada, cada uma contendo um número inteiro positivo represen-
tando a população de um país. O valor na primeira linha corresponde ao número de habitantes do país A e
será sempre menor que o valor na segunda linha, o qual corresponde ao número de habitantes do país B.
	Saída
A saída deve conter, numa linha com a frase ANOS = x, onde x é um valor em anos e deve ser seguido
por um caractere de quebra de linha: ‘\n’.
*/
