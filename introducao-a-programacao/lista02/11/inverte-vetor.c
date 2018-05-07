//11 - Inverte Vetor
#include <stdio.h>
main(){

int n, i, ic;

scanf("%d", &n);

int v[n], w[n];

i = 0;
while (i < n) {
  scanf("%d", &v[i]);
  i++;
}

i = 0;
ic = n-1;
while (i < n) {
  w[i] = v[ic];
  i++; ic--;
}

int proximo, anterior, maior;
anterior = v[0];
maior = v[0];
i = 1;
while (i < n) {
  proximo = v[i];
  if (proximo > maior) {
    maior = proximo;
  }
  anterior = proximo;

i++;
}

anterior = w[0];
int menor = w[0];
i = 1;
while (i < n) {
  proximo = w[i];
  if (proximo < menor) {
    menor = proximo;
  }
  anterior = proximo;

i++;
}

//saida
i = 1;
printf("%d", v[0]);
while (i < n) {
  printf(" %d", v[i]);

i++;
}
printf("\n");
i = 1;
printf("%d", w[0]);
while (i < n) {
  printf(" %d", w[i]);

i++;
}
printf("\n");
printf("%d\n", maior);
printf("%d\n", menor);

}
/*
11 - Inverte Vetor (++)

Faça um programa que receba um vetor V de N inteiros e construa um vetor W com os mesmos ele-
mentos de V, porém invertidos, mostre os vetores V e W e o maior elemento de V e o menor elemento de
W.
  Entrada
A entrada contém apenas um caso de teste com 2 linhas. Na primeira linha há um inteiro N, 1 < N ≤
1000, representando o tamanho do vetor V. Na segunda linha há N valores inteiros separados por um espaço
em branco cada, que são os valores do vetor V.
  Saída
O programa deve gerar 4 linhas de saída. A primeira linha deve haver N inteiros separados por um
espaço em branco cada, representando os elementos do vetor V. Atenção, após o último elemento de V
não deve haver um espaço em branco. A segunda linha deve haver N inteiros separados por um espaço em
branco cada, representando os elementos do vetor W. Atenção, após o último elemento de W não deve haver
um espaço em branco. A terceira linha deve haver apenas um inteiro, representando o maior elemento de
V. A quarta linha deve haver apenas um inteiro, representando o menor elemento de W. Após imprimir a
quarta linha da saída, quebre uma linha.
*/
