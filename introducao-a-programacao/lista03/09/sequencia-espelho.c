//9 - Sequência Espelho
#include<stdio.h>
#include <string.h>
int main(){

  int c, i = 0;
  scanf("%d", &c);

  while(i < c){

    int b, e;
    scanf("%d", &b);
    while(b < 1){
      scanf("%d", &b);
    }

    scanf("%d", &e);
    while(e < b || e > 12221){
      scanf("%d", &e);
    }
    int j;
    char num[100];

    j = 0;
    while(j < 100){
      num[j] = '\0';
      j++;
    }
    for(j = b; j <= e; j++){
      //printf("%d", j);
      sprintf(num, "%s%d", num, j);
    }

    for(j = e; j >= b; j--){

      if(j > 0 && j < 10){
          //printf("%d", j);
          sprintf(num, "%s%d", num,j);
      } else if(j >= 10 && j < 100){
          int uni, dez;
          dez = j%10;
          uni = j/10%10;
          //printf("%d%d", dez, uni);
          sprintf(num, "%s%d%d", num, dez, uni);
      } else if(j >= 100 && j < 1000){
          int uni, dez, cen;
          cen = j%10;
          dez = j/10%10;
          uni = j/100%10;
          //printf("%d%d%d", cen, dez, uni);
          sprintf(num, "%s%d%d%d", num,cen, dez, uni);
      }else if(j >= 100 && j < 1000){
          int uni, dez, cen, mil;
          mil = j%10;
          cen = j/10%10;
          dez = j/100%10;
          uni = j/1000%10;
          //printf("%d%d%d%d", mil, cen, dez, uni);
          sprintf(num, "%s%d%d%d%d", num,mil, cen, dez, uni);
      }else if(j >= 100 && j < 1000){
          int uni, dez, cen, mil, milh;
          milh = j%10;
          mil = j/10%10;
          cen = j/100%10;
          dez = j/1000%10;
          uni = j/10000%10;
          //printf("%d%d%d%d%d", milh, mil, cen, dez, uni);
          sprintf(num, "%s%d%d%d%d%d", num,milh, mil, cen, dez, uni);
      }
    }
    printf("%s\n", num);
    i++;
  }
  return 0;
}

/*
9 - Sequência Espelho(++)

Imprimir números em sequência é uma tarefa relativamente simples. Mas, e quando se trata de uma
sequência espelho? Trata-se de uma sequência que possui um número de início e um número de fim, e
todos os números entre estes, inclusive estes, são dispostos em uma sequência crescente, sem espaços e,
em seguida, esta sequência é projetada de forma invertida, como um reflexo no espelho. Por exemplo, se a
sequência for de 7 a 12, o resultado ficaria 789101112211101987.
  Entrada
A entrada possui um valor inteiro C indicando a quantidade de casos de teste. Em seguida, cada caso
apresenta dois valores inteiros, B e E (1 ≤ B ≤ E ≤ 12221), indicando o início e o fim da sequência.
  Saída
Para cada caso de teste, imprima a sequência espelho correspondente.
  Sugestão
Utiliza a função sprintf() para imprimir um número inteiro em uma string. Use a função strlen() para
obter o tamanho de uma string.
  Exemplo
Entrada
3
1 5
10 13
98 101
Saída
1234554321
1011121331211101
98991001011010019989
*/
