#include <stdio.h>
#define TM 5
main(){

    int l, c, m[TM][TM], soma = 0;

    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            scanf("%d", &m[l][c]);
        }
    }

    for(l = 0; l < TM; l++){
    puts("");
        for(c = 0; c < TM; c++){
            if((l+c)%2 != 0){
                printf("%d ", m[l][c]);
            }
            else{
            printf("  ");
            }
        }
    }
}

/*
03 – Criar um algoritmo que armazene dados inteiros em uma matriz de ordem 5X5 e imprima
todos os números que se encontram em posição cuja linha mais coluna formam um número par
*/
