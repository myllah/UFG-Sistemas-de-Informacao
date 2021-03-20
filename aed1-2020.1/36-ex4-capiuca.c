#include<stdio.h>

main(){

int i, n;
scanf("%d", &n);
int v[n];

for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
}

int a, b, c, d, novo;
for(i = 0; i < n; i++){
    a = v[i]/1000%10;
    b = v[i]/100%10;
    c = v[i]/10%10;
    d = v[i]%10;

    novo = d*1000 + c*100 + b*10 + a;

    if(v[i] == novo){
        printf("yes ");
    }else{
        printf("no ");
    }
}

}

/*

4 capicua (++)

O pequeno estudante Alan M. Turing está aprendendo a decompor um número em unidades, dezenas,
centenas, etc., e está com grandes dificuldades. Sua professora, Ada, preocupada com o rendimento de Alan
decidiu ensiná-lo por meio de uma brincadeira:
Alan deve pegar um número com quatro algarismos, e verificar se o reverso deste número é ele próprio. Se
for, Alan deve responder sim, do contrário deve responder nao (sem o uso do sinal de acento!).
Em verdade, Ada está ensinando quando um número é chamado de capicua (ou também conhecido por
palíndromo), pois umnúmero é dito capicua quando seu reverso é ele próprio.
Escreva um programa C que implemente esta brincadeira conforme descrito a seguir.

    Entrada
A primeira linha da entrada contém um inteiro N (N ≥ 1) representando a quantidade de números
inteiros que Alan deve responder sim (capicua) ou nao. Cada uma das N linhas seguintes será composta por
um inteiro de até quatro algarismos.
Observação: O seu programa não poderá decompor o número na entrada, ou seja, não poderá ler o
número N como caracteres individuais que formam o número: você deve fazer o programa lê-lo como
número e, em seguida, manipulá-lo da maneira que desejar.

    Saída
A saída consiste de uma única linha: a sequência de palavras sim/nao, separadas por um único espaço
em branco entre cada par consecutivo delas, que correspondende à resposta.

    Exemplos
2
4569
5775
no yes


3
1458
1228
9779
no no yes

4
1221
2222
3113
7887
yes yes yes yes

5
1234
1243
1324
2134
4321
no no no no no
* 
10
1234
5897
1881
2662
5588
9229
3653
5555
3773
4587
no no yes yes no yes no yes yes no

*/
