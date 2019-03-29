
#include <stdio.h>

struct structsapos {
    int posicaoinicial;
    int distanciapulo;
};

main(){

int p, s, i;
int conta;

//entrada
scanf("%d %d", &p, &s);

struct structsapos sapos[s];
for(i=0; i<s; i++){
    scanf("%d", &sapos[i].posicaoinicial);
    scanf("%d", &sapos[i].distanciapulo);
}

//processamento
int pedras[p];
for(i=0; i<p; i++){
    pedras[i] = 0;
}

for(i=0; i<s; i++){

    conta = 0;
    while(sapos[i].posicaoinicial - conta > 0){
        int j = sapos[i].posicaoinicial - conta ;
        pedras[j -1] = 1;
        conta = conta + sapos[i].distanciapulo;
    }

    conta = 0;
    while(sapos[i].posicaoinicial + conta <= p){
        int j = sapos[i].posicaoinicial + conta ;
        pedras[j -1] = 1;
        conta = conta + sapos[i].distanciapulo;
    }
}

//saída
for(i=0; i<p; i++){
    printf("%d\n", pedras[i]);
}
}

/*

7 sapos (+++)

Sebastião Bueno Coelho, apelidado de SBC pelos familiares e amigos, passou as férias de janeiro de
2019 no sítio de seus avós. Durante sua estadia, uma das atividades prediletas do SBC era nadar no rio que
havia no “fundo” da casa dos avós. Uma das características do rio que mais impressionava SBC era um
belo caminho, feito inteiramente com pedras brancas.
Há muito tempo, o avô de SBC notara que os habitantes do sítio atravessavam o rio com grande frequência
e, por isso, construiu um caminho nele feito com pedras posicionadas em linha reta; ao fazê-lo, tomou muito
cuidado para que o espaçamento entre as pedras fosse de exatamente de um metro. Hoje em dia, a única
utilidade do caminho é servir de diversão para os sapos que vivem no rio, que pulam de uma pedra a outra
agitadamente.
Um certo dia, enquanto descansava e nadava nas águas, SBC assistiu atentamente às acrobacias dos anfíbios
Anura e notou que cada sapo sempre pulava uma quantidade fixa de metros.
SBC sabe que você participa, todos os anos, da Maratona de Programação do INF/UFG capitaneada pelo
Prof. Humberto Longo, e chegando na escola, resolveu desafiar-lhe com o seguinte problema:
“Dado o número de pedras no rio – P –, o número de sapos – S, a pedra inicial sobre a qual cada sapo
está, sabendo-se que cada pedra é identificada por sua posição na sequência de pedras a partir da margem
do rio que está no “fundo” da casa dos avós de SBC – 1,2,3,... – e, por fim, a distância que cada sapo pula
– d1,d2,d3,...,dp –, determinar as posições onde pode existir pelo menos um sapo depois que SBC chega
no rio após assistir ao balé dos pulos dos sapos.”.

    Entrada
A primeira linha da entrada contém dois inteiros P (1 ≤ P ≥ 50) e S (1 ≤ S ≤ 100) representando,
respectivamente, o número de pedras no rio e o número de sapos.
Cada uma das S linhas seguintes possui dois inteiros pi e di representando, respectivamente, a posição
inicial de um sapo i e a distância fixa de pulo dele.

    Saída
A saída contém P linhas. A j-ésima linha indica a possibilidade, ou não, de ter um sapo na j-ésima
pedra.
13
Para as pedras que podem ter um sapo você deve imprimir 1, e para as pedras que, com certeza, não podem
ter nenhum sapo você deve imprimir 0.

    Exemplos
Entrada
5 2
3 2
4 4
Saída
1
0
1
1
1
Entrada
8 3
3 3
2 2
6 2
Saída
0
1
1
1
0
1
0
1

*/
