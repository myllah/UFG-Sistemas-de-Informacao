
#include<stdio.h>

main(){
int i, j;

int n;
scanf("%d", &n);

int v[n];
for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
}

int metade = 0; int flag;
for(i = 0; i < n; i++){
    flag = 0;

    for(j = 1; j <= v[i]/2; j++){
        if(v[i]%j == 0){
            flag++;
            if(flag >= 2) break; //
        }
    }
    if(flag > 1){
        printf("composto\n");
    }else{
        printf("primo\n");
    }
}

}

/*
Saída
A saída consiste de N linhas, cada uma com a palavra primo, se o número for primo, ou a palavra
composto caso o número não seja primo (número composto). Note que as palavras devem ser grafadas,
necessariamente, com letras minúsculas.

Exemplos
Entrada
5
2
3
11
16
60

Saída
primo
primo
primo
composto
composto

Entrada
9
1200
1697
2712
2549
4723
7853
23557
23558
15485863

Saída
composto
primo
composto
primo
primo
primo
primo
composto
primo
*/


/*
8 primos (++)

No livro A música dos números primos, de Marcus du Saboy (2007, Editora Zahar, 471 páginas), o
autor mostra que o mistério dos números primos passou a ser considerado o maior problema matemático de
todos os tempos. Em meados do século XIX, o alemão Georg Friedrich Bernhard Riemann (1826 – 1866)
formulou uma hipótese:
“É possível estabelecer uma harmonia entre esses números primos, à semelhança da harmonia musical.”
A partir de então, as mentes mais ambiciosas da Matemática embarcaram nessa procura que parece não ter
fim. Atualmente, estipulou-se o prêmio de um milhão de dólares para quem provar a hipótese. O livro relata
esse verdadeiro Santo Graal da Matemática, com casos interessantes e retratos pitorescos dos personagens
que, desde Euclides, se envolveram nesse estranho mistério.
Você deverá, assim, pequisar e implementar, em C, um algoritmo que seja capaz de identificar se um dado
número inteiro positivo é, ou não, um número primo. Número que não é primo é denominado de composto.

Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100) representando a quantidade de números
inteiros positivos para os quais seu programa deve responder primo ou composto.
Cada uma das N linhas seguintes será composta por um inteiro positivo.
Observação: O seu programa deve estar preparado para receber números no intervalo de 2 a 264 −1.

Saída
A saída consiste de N linhas, cada uma com a palavra primo, se o número for primo, ou a palavra
composto caso o número não seja primo (número composto). Note que as palavras devem ser grafadas,
necessariamente, com letras minúsculas.

Exemplos
Entrada
5
2
3
11
16
60

Saída
primo
primo
primo
composto
composto

Entrada
9
1200
1697
2712
2549
4723
7853
23557
23558
15485863

Saída
composto
primo
composto
primo
primo
primo
primo
composto
primo
*/
