//1_Arrecadação de Jogos (+)

#include <stdio.h>

main(){

    int teste, pessoas, i = 1;
    double renda1 = 0, renda2 = 0, renda3 = 0, renda4 = 0, renda5 = 0;
    double popular, geral, arquibancada, cadeiras, Ipopular, Igeral, Iarquibancada, Icadeiras, renda;
    scanf("%d\n",&teste);

    while(i <=teste){

        scanf("%d %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancada, &cadeiras);

        Ipopular = (popular/100) * 1;
        Igeral = (geral/100) * 5;
        Iarquibancada = (arquibancada/100) * 10;
        Icadeiras = (cadeiras/100) * 20;
        renda = (Ipopular + Igeral + Iarquibancada + Icadeiras) * pessoas;

        printf("\nA RENDA DO JOGO N. %d E = %.2lf\n\n", i, truncf(renda*100)/100);
        i++;
        }
}
/*
1_Arrecadação de Jogos (+)
Escrever um algoritmo que lê o público total de futebol, as percentagens de pessoas nas seguintes
categorias: popular, geral, arquibancada e cadeiras e forneça a renda total do jogo. Sabe-se que o valor
dos ingressos por categoria são dados pela tabela abaixo:
        Categoria Valor ingresso
        Popular R$ 1,00
        Geral R$ 5,00
        Arquibancada R$10,00
        Cadeiras R$ 20,00
    Entrada
A entrada contém uma linha inicial com um valor inteiro informando o número de casos de testes que
ocorrem nas linhas seguintes. Cada caso de teste seguinte é formado por uma linha contendo os seguintes
valores, separados entre si por um espaço:
• O número de pessoas que compraram ingresso para o jogo correspondente ao caso de teste.
• A percentagem de pessoas que compraram ingresso na categoria Popular.
• A percentagem de pessoas que compraram ingresso na categoria Geral.
• A percentagem de pessoas que compraram ingresso na categoria Arquibancada.
• A percentagem de pessoas que compraram ingresso na categoria Cadeiras.
    Saída
O programa deve gerar uma linha para cada caso de teste na entrada, contendo a frase: A RENDA DO
JOGO N. x E = y, onde x corresponde a ordem do caso de teste na entrada e y é um valor real com duas
casas decimais que corresponde ao valor da renda total do jogo x.
*/
