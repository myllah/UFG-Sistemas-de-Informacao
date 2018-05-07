//12 - Ordena Lista

#include <stdio.h>
main(){

int l = 0, n, j, i;

scanf("%d", &n);

int vetor[n];

  while (l < n) {
    scanf("%d", &vetor[l]);
  l++;
  }

  for (j = 0; j < n; j++){
    for (i = 0; i < n-1; i++){
      if (vetor[i] > vetor[i+1]){
         int temp = vetor[i];
         vetor[i] = vetor[i+1];
         vetor[i+1] = temp;

      }
    }
  }
l = 0;
  while (l < n) {
    printf("%d\n", vetor[l]);
  l++;
  }
}

/*
12 - Ordena Lista (++)

Faça um programa para imprimir uma lista de inteiros em ordem crescente.
  Entrada
A entrada contém apenas um caso de teste. Na primeira linha há um inteiro N, 1 < N ≤ 1000, represen-
tando a quantidade de inteiros que serão informados. Em seguida haverá N linhas com um inteiro em cada
linha.
  Saída
Seu programa gera N linhas de saída, contendo em cada linha um inteiro que são os mesmos informados
na entrada, porém em ordem crescente. Após o último número impresso, quebre uma linha.
*/
