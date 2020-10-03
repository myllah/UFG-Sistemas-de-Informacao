#include <stdio.h>

int main(){
	
	int n, i, j;
	scanf("%d", &n);
	
	int vetorV[n], vetorW[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &vetorV[i]);	
	}

	int maiorV, menorW;
	
	i=0, j=n-1;
	while(i<n && j>=0){

		vetorW[i] = vetorV[j];
		if(i == 0){
			maiorV = vetorV[i];
			menorW = vetorW[i];
		}
		if(maiorV < vetorV[i]){
			maiorV = vetorV[i];
		}
		if(menorW > vetorW[i]){
			menorW = vetorW[i];
		}
		i++;
		j--;
	}
	
	for(i=0; i<n; i++){
		if(i == n-1){
			printf("%d", vetorV[i]);
		}else{
			printf("%d ", vetorV[i]);
		}
	}
	printf("\n");
	for(i=0; i<n; i++){
		if(i == n-1){
			printf("%d", vetorW[i]);	
		}else{
			printf("%d ", vetorW[i]);	
		}	
	}
	printf("\n");
	printf("%d\n", maiorV);
	printf("%d\n", menorW);
	
return 0;
	}

/* 1 - Inverte Vetor (++)
Faça um programa que receba um vetor V de N inteiros e construa um vetor W com os mesmos ele-
mentos de V, porém invertidos, mostre os vetores V e W e o maior elemento de V e o menor elemento de
W.
Entrada
A entrada contém apenas um caso de teste com 2 linhas. Na primeira linha há um inteiro N, 1 < N ≤
1000, representando o tamanho do vetor V. Na segunda linha há N valores inteiros separados por um espaço
em branco cada, que são os valores do vetor V.
Saída
O programa deve gerar 4 linhas de saída. A primeira linha deve haver N inteiros separados por um
espaço em branco cada, representando os elementos do vetor V. Atenção, após o último elemento de V
não deve haver um espaço em branco. A segunda linha deve haver N inteiros separados por um espaço em
branco cada, representando os elementos do vetor W. Atenção, após o último elemento de V não deve haver
um espaço em branco. A terceira linha deve haver apenas um inteiro, representando o maior elemento de
V. A quarta linha deve haver apenas um inteiro, representando o menor elemento de W. Após imprimir a
quarta linha da saída, quebre uma linha.
Exemplo
Entrada
5
7 8 4 9 2
Saída
7 8 4 9 2
2 9 4 8 7
9
2
Entrada
8
235 6 23 5 78 123 89 4
Saída
235 6 23 5 78 123 89 4
4 89 123 78 5 23 6 235
235
4
Entrada
10
1 2 3 4 5 6 7 8 9 0
Saída
1 2 3 4 5 6 7 8 9 0
0 9 8 7 6 5 4 3 2 1
9
0
*/
