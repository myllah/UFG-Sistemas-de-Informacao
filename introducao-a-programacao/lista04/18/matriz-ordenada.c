//18 - Matriz Ordenada
#include <stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int m[n][n], i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &m[i][j]);
    }
  }
  int aux, k;
  for(k = 0; k < n; k++){
    for(i = 0; i < n; i++){
      for(j = 0; j < n-1; j++){
        if(m[j][i] > m[j+1][i]){
          aux = m[j][i];
          m[j][i] = m[j+1][i];
          m[j+1][i] = aux;
        }
      }
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d ", m[i][j]);
    }
    puts("");
  }
  return 0;
}

/*
18 - Matriz Ordenada (+++)

Faça um programa que, dada uma matriz A de dimensões N x N, ordene de forma crescente as colunas
da matriz.
Entrada
A entrada contém apenas um caso de teste. A primeira linha ha um inteiro N, 1 < N ≤ 1000, representando
a dimensão das matrizes. A seguir haverão N linhas com N inteiros em cada linha separados por um
espaço em branco cada, representando os elementos da matriz A.
Saída
A saída consiste de N linhas com N inteiros em cada linha separados por um espaço em branco cada,
representando a matriz A após o processo de ordenação de suas colunas. Após a última linha da matriz
quebre uma linha.
Exemplo
Entrada
3
1 2 11
5 10 6
7 8 9
Saída
1 2 6
5 8 9
7 10 11
Entrada
2
34 23
56 8
Saída
34 8
56 23
*/
