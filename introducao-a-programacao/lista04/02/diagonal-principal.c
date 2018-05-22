//2 - Diagonal Principal
#include <stdio.h>
int main(){

  int n, i, k;

  scanf("%d", &n);
  while (n <=1 ||n > 1000) {
    scanf("%d", &n);
  }

  int m[n][n];

  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      scanf("%d", &m[i][k]);
    }
  }
    // diagonal principal
  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      if (m[i] == m[k]) {
        printf("%d\n", m[i][k]);
      }
    }
  }

return 0;
}
/*
2 - Diagonal Principal (+)

Faça um programa que receba uma matriz quadrada e imprima os elementos de sua diagonal principal.
  Entrada
A entrada contem apenas em caso de teste. A primeira linha ha um inteiro N, 1 < N ≤ 1000, representando
a dimensão das matrizes. A seguir haverá N linhas com N inteiros em cada linha separados por um
espaço em branco cada, representando os elementos da matriz A.
  Saída
A saída consiste de N linhas com um inteiro em cada linha. Na primeira linha haverá o elemento da
diagonal principal da primeira linha da matriz, na segunda linha haverá o elemento da diagonal principal da
segunda linha da matriz e assim por diante até o n-ésino elemento da diagonal principal da n-ésima linha da
matriz. Após o último elemento impresso quebre uma linha.
  Exemplo
Entrada
3
1 2 3
4 5 6
7 8 9
Saída
1
5
9
Entrada
2
34 23
56 98
Saída
34
98
*/
