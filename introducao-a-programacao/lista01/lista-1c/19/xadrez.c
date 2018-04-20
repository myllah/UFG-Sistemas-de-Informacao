//19 - Grãos de milho no tabuleiro de xadrez
#include <stdio.h>

main(){

    int i = 1, n, cont;
    double valor = 0, v = 0;

    scanf("%d", &n);

    i = n;
    if (i%2 != 0){
    
        while(i <= (64+(n-1))){

            if(i == n){
                valor = n;
            } else if (i%2 != 0)
            {
                valor = valor + n*2;

            } else if (i%2 == 0)
            {
                valor = valor + n;

            }
            i++;
        }
    }else if (i%2 == 0){
    
        while(i <= (64+(n-1))){

            if(i == n){
                valor = 0;
            } else if (i%2 != 0)
            {
                valor = valor + n*2;

            } else if (i%2 == 0)
            {
                valor = valor + n;

            }
            i++;
        }
    }
    printf("%.0lf\n", valor);

}

/*
19 - Grãos de milho no tabuleiro de xadrez (+++)

(Adaptado de FARRER, 1999) Faça um algoritmo em linguagem C que calcule e escreva o número
de grãos de milho que se pode colocar em um tabuleiro de xadrez, colocando n no primeiro quadro e nos
quadros seguintes o dobro de n, caso o quadro seja escuro, e a mesma quantidade de n, caso o quadro seja
branco. Percorra o tabuleiro sempre da esquerda para a direita e de baixo para cima.
    Entrada
O programa deve ler uma linha contendo um número inteiro n.
    Saída
O programa deve apresentar uma linha contendo a quantidade de grãos que podem ser colocados no
tabuleiro.
*/
