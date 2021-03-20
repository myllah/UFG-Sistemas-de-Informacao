//6 - Soma Elementos do Vetor
#include <stdio.h>
main(){

	int n, i = 0, soma = 0;

	scanf("%d", &n);

	if (n > 5000)
	{
		return 0;
	}
		int k[n];
		while(i < n){

			scanf("%d", &k[i]);

        i++;
		}

		i = 0;
		while(i < n){

			soma = soma + k[i];
        i++;
		}

	printf("%d\n", soma);
}

/*
6 - Soma Elementos do Vetor (+)

Elabore um programa que armazene n valores em um vetor, e depois imprima a soma de todos os
elementos inseridos.
	Entrada
A entrada contém duas linhas. A primeira, contém um valor inteiro n < 5000 que corresponde ao
número de elementos que aparecem na segunda linha. A segunda linha contém n valores inteiros, separados
entre si por um espaço.
	Saída
A saída é formada por uma linha contendo um valor inteiro correspondente à soma dos n elementos no
vetor.
*/
