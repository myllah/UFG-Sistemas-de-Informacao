//26 - Número perfeito
#include <stdio.h>
main(){

	int i = 1, n = 0;
	int soma = 0, cont = 1;
	scanf("%d", &n);

    printf("%d = ", n);

	while(i < n){

        cont = i;

		if (n%i == 0)
		{
            if(i != 1){
                printf(" + ");
            }
			printf("%d", cont);
			soma = soma + cont;

		}
		i++;
	}
	printf(" = %d ", soma);

	if (soma == n)
	{
		printf("(NUMERO PERFEITO)\n");
	} else{
		printf("(NUMERO NAO E PERFEITO)\n");
	}

}
/*
26 - Número perfeito (+++)
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa que leia um número inteiro n, apresenta a soma dos
divisores de n e verifica se o número informado é perfeito ou não.
Entrada
O programa deve ler um número inteiro n.
Saída
O programa deve apresentar uma linha contendo o texto: "n = d1 + d2 + d3 + ... + dk = x (MENSA-
GEM)", onde n é o número lido, d i são os divisores de n em ordem crescente, x é a soma dos divisores e
MENSAGEM é a mensagem "NUMERO PERFEITO"ou "NUMERO NAO E PERFEITO".
Observações
Suponha que o usuário sempre fornecerá um número maior que 1.
*/
