#include <stdio.h>
#include <math.h>
main(){

    float S = 0 , quadrado = 0, divisao = 0, iFloat = 1;
    int i = 1;

    while(i<=10){

        quadrado = pow(iFloat,2);
        divisao =  iFloat/quadrado;

        if(i%2 == 0){
            S = S - divisao;
            printf("- %.0f/%.0f ", iFloat, quadrado);
        }
        else if(i%2 == 1){
            S = S + divisao;
            printf("+ %.0f/%.0f ", iFloat, quadrado);
        }
        iFloat++;
        i++;
    }
    printf("\n\n");
    printf("S = %.5f\n", S);
}

/*
8) Fazer um programa que calcule e escreva o valor de S:
S = 1/1 - 2/4 + 3/9 - 4/16 +5/25 - 6/36 + ... - 10/100
*/
