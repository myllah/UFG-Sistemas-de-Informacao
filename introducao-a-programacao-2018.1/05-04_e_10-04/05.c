#include <stdio.h>
main(){

    int num, i = 2, menor, maior;
    
    scanf("%d", &num);
    
    menor = num;
    maior = num;

    while(i <=10){

    scanf("%d", &num);
        if(num < menor){
            menor = num;
        }
        if(num > maior){
            maior = num;
        }
    i++;
    }

    printf("Menor = %d\nMaior = %d", menor, maior);
}
/*
5) Entrar com 10 números (positivos ou negativos) e imprimir o maior e o menor número da lista
*/