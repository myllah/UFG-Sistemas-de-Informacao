#include <stdio.h>

main(){
    int i, anterior, atual, proximo;

    printf("\nInforme os dois primeiros termos: ");
    scanf("%d %d", &anterior, &atual);
    printf("\n\nSerie de FETUCCINE\n");

    printf("%d\n%d\n", anterior, atual);
    for(i=3; i<=10; i++){
        if(i % 2 == 0){
            proximo = (atual - anterior);
        }else{
            proximo = (atual + anterior);
        }
        printf("%d\n", proximo);
        anterior = atual;
        atual = proximo;
    }
}

/*
3) A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos
pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos
anteriores, ou seja:
Ai=A(i−1)+ A(i−2)
para impar
Ai=A(i−1)−A(i−2) para par
Criar um algoritmo que imprima os 10 primeiros termos da série de FETUCCINE
*/