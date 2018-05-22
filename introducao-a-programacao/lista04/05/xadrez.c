//5 - Matriz xadrez
#include <stdio.h>
int main(){

  int l, c;
  scanf("%d", &l);
  while (l < 1) {
    scanf("%d", &l);
  }

  scanf("%d", &c);
  while (c < 1) {
    scanf("%d", &c);
  }

  int i, k;
  for (i = 0; i < l; i++) {
    for (k = 0; k < c; k++) {
      if ((i + k )%2 == 0) {
        printf("1");
      } else if ((i + k )%2 == 1) {
        printf("0");
      }
    }
    puts("");
  }

  return 0;
}

/*
5 - Matriz xadrez (+)

Uma matriz xadrez é uma matriz (quadrada ou retangular) composta de 0s e 1s.
O padrão reticulado inicia em 1 (branco) e é alternado com 0 (preto).
  Entrada
Dois números inteiros que representam o número de linhas e colunas da matriz xadrez.
  Saída
Uma matriz xadrez de m linhas e n colunas.
  Exemplo
Entrada
1 1
Saída
1
Entrada
3 4
Saída
1010
0101
1010
*/
