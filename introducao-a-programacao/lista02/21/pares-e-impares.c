#include <stdio.h>
main(){

int temp , n;
int ia = 0, ib = 0, p =0, l = 0, j =0, i =0;

scanf("%d", &n);

int vetor[n];

  while (l < n) {
    scanf("%d", &vetor[l]);
  l++;
  }

//contando pares

  while (ia < n) {
    if (vetor[ia]%2 == 0) {
      p++;
    }
    ia++;
  }
//pares
int par[p]; ia = 0; ib = 0;

  while (ia < n) {
    if (vetor[ia]%2 == 0) {
      par[ib] = vetor[ia];
      ib++;
    }
    ia++;
  }

  for (j = 0; j < p-1; j++){
    for (i = 0; i < p; i++){
      if (par[i] > par[i+1]){
         temp = par[i];
         par[i] = par[i+1];
         par[i+1] = temp;
      }
    }
  }

  //contando impares
  ia = 0, ib = 0; int im = 0;
    while (ia < n) {
      if (vetor[ia]%2 != 0) {
        im++;
      }
      ia++;
    }

//impares
  int impar[im]; ia = 0; ib = 0;
    while (ia < n) {
      if (vetor[ia]%2 != 0) {
        impar[ib] = vetor[ia];
        ib++;
      }
      ia++;
    }

  for (j = 0; j < im; j++){
    for (i = 1; i < im; i++){
      if (impar[i] > impar[i-1]){
        temp = impar[i];
         impar[i] = impar[i-1];
         impar[i-1] = temp;
      }
    }
  }

  l = 0;
  while (l < p) {
    printf("%d\n", par[l]);
  l++;
  }

  l = 0;
  while (l < im) {
    printf("%d\n", impar[l]);
  l++;
  }
}
/*
21 - Pares e Ímpares (+++)

Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte cri-
tério: • Primeiro os Pares • Depois os Ímpares Sendo que deverão ser apresentados os pares em ordem
crescente e depois os ímpares em ordem decrescente.
  Entrada
A primeira linha de entrada contém um único inteiro positivo N(1 < N < 10⁵ ) que corresponde ao
número de linhas de entrada que vêm logo a seguir. As próximas N linhas conterão, cada uma delas, um
valor inteiro não negativo.
  Saída
Apresente todos os valores lidos na entrada segundo a regra descrita acima. Cada número deve ser
impresso em uma linha. Após imprimir último número quebre a linha.
*/
