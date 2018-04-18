#include <stdio.h>
main(){

    int ia = 1, ib = 1;
    double n, num = 1, den = 1, divisao = 0;
    scanf("%lf", &n);

    while(divisao != n){

    num = ia;

        while(ib <= 1000){

        den = ib;
        divisao = num / den;

        if((num/den) == n){
            printf("%.0lf/%.0lf\n", num, den);
            return 0;
        }

        ib++;
        }

    ib = 1;
    ia++;
    }
}
/*
Questão 03 (3,5 pontos) Transforma decimal em fração
Faça um programa que leia um número decimal e o converta para sua representação em fração
simplificada.
Entrada
O programa deve ler um número real N.
Saída
O programa deve apresentar uma linha contendo a fração simplificada, correspondente ao número N
informado. A fração deve ser apresentada no formato num/den, onde num e den são o numerador e o
denominador respectivamente.

Entrada
12.05
Saída
241/20

*/
