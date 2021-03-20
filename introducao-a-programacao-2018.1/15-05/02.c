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
            if(l + c != TM-1){
                printf("%d ", m[l][c]);
            }
            else{
            printf("  ");
            }
        }
    }
}


/*
02 – Fazer um algoritmo que preencha uma matriz inteira 5X5 e mostre quais são os elementos
com exceção da diagonal secundária.
*/
