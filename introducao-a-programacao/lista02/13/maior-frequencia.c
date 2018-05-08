//13 - Maior Frequencia

#include <stdio.h>
main(){

  int n, i = 0;
  scanf("%d", &n);

  while (n < 1 || n > 10000) {
    scanf("%d", &n);
  }

  int v[n];
  while (i < n) {
    scanf("%d", &v[i]);
  i++;
  }

  int f = 0, r, frequencia = 0, repete;
  int k = 0, l;

  while (k < n) {
    l = k+1;
    while (l < n) {
      if (v[k] == v[l]) {
        r = v[l];
        if (f == 0) {
          f = 2;
        }else{
        if (f == 0) {
          f = 2;
        }else{
          f++;
        }
      }
    }

      if(f > frequencia){
        frequencia = f;
        repete = r;
      }
    l++;
    }
  l = 0; k++; f = 0;
  }

  printf("%d\n", repete);
  printf("%d\n", frequencia);

}

/*
13 - Maior Frequencia (++)

Dada uma sequência de N números entre 0 e 100. Determine qual o valor de maior frequência. Caso
haja mais de um valor tenha a maior frequência, mostre o menor deles.
  Entrada
Na primeira linha há um inteiro N, 1 ≤ N ≤ 1000000, representando a quantidade números. Nas N
linhas seguintes haverá um número natural entre 0 e 100 inclusive por linha.
  Saída
O programa gera apenas duas linhas. Na primeira dela mostre qual foi o valor com maior frequência. E
na segunda linha, mostre a quantidade de vezes que esse número apareceu na sequência de valores. Após
a impressão deste último valor quebre uma linha. Caso haja mais de um valor tenha a maior frequência,
mostre o menor deles.
*/
