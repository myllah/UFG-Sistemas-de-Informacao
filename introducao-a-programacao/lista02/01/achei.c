//1 - Achei
#include <stdio.h>
int main(){

    int n, m, i = 1, im = 1, j, achei;
    scanf("%d", &n);
    int v[n];

    if(n >= 1 && n <= 100000){
        while(i <= n){
            scanf("%d", &v[i]);
            i++;
        }
    }

    scanf("%d", &m);

    while(m < 1 || m > 1000){
       scanf("%d", &m);
    }

    while(im <= m){
        i = 1;
        achei = 0;
        scanf("%d", &j);

        while(i <= n){
            if (v[i] == j){
                achei = 1;
            }
        i++;
        }

        if (achei == 1) {
            printf("ACHEI\n");
        } else{
            printf("NAO ACHEI\n");
        }

    im++;
    }
    return 0;
}

/*
1 - Achei (+)

Faça um programa que receba um vetor V com N números inteiros e posteriormente receba M números
e verifique se eles estão ou não no vetor.
    Entrada
O programa terá apenas um caso de teste. Na primeira linha do caso de teste há um número inteiro
N, 1 ≤ N ≤ 100000, representando o tamanho do vetor V. Na linha seguinte haverá N números inteiros
separados por um espaço em branco, que são nos N valores do vetor V. Na terceira linha será informado
um número inteiro M, 1 ≤ M ≤ 1000, representando a quantidade de buscas que serão efetuadas no vetor.
Logo em seguida haverá M linhas, cada uma com um número inteiro que deve ser buscado no vetor V.
    Saída
Seu programa gera M linhas de saída. Cada uma com o resultado da Busca dos M números inteiros no
vetor V. Quando o valor estiver no vetor V escreva “ACHEI”, quando não estiver escreva “NAO ACHEI”,
com todas as letras maiúsculas e sem acentos. Ao final quebre uma linha
*/
