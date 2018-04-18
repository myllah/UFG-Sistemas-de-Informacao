#include <stdio.h>

main(){

    int i = 2;
    double cont = 1, valor = 1, anterior = 1, proxima = 0;

    valor = anterior;

    while(i <= 64){

        cont = i;

        proxima = anterior*2;
        valor = valor + proxima;

        anterior = proxima;

        i++;
    }

    printf("%.2lf\n", trunc(valor));

}

/*
Questão 02 (3,5 pontos) – Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento
em grãos de trigo da seguinte maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de
tal forma que a primeira casa do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior.
Construa um algoritmo que calcule quantos grãos de trigo a Rainha pagará sabendo-se que o tabuleiro de
xadrez possui 64 casas.
Saída
18 446 744 073 709 552 000.00
*/
