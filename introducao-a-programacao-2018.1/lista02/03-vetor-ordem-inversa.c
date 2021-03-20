//3 - Imprimir Um Vetor na Ordem Inversa

#include <stdio.h>

main(){

	int n, m, i = 1, j;

    scanf("%d", &n);

    int a[n], b[n];

    if(n >= 1 && n <= 5000){
        while(i <= n){
            scanf("%d", &a[i]);
            i++;
        }
    }

    j = n;

    for (i = 1; i <= n; i++)
    {
        b[i] = a[j];
        j--;
    }

 	for (i = 1; i <= n; i++)
 	{
        printf("%d ",b[i]);
    }
}

/*
3 - Imprimir Um Vetor na Ordem Inversa (+)
Escreva um programa em C para armazenar n valores inteiros em um vetor, e depois imprimi-los na
ordem inversa a qual foram lidos.
    Entrada
A entrada contém duas linhas. A primeira, contém um valor inteiro n < 5000 que corresponde ao
número de elementos que aparecem na segunda linha. A segunda linha contém n valores inteiros, separados
entre si por um espaço.
    Saída
A saída é formada por uma linha contendo os n na ordem inversa da qual foram lidos.
*/