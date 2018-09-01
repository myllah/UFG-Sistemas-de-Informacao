//6 - Quadrado de matriz

#include <stdio.h>
#define TM 2
int main(){

  int i, k;
  double m[TM][TM];

  for (i = 0; i < TM; i++) {
    for (k = 0; k < TM; k++) {
      scanf("%lf", &m[i][k]);
    }
  }

  double a[TM][TM];
  int linha, coluna, soma;

 for (linha = 0; linha < TM; linha++) {
   for (coluna = 0; coluna < TM; coluna++) {
     soma = 0;
      for (i = 0; i < TM; i++) {
          soma = soma + m[linha][i] * m[i][coluna];
      }
        a[linha][coluna] = soma;
    }
 }

  for (i = 0; i < TM; i++) {
    for (k = 0; k < TM; k++) {
      printf("%.3lf ", a[i][k]);
    }
    puts("");
  }

  return 0;
}

/*
6 - Quadrado de matriz 2x2 (++)

Faça um programa que leia uma matriz 2×2 e imprima o seu quadrado. O quadrado de uma matriz A
é dado pela operação: A² = AA.
  Entrada
O programa deve ler 4 números reais.
  Saída
O programa deve imprimir a matriz resultante com precisão de 3 casas decimais.
Observação
Utilize apenas o tipo double para variáveis de ponto flutuante.
  Exemplo
Entrada
1 0
0 1
Saída
1.000 0.000
0.000 1.000
Entrada
5 8
7 1
Saída
81.000 48.000
42.000 57.000
*/
