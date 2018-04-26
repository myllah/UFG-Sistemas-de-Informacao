//4 - Ler e Imprimir
#include <stdio.h>
main(){

	int n, i = 1;

    scanf("%d", &n);

    int a[n];

    if(n >= 1 && n <= 5000){
        while(i <= n){
            scanf("%d", &a[i]);
            i++;
        }
    }

    for (i = 1; i <= n; ++i)
    {
    	printf("%d ", a[i]);
    }

}
/*
4 - Ler e Imprimir (+)

Escreva um programa em C para ler n elementos inteiros em um vetor, e depois imprimi-los.
	Entrada
A entrada contém duas linhas. A primeira, contém um valor inteiro n < 5000 que corresponde ao
número de elementos que aparecem na segunda linha. A segunda linha contém n valores inteiros, separados
entre si por um espaço.
	Saída
A saída é formada por uma linha contendo os n valores lidos.
*/
