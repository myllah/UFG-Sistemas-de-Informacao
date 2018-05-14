//2 - LED

#include <stdio.h>
#include <string.h>
int main(){

  int n, leds, i, k, tamanho;

  scanf(" %d", &n);
  while (n < 1 || n > 1000) {
    scanf(" %d", &n);
  }

  char v[10000];

  i = 0;
  while (i < n) {
    leds = 0;

    scanf(" %[^\n]", v);
    getchar();

    tamanho = strlen(v);

    k = 0;
    while (k < tamanho) {

      if (v[k] == '1') { leds = leds + 2; }
      else if (v[k] == '2') { leds = leds + 5;}
      else if (v[k] == '3') { leds = leds + 5; }
      else if (v[k] == '4') { leds = leds + 4; }
      else if (v[k] == '5') { leds = leds + 5; }
      else if (v[k] == '6') { leds = leds + 6; }
      else if (v[k] == '7') { leds = leds + 3; }
      else if (v[k] == '8') { leds = leds + 7; }
      else if (v[k] == '9') { leds = leds + 6; }
      else if (v[k] == '0') { leds = leds + 6; }

    k++;
    }

    printf("%d leds\n", leds);
  i++;
  }

return 0;
}

/*
2 - LED (+)

João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não
tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números
abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.
1 - 2
2 - 5
3 - 5
4 - 4
5 - 5
6 - 6
7 - 3
8 - 7
9 - 6
0 - 6
  Entrada
A entrada contém um inteiro N,(1 ≤ N ≤ 1.000) correspondente ao número de casos de teste, seguido
de N linhas, cada linha contendo um número (1 ≤V ≤ 10100) correspondente ao valor que João quer montar
com os leds.
  Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o
valor desejado, seguido da palavra "leds".
  Exemplo
Entrada
3
115380
2819311
23456
Saída
27 leds
29 leds
25 leds
*/
