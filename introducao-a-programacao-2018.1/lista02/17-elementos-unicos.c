//17 - Contagem de Elementos Únicos

#include <stdio.h>

  int main(){

    int n, elementos = 0;
    scanf("%d\n", &n);

    int v[n], cont, i, flag = 0;

    for(cont = 0; cont < n; cont++){
      scanf("%d", &v[cont]);
    }
    for(cont = 0; cont < n; cont++){
      for(i = 0; i < n; i++){
        if(v[cont] == v[i]){
        flag ++;
        }
      }
      if (flag != 1) {
      }else if(flag == 1)
        elementos++;
      flag = 0;
    }

    printf("%d\n", elementos);
    return 0;
  }
/*
17 - Contagem de Elementos Únicos (+++)

Elabore um programa que conte o número total de elementos únicos em um vetor de números inteiros.
  Entrada
A entrada contém duas linhas. A primeira, contém um valor inteiro n < 5000 que corresponde ao
número de elementos que aparecem na segunda linha. A segunda linha contém n valores inteiros, separados
entre si por um espaço.
  Saída
A saída é formada por uma linha contendo um valor inteiro que corresponde ao número de elementos
que aparecem apenas uma vez no vetor. Após o valor, o programa deve imprimir o caractere de quebra de
linha.
*/
