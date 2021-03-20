//b = soma do anterior com o atual de a
#include <stdio.h>
main(){

    int i, anterior = 0, a[8], b[8];

    anterior = 0;

    for(i = 0; i < 8; i++){

        printf("i%d = ", i);
        scanf("%d", &a[i]);
        b[i] = a[i] + anterior;
        anterior = a[i];

    }

    printf("\n");

    for(i = 0; i < 8; i++){

        printf("i%d = %d\n", i, b[i]);

    }

}
