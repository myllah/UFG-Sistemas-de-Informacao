//10 - Soma e Subtração de Polinômios (+++)
#include <stdio.h>
#include <stdlib.h>
struct p{
  float termo;
  int expoente;
};
int main(){
  int teste, t; scanf("%d", &teste);

  for(t = 0; t < teste; t++){
    int i, j;
    char caractere; scanf(" %c", &caractere);

    int n1; scanf("%d", &n1);

    struct p poli1[n1];
    for(i = 0; i < n1; i++){
      scanf("%f %d", &poli1[i].termo, &poli1[i].expoente);
    }

    int n2; scanf("%d", &n2);

    struct p poli2[n2];
    for(i = 0; i < n2; i++){
      scanf("%f %d", &poli2[i].termo, &poli2[i].expoente);
    }

    int maximoExpoente = poli1[0].expoente;
    for(i = 0; i < n1; i++){
      if(maximoExpoente < poli1[i].expoente){
        maximoExpoente = poli1[i].expoente;
      }
    }for(i = 0; i < n2; i++){
      if(maximoExpoente < poli2[i].expoente){
        maximoExpoente = poli2[i].expoente;
      }
    }

    struct p resposta[maximoExpoente];
    for(i = 0; i <= maximoExpoente; i++){
      resposta[i].expoente = i;
      resposta[i].termo = 0;
    }

    for(i = 0; i <= maximoExpoente; i++){
      for(j = 0; j < n1; j++){
        if(resposta[i].expoente == poli1[j].expoente){
          resposta[i].termo += poli1[j].termo;
        }
      }
      for(j = 0; j < n2; j++){
        if(resposta[i].expoente == poli2[j].expoente){
          resposta[i].termo += poli2[j].termo;
        }
      }
    }

    for(i = maximoExpoente; i >= 0; i--){
      if(resposta[i].termo != 0){
        if(resposta[i].expoente == 0){
          if(resposta[i].termo > 0){
            printf("+%.2f", resposta[i].termo);
          }else if(resposta[i].termo < 0){
            printf("%.2f", resposta[i].termo);
          }
        }else if(resposta[i].termo > 0){
          printf("+%.2fX^", resposta[i].termo);
          printf("%d ", resposta[i].expoente);
        }else if(resposta[i].termo < 0){
            printf("%.2fX^", resposta[i].termo);
            printf("%d ", resposta[i].expoente);
        }
      }
    }puts("");
  }
return 0;
}


/*
A próxima linha contém um número inteiro n 1
que indica o número de termos do primeiro polinômio. Em seguida, há n 1 (n 1 ≤ 50) linhas cada uma
contendo um par de números c e e separados entre si por um espaço. O número c é um valor float, com
sinal e corresponde ao coeficiente de um termo do polinômio. O valor e é um número inteiro positivo e
corresponde ao expoente do termo do polinômio. Após o par n 1 . Há um outro número inteiro n 2 (n 2 ≤ 50)
que corresponde ao número de termos do segundo polinômio, seguido, de n − 2 linhas contendo pares de
coeficientes e expoentes, como explicando para o caso do primeiro polinômio. Os pares de cada polinômio
estão ordenados em ordem decrescente de expoente.
Saída
Para cada caso de teste o programa deve imprimir uma linha contendo o polinômio resultante escrito no
seguinte formato:
sc 1 X ∧ e n sc 2 X ∧ e n−1 · sc n X ∧ e 1
onde s ∈ { 0 + 0 , 0 − 0 } é o sinal do coeficiente do polinômio, c i é o valor do deficiente e e i é o valor do expoente
do termo i. Se durante a operação se soma ou subtração de polinômios um dos termos do polinômio
resultante ficar com coeficiente igual a zero, esse termo não deve aparecer no polinômio resultante.
Sugestão
Represente cada termo do polinômio como uma struct com dois campos: coeficiente e expoente. Re-
presente cada polinômio de entrada e também o polinômio resultante como vetores de structs. Escreva uma
função para cada uma das seguintes ações:
• Leitura de um polinômio
• Impressão de um polinômio
• Soma de dois polinômios
• Subtração de dois polinômios
15Exemplo
Entrada
2
+
5
-0.5 7
+4.2 4
-3 2
+1 1
-4 0
4
+3 5
+2 4
-1 2
+3 0
+
2
-5 7
-3 0
6
+2 6
+2 5
+3 4
-2.5 3
+3 2
-1.2 1
Saída
−0.50X ∧ 7 + 3.00X ∧ 5 + 6.20X ∧ 4 − 4.00X ∧ 2 + 1.00X ∧ 1 − 1.00
−5.00X ∧ 7 + 2.00X ∧ 6 + 2.00X ∧ 5 + 3.00X ∧ 4 − 2.50X ∧ 3 + 3.00X ∧ 2 − 1.20X ∧ 1 − 3.00
*/
