#include <stdio.h>
main(){

    int i, x[5];

    for (i = 0; i <5 ; i++){

        printf("Informe o valor\n");
        scanf("%d", &x[i]);

    }

    printf("\nOs valores sao = ");

    for (i = 0; i <5 ; i++){

        printf("%d ", x[i]);

    }

    printf("\n");

}
