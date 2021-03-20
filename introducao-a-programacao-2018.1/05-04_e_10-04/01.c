#include <stdio.h>

main(){
    int i = 0;
    int auxiliar;

    for(i = 0; i <=100; i=i+3){
        auxiliar = auxiliar + i;
    }
   printf("\nA soma de todos os numeros multiplos de 3 entre 1 e 100 eh %d\n", auxiliar);
}

/*
Criar um algoritmo que imprima todos os números múltiplos de 3 entre 1 e 100 e a soma deles.
*/
