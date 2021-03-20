#include <stdio.h>

int main(){
	int i;
	
	int n; scanf("%d", &n);
	
	float pontos[n][3];
	for(i = 0; i < n; i++){
		scanf("%f", &pontos[i][0]);
		scanf("%f", &pontos[i][1]);
		scanf("%f", &pontos[i][2]);
	}

	for(i = 0; i < n-1; i++){
		float maior = pontos[i+1][0] - pontos[i][0];
		
		float x = pontos[i+1][0] - pontos[i][0];
		float y = pontos[i+1][1] - pontos[i][1];
		float z = pontos[i+1][2] - pontos[i][2];
		
		if(x < 0){
			x = x * (-1);	
		}
		if(y < 0){
			y = y * (-1);
		}
		if(z < 0){
			z = z * (-1);
		}
		
		if(maior < x){
			maior = x;
		}
		if(maior < y){
			maior = y;
		}
		if(maior < z){
			maior = z;
		}
		
		printf("%.2f\n", maior);
	}	
}

/** Máxima Coordenada (+++)

Faça um programa que leia vários pares de pontos, calcule o vetor definido entre eles e imprima a
coordenada do vetor que possui o maior valor absoluto (módulo). Considere que o vetor que liga dois
pontos A (x1,y1,z1) e B (x2,y2,z2) é calculada como: BA = (x2 − x1, y2 − y1, z2 − z1)

Entrada
A entrada consiste de várias linhas. A primeira linha apresenta um número de pontos N, com 2 ≤ N ≤
1000. As N linhas seguintes apresentam pontos no espaço na forma x y z, com x, y e z números reais tais
que -1000 ≤ x, y, z ≤ 1000. Faça um programa que calcule o vetor que liga dois pontos consecutivos nesta
lista e imprima a coordenada de maior valor absoluto. Note que, com exceção do primeiro e último valor
de entrada, todos os pontos serão utilizados duas vezes, uma para o cálculo do vetor com o ponto que veio
antes na lista e outra para o ponto que veio depois.

Saída
A saída consiste de (N-1) linhas, cada uma contendo o módulo do valor da coordenada de maior valor
absoluto, com 2 casas decimais após a vírgula. Após a impressão do último valor, quebre uma linha.

Exemplo
Entrada
2
4 1 0
-1 2 1
Saída
5.00
Entrada
4
1 1 5
2 -1 3
4 2 -1
-3 4 2
Saída
2.00
4.00
7.00
Entrada
4
15.89 0.7 0.53
0.45 0.38 0.22
0 0 0
0 0 1
Saída
15.44
0.45
1.00
1
**/
