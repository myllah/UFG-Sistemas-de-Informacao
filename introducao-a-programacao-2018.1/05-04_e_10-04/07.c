#include <stdio.h>
#include <math.h>
main(){

    float S = 0 , elevado = 0, divisao = 0, iFloat = 1, denominador = 50;
    int i = 1;

    while(i<=50){

        elevado = pow(2, iFloat);
        divisao =  elevado/denominador;

        printf("\n2^%.0f / %.0f = %.2f\n", iFloat, denominador, divisao);

        S = S + divisao;
        printf("\ns = %.2f\n", S);
        printf("\n-------------------------------\n");

        iFloat++;
        i++;
        denominador--;
    }
    printf("\n\n\n");
    printf("S = %.2f\n", S);
}
/*
7) Faça um programa que calcule e escreva a seguinte soma:
2¹/50 + 2²/49 + 2³/48 + ... + 2⁵⁰/1
*/
