#include <stdio.h>
#define TM 10
main(){

    int l, c, m[TM][TM], soma = 0;

    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            scanf("%d", &m[l][c]);
        }
    }

    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            if(l == c){
                soma = soma + m[l][c];
            }
        }
    }

    printf("%d", soma);

}

/*
01 – Criar um algoritmo que leia os elementos de matriz inteira 10X10 e imprima a soma dos
elementos que estão acima da diagonal principal.
*/
