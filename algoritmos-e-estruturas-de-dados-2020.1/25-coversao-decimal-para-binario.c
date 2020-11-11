#include <stdio.h>

void conversor(int n){
	if (n > 0) {
		    conversor(n/2);
            printf("%d", n%2);
        }
}

int main(){
int i;

int k;
scanf("%d", &k);

for(i = 0; i < k; i++){
	int n; scanf("%d", &n);
	conversor(n);
	printf("\n");
}

return(0);
}

/*Conversão de decimal para binário (++)
Escreva um programa, em C, que receba um número natural n ∈ N, representado utilizando a notação
decimal, e o converta para sua notação binária. O programa deve utilizar uma “função recursiva” para
realizar a conversão.

Entrada
A primeira linha conterá um número natural estritamente positivo k, 1 ≤ k ≤ 1000, que representa o
número de casos de teste que virão em seguida.
Cada uma das k linhas seguintes possuem, cada uma, um único número natural, 0 ≤ n i < 10 6 , com 1 ≤ i ≤ k,
representado utilizando a notação decimal, a ser convertido para sua correspondente representação binária.

Saída
Seu programa deve imprimir k linhas, cada uma com a correspondente representação binária de um
número da entrada.

Exemplos
Entrada
5
1
2
3
4
5
Saida
10
11
100
101

Entrada
3
321
753
255
Saída
101000001
1011110001
11111111

Entrada
1
373728
Saída
1011011001111100000
*/
