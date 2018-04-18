//3- Quadrado de pares (+)
#include <stdio.h>
#include <math.h>

main(){

    int n, i=1;

    scanf("%d", &n);

    while(n<5 || n >2000){

        printf("numero invalido\n");
        scanf("%d", &n);

    }

    while(i <= n){
        if(i%2 == 0){
            printf("%d^2 = %d\n", i, i*i);

        }
    i++;
    }

}

/*
3- Quadrado de pares (+)
Escreva um programa para ler um valor inteiro N e que gere o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso1
    Entrada
A entrada conterá uma linha com um valor inteiro N, 5 < N < 2000.
    Saída
A saída deve conter, uma linha para cada quadrado computado. Em cada linha deve constar uma expressão
do tipo xˆ2 = y, onde x é um número par e y é o seu valor elevado ao quadrado. Imediatamente
após o valor de y deve aparecer o caractere de quebra de linha: ‘\n’.
*/
