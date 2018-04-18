#include <stdio.h>

main(){

    int i = 1;
    float soma = 0, cont = 1, dobro = 0;

    while (i <= 10){
        cont = i;
        dobro = cont * cont;
        if(i%2 == 0){

            soma = soma - (cont/dobro);


        } else if(i%2 != 0){

            soma = soma + (cont/dobro);
        }

        i++;
    }
    printf("%.2f\n", soma);
}
