//1 - Determinante 2x2
#include <stdio.h>
#define TM 2
int main(){

  int i, k, m[TM][TM];
  int dp = 1, ds = 1;
  float dtm = 0;

  for (i = 0; i < TM; i++) {
    for (k = 0; k < TM; k++) {
      scanf("%d", &m[i][k]);
    }
  }
    // diagonal principal
  for (i = 0; i < TM; i++) {
    for (k = 0; k < TM; k++) {
      if (m[i] == m[k]) {
        dp = dp * m[i][k];
      }
    }
  }
    // diagonal secundária
  for (i = 0; i < TM; i++) {
    for (k = 0; k < TM; k++) {
      if(i + k == TM-1){
          ds = ds * m[i][k];
      }
    }
  }

  dtm = dp - ds;
  printf("%.2f\n", dtm);
return 0;
}

/*
1 - Determinante 2x2 (+)
Escreva um programa em C que leia uma matriz de dimensão 2×2 e
calcule o seu determinante. Seja a
matriz A =  a b  o determinante de A é |A| = ad − bc.
            c d
  Entrada
Uma sequência de 4 números reais.
  Saída
A saída deve conter 1 linha, contendo o determinante da matriz com 2 casas decimais.
  Exemplo
Entrada
0 5
11 2
Saída
-55
*/
