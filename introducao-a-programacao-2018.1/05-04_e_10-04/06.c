#include <stdio.h>
main(){

    float H = 0, acm = 0, flt = 1;
    int i = 1;

    scanf("%f", &H);
    printf("\n");

    while(i <= H){
        if(i%2 == 0){
            acm = acm - 1/flt;
            printf("- 1/%.0f ", flt);
        }
        else if(i%2 == 1){
            acm = acm + 1/flt;
            printf("+ 1/%.0f ", flt);
        }
        i++;
        flt++;
    }
    printf("\n\n\nH = %.2f\n", acm);
}

/*
Ler o número de termos da série e imprimir o valor de H, sendo:
H = 1 - 1/2 + 1/3 – 1/4….+1/N
*/
