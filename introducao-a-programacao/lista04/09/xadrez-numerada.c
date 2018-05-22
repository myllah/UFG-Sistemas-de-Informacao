//9 - Matriz xadrez numerada

#include <stdio.h>
int main(){

  int l, c;
  scanf("%d", &l);
  scanf("%d", &c);

  int i, j, k = 1;

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if ((i+j)%2 == 0) {
        printf("0 ");
      } else if ((i+j)%2 != 0) {
        printf("%d ", k);
        k++;
      }
    }
    puts("");
  }

  return 0;
}
/*
9 - Matriz xadrez numerada (++)

Uma matriz xadrez numerada é uma matriz (quadrada ou retangular) composta de números inteiros. O
padrão reticulado inicia em 0 (preto) e é alternado com um número sequencial maior a zero (branco).
  Entrada
Dois números inteiros que representam o número de linhas e colunas da matriz xadrez.
  Saída
Uma matriz xadrez de m linhas e n colunas.
  Exemplo
Entrada
5 5
Saída
0 1 0 2 0
3 0 4 0 5
0 6 0 7 0
8 0 9 0 10
0 11 0 12 0
Entrada
3 6
Saída
0 1 0 2 0 3
4 0 5 0 6 0
0 7 0 8 0 9
*/
