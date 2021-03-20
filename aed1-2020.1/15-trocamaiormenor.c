//20 - Troca Maior e Menor
#include <stdio.h>
int main(){
  int m, n;
  scanf("%d %d", &m, &n);

  int i, j; int mt[m][n];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &mt[i][j]);
    }
  }
  int maior = mt[0][0], imaior = 0, jmaior = 0;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(mt[i][j] > maior){
        maior = mt[i][j];
        imaior = i; jmaior = j;
      }
    }
  }

  int menor = mt[0][0], imenor = 0, jmenor = 0;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(mt[i][j] < menor){
        menor = mt[i][j];
        imenor = i; jmenor = j;
      }
    }
  }

  mt[imenor][jmenor] = maior;
  mt[imaior][jmaior] = menor;

  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      printf("%d ", mt[i][j]);
    }
    puts("");
  }

  return 0;
}

/*
20 - Troca Maior e Menor (++)

Faça um programa que localize o maior e o menor elemento de uma matriz de dimensão MxN com
números inteiros e troque-os de posição. Assuma que só existe uma ocorrência do maior e do menor valor
na matriz e que eles aparecem em coordenadas distintas da matriz.
Entrada
A entrada contem apenas um caso de teste. A primeira linha há dois inteiros M e N, 1 < M, N ≤ 1000,
representando as dimensões da matriz. A seguir haverá M linhas com N inteiros em cada linha, separados
por um espaço em branco cada, representando os elementos da matriz.
Saída
A saída consiste da matriz modificada. Apresente a matriz em M linhas com N valores em cada linha,
separados por um espaço em branco cada. Você pode deixar um espaço em branco após o último elemento
de cada linha da matriz. Após a impressão da segunda linha quebre uma linha.
Exemplo
Entrada
2 2
34 23
56 98
Saída
34 98
56 23
*/
