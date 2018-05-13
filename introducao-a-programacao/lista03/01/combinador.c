//1 - Combinador
#include <stdio.h>
#include <string.h>

int main(){

  int j = 0, n;
  scanf(" %d", &n);
  while (j < n) {

    char a[50], b[50]; int i = 0;

    scanf(" %[^ ]", a);
    getchar();

    scanf(" %[^\n]", b);
    getchar();

    int ta = strlen(a);
    int tb = strlen(b);
    int k = 0;


      while (k < 50) {

        if (k < ta) {
          printf("%c", a[k]);
        }

        if (k < tb) {
          printf("%c", b[k]);

        }
        k++;

      }
      printf("\n");
   j++;
  }


  return 0;
}

/*
1 - Combinador (+)

Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando
as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira
letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras
restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.
  Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade
de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias
de caracteres. Cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.
  Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia
resultante.
  Exemplo
Entrada
2
Tpo oCder
aa bb

Saída
TopCoder
abab
*/
