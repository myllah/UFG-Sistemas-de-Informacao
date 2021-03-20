//12 - Maior segmento igual de uma sequência
#include <stdio.h>
main(){

    int i = 2, k = 1;
    int n = 1, x = 1, y = 1;

    scanf("%d", &n);
    scanf("%d", &x);

    while(i <= n){

        y = x;
        scanf("%d", &x);

        if (x == y){
            k++;
        }

        i++;
    }

    printf("O comprimento do segmento de numeros iguais e: %d \n", k);

}
/*
12 - Maior segmento igual de uma sequência (++)
Dados n e uma sequência de n números inteiros, determinar quantos segmen-
tos de números iguais consecutivos compõem essa seqüência.
    Entrada
O programa deve ler um número inteiro maior que zero n e uma sequência de n números inteiros em
qualquer ordem.
    Saída
O programa deve apresentar a mensagem "O comprimento do segmento de numeros iguais e: k
n", onde k é o tamanho do maior segmento crescente encontrado.
*/
