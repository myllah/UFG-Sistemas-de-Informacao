//3 - Diagonal Secundária
#include <stdio.h>
int main() {

  int n;
  scanf("%d", &n);
  while (n < 1 || n > 1000) {
      scanf("%d", &n);
  }

  int m[n][n], i, k;

  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      scanf("%d", &m[i][k]);
    }
  }

  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      if (i + k == n-1) {
        printf("%d\n", m[i][k]);
      }
    }
  }
  return 0;
}

/*
3 - Diagonal Secundária (+)

Crie um programa que receba uma matriz quadrada e imprima os elementos de sua diagonal secundária.
  Entrada
Na primeira linha ha um inteiro n, 1<n≤1000, representando a ordem da matriz quadrada. A seguir
haverá N linhas com N inteiros em cada linha separados por um espaço em branco cada, representando os
elementos da matriz quadrada.
  Saída
A saída consiste de n linhas com um inteiro em cada linha. Na primeira linha haverá o elemento da
diagonal secundária da primeira linha da matriz, na segunda linha haverá o elemento da diagonal
secundária da segunda linha da matriz e assim por diante até o n-ésino elemento da diagonal
secundária da n-ésima linha da matriz. Após o último elemento impresso quebre uma linha.
  Exemplo
Entrada
3
1 2 3
4 5 6
7 8 9
Saída
3
5
7
Entrada
5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
Saída
0
0
1
0
0
Entrada
20 59 18 45 66
59 34 96 26 30
24 41 0 63 94
32 63 0 50 55
76 49 50 66 45
Saída
66
26
0
63
76
*/
