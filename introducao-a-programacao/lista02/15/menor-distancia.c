//15 - Menor Distancia
#include <stdio.h>
int main(){
  int t, n, j, i, l;
  scanf("%d", &t);

  while (t < 1 || t > 10) {
    scanf("%d", &t);
  }
  i = 0;
  do {
    scanf("%d", &n);

    while (n < 2 || n > 1000) {
      scanf("%d", &n);
    }

    int v[n];
    j = 0;
    while (j < n) {
      scanf("%d", &v[j] );
      while (v[j] < -1000 || v[j] > 1000) {
        scanf("%d", &v[j]);
      }
      j++;
    }
    int menor, m;

    menor = v[0] - v[1];
     if (menor < 0) {
        menor = menor * (-1);
    }

    for (j = 0; j < n; j++) {
      for (l = j+1; l < n; l++) {
          m = v[j] - v[l];
          if (m < 0) {
              m = m * (-1);
          }
        if (m <= menor) {
          menor = m;
        }
      }
    }
if (menor >= 0) {
    printf("%d ", menor);
} else if (menor < 0) {
    printf("%d ", menor*(-1));
}

  printf("%d\n", n*n);

  i++;
  } while(i < t);

  return 0;
}
/*
15 - Menor Distancia (++)

Calcular a distância entre os dois elementos mais próximos em uma sequência de N números inteiros.
  Entrada
Na primeira linha há um inteiro T, 1 ≤ T ≤ 10, representando a quantidade de testes a serem realizados.
Para cada teste são esperados: (a) um número inteiro N, 2 ≤ N ≤ 1000, que é o tamanho do vetor, e (b)
uma sequência de N números inteiros que são os elementos do vetor. No vetor cada elemento deve estar no
intervalo [-1000 , 1000].
  Saída
O programa apresenta, para cada teste, o distância entre os dois elementos mais próximos e o número
de comparações realizadas para resolver o problema. Observe que o número de comparações requeridas
para resolver o problema para um vetor de tamanho N é N 2 .
*/
