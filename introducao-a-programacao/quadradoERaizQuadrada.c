#include<stdio.h>

main(){

    float x;
    printf("Digite um numero\n");
    scanf("%f", &x);

    printf("\nO numero ao quadrado eh %.2f e a raiz quadrada eh %.2f\n", pow(x,2), sqrt(x));

}
