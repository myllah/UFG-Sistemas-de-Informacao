#include <stdio.h>
int main(){
	
	int n; int aux, i, j;
	scanf("%d", &n);
	
	int vetor[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}

	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(vetor[i] > vetor [j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}

	for(i=0; i<n; i++){
		printf("%d\n", vetor[i]);
	}

return 0;	
}

/*Ordena Lista (++)

Faça um programa para imprimir uma lista de inteiros em ordem crescente.

Entrada
A entrada contém apenas um caso de teste. Na primeira linha há um inteiro N, 1 < N ≤ 1000, represen-
tando a quantidade de inteiros que serão informados. Em seguida haverá N linhas com um inteiro em cada
linha.

Saída
Seu programa gera N linhas de saída, contendo em cada linha um inteiro que são os mesmos informados
na entrada, porém em ordem crescente. Após o último número impresso, quebre uma linha.

Exemplo
Entrada
5
7
1
3
4
5
Saída
1
3
4
5
7
Entrada
2
4
3
Saída
3
4
 * */
