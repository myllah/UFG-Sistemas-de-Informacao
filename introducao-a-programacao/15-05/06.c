#include <stdio.h>
#define TM 2
int main(){

    int l, c, a[TM][TM], b[TM][TM], s[TM][TM];

    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            scanf("%d", &a[l][c]);
        }
    }

     for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            scanf("%d", &b[l][c]);
        }
    }

    int soma = 0; int coluna;
    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            for(coluna = 0; coluna < TM; coluna++){
                soma = soma + a[l][coluna] * b[coluna][c];
             }
        s[l][c] = soma;
        soma = 0;
        }
    }

    for(l = 0; l < TM; l++){
        for(c = 0; c < TM; c++){
            printf("%d ", s[l][c]);
        }
        puts("");
    }
    return 0;
}

/*
06 - Escrever um algoritmo que calcule a multiplicação de duas matrizes inteiras 10X10.
*/
/*
06 - Escrever um algoritmo que calcule a multiplicação de duas matrizes inteiras 10X10.
*/
