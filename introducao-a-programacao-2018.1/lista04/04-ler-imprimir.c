//4 - Ler e imprimir (+)
#include <stdio.h>
int main() {

  int l, c;
  scanf("%d", &l);
  while (l < 1 || l > 10) {
    scanf("%d", &l);
  }

  scanf("%d", &c);
  while (c < 1 || c > 10) {
    scanf("%d", &c);
  }

  int m[l][c], i, k;

  for (i = 0; i < l; i++) {
    for (k = 0; k < c; k++) {
      scanf("%d", &m[i][k]);
    }
  }

  for (i = 0; i < l; i++) {
    printf("linha %d: ", i+1);
    for (k = 0; k < c; k++) {
      if (k == 0 && k == c-1) {
        printf("%d\n", m[i][k]);
      }  else if (k == c-1) {
        printf("%d\n", m[i][k]);
      } else if (k == 0) {
          printf("%d,", m[i][k]);
      } else{
        printf("%d,", m[i][k]);
      }

    }
  }
  return 0;
}

/*
4 - Ler e imprimir (+)

Escreva um programa em C que armazene elementos inseridos pelo usuário em uma matriz A de dimensão
máxima 10x10, e em seguida os imprima na forma matricial. O programa deve ler dois números
inteiros válidos referentes às quantidades de linhas e colunas da matriz.
  Entrada
Uma sequência de números inteiros com dois números válidos, m-linhas e n-colunas, para a definição
da dimensão da matriz. Em seguida o programa deve ler m×n números inteiros.
  Saída
A saída deve conter m linhas, cada linha iniciando com o texto "linha i:", onde i é o número da linha, e
uma sequência de n elementos, separados por ’,’, correspondendo aos elementos (i, j), onde j = 0,1,...,n−
1.
  Exemplo
Entrada
0
5
11
2
1 2 3 4 5 6 7 8 9 10
Saída
linha 1: 1,2
linha 2: 3,4
linha 3: 5,6
linha 4: 7,8
linha 5: 9,10
*/
