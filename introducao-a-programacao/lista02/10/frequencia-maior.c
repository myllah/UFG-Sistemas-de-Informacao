//10 - Frequência e Maior
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

  //// MAIOR  /////
  int j, maior, indice;
  maior = v[0];
  for (j = 0; j < n; j++){
    for (i = 0; i < j; i++){
      if (v[i] > maior){
        maior = v[i];
        indice = i;
      }
    }
  }

  ////  FREQUÊNCIA ////
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

printf("Nota %d, %d vezes \n", repete, frequencia);

printf("Nota %d, indice %d \n", maior, indice);
}

/*
10 - Frequência e Maior (++)

Dada uma sequência de N notas entre 0 e 10, escreva um programa que exiba o valor da última nota
informada e quantas vezes ela apareceu no conjunto. O programa deve exibir ainda a maior nota informada
e a posição (índice do vetor) da sua primeira ocorrência.
  Entrada
Na primeira linha há um inteiro N, sendo 1 ≤ N ≤ 10000 representando a quantidade de notas da
sequência. Não é necessário validar o valor de N na entrada. Nas N linhas seguintes haverá um número
inteiro entre 0 e 10, inclusive, em cada linha.
  Saída
O programa gera 2 linhas de saída. A primeira linha exibirá a frequência da última nota informada e
a segunda linha exibirá a maior nota e a posição (índice do vetor) da sua primeira ocorrência, seguindo o
formato da saída apresentado a seguir. Não se esqueça de quebrar uma linha após a última impressão.
*/
