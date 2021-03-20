#include <stdio.h>
main(){

    int i, a[10], b[10];
    printf("Insira 10 numeros \nSe i for par, resultado sera o numero digitado vezes 5 \nSe i for impar, resultado sera numero digitado mais 5\n\n");
    for(i = 0; i < 10; i++){
        printf("i%d = ", i);
        scanf("%d", &a[i]);

        if(i%2 == 0){

            b[i] = (a[i] * 5);

        }
         else if(i%2 != 0){

            b[i] = (a[i] + 5);
        }
    }

    printf("\n");

    for(i = 0; i < 10; i++){

        printf("i%d = %d\n", i, b[i]);

    }
}
