//19 - Elementos Únicos
#include <stdio.h>

  int main(){

    int n;
    scanf("%d\n", &n);

    int v[n], cont, i, flag = 0;

    for(cont = 0; cont < n; cont++){
      scanf("%d", &v[cont]);
    }

    for(cont = 0; cont < n; cont++){
      for(i = cont+1; i < n; i++){
        if(v[cont] == v[i]){
        flag = 1;
        }
      }
      if(flag == 0)
        printf("%d\n", v[cont]);
      flag = 0;
    }
    return 0;
  }
/*
19 - Elementos Únicos (+++)

Dada uma sequência de N números inteiros na ordem crescente, identifique os elementos únicos.
  Entrada
Na primeira linha há um inteiro N, 1 ≤ N ≤ 1000, representando a quantidade de elementos. Nas N
linhas seguintes haverá um número inteiro (positivo ou negativo) por linha.
  Saída
O programa apresenta um sequência de elementos únicos, na ordem crescente. Cada elemento é apre-
sentado em uma linha.
*/
