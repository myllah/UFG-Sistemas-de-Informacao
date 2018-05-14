#include <stdio.h>
#include <string.h>
int main() {

  int n, i = 0;
  scanf("%d", &n);
  while (n < 1 || n > 1000) {
    scanf("%d", &n);
  }

  char num[10], one[4] = {"one"}, two[4] = {"two"}, three[6] = {"three"};
  int flag, count = 0, k = 0;

  while (i < n) {

    scanf(" %[^\n]", num);
    getchar();

    k = 0; count = 0;
    while (k < 10 && num[k] != '\0') {
      count++;
      k++;
    }

    if (count == 3) {
      flag = 0;
      for (k = 0; k < count; k++) {
        if (num[k] == one[k]) {
          flag++;
        }
      }
      if (flag >= 2) {
        printf("1\n");
      }
    }

    if (count == 3) {
      flag = 0;
      for (k = 0; k < count; k++) {
        if (num[k] == two[k]) {
          flag++;
        }
      }
      if (flag >= 2) {
        printf("2\n");
      }
    }

    if (count == 5) {
      flag = 0;
      for (k = 0; k < count; k++) {
        if (num[k] == three[k]) {
          flag++;
        }
      }
      if (flag >= 4) {
        printf("3\n");
      }
    }
  i++;
  }

  return 0;
}

/*
4 - Um_Dois_Três (+)

Seu irmão mais novo aprendeu a escrever apenas um, dois e três, em Inglês. Ele escreveu muitas dessas
palavras em um papel e a sua tarefa é reconhecê-las. Nota-se que o seu irmão mais novo é apenas uma
criança, então ele pode fazer pequenos erros: para cada palavra, pode haver, no máximo, uma letra errada.
O comprimento de palavra é sempre correto. É garantido que cada palavra que ele escreveu é em letras
minúsculas, e cada palavra que ele escreveu tem uma interpretação única.
  Entrada
A primeira linha contém o número de palavras que o seu irmão mais novo escreveu. Cada uma das
linhas seguintes contém uma única palavra com todas as letras em minúsculo. As palavras satisfazem as
restrições acima: no máximo uma letra poderia estar errada, mas o comprimento da palavra está sempre
correto. Haverá, no máximo, 1000 palavras de entrada.
  Saída
Para cada caso de teste, imprima o valor numérico da palavra
  Exemplo
Entrada
3
owe
too
theee
Saída
1
2
3
*/
