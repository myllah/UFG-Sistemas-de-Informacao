//29 - Intercala (+++++)
#include <stdio.h>
int main(){

    int i, q1, q2, q3, s = 0, j, temp;

    scanf("%d", &q1);
    scanf("%d", &q2);
    q3 = q1+q2;

    int v1[q1], v2[q2];

        //// Ler vetor 1 ////
    i = 0;
    while(i < q1){
        scanf("%d", &v1[i]);
    i++;
    }

        //// Ler vetor 2 ////
    i = 0;
    while(i < q2){
        scanf("%d", &v2[i]);
    i++;
    }
        //// Definir vetor 3 ////
    int v3[q3];

     i = 0;
    while(i < q1){
        v3[i] = v1[i];
        s++;
     i++;
    }

    i = 0;
    while(i < q2){
         v3[i+s] = v2[i];
    i++;
    }

        //// Ordenar vetor 3 ////
    for(j = 0; j < q3; j++){
        for(i = 0; i < q3-1; i++){
             if(v3[i] > v3[i+1]){
                 temp = v3[i];
                 v3[i] = v3[i+1];
                 v3[i+1] = temp;
            }
        }
    }

        //// Mostrar vetor 3 ////
   i = 0;
    while(i < q1+q2){
         printf("%d\n", v3[i]);
    i++;
    }
    return 0;
}

/*
29 - Intercala (+++++)

Faça um algoritmo que aloque dois vetores V1 e V2 com o tamanho de cada entrada q1 e q2, receba os
q1 valores no vetor V1 e os q2 valores no vetor V e construa um terceiro vetor, Vr, com a intercalação dos
vetores V1 e V2 de forma ordenada.
    Entrada
A entrada consiste de dois número positivo q1 e q2 , sendo 0 < q(1,2) ≤ 500000, representando a
quantidade de entradas do programa. Seguido de q1 +q2 linhas, onde nas q1 primeiras linhas estão os q1
valores e nas demais q2 linhas estão os q2 valores. Esses valores são naturais n, 0 ≤ n ≤ 999999. E ainda,
dentro do mesmo bloco é garantido que o número n representado na linha q é menor que o número que está
em q+1 e maior que ou igual ao que está em q-1. Ou seja: n(q-1) ≤ n(q) < n(q+1) para todo q.
    Saída
A saída deverá ser todos os q1 +q2 valores das duas entradas intercalados e impressos de forma crescente.
*/
