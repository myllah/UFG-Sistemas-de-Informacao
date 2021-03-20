// 2 - Contagem
#include <stdio.h>
int main(){

    int i = 0, n, k, cont = 0;

    scanf("%d", &n);

    while(n < 1 || n > 1000){
        scanf("%d", &n);
    }

    int v[n];

    while(i < n){
        scanf("%d", &v[i]);
    i++;
    }

    scanf("%d", &k);

    i = 0;
    while(i < n){

        if(k <= v[i]){
            cont++;
        }

    i++;
    }

    printf("%d", cont);
    return 0;
}

/*
2 - Contagem (+)

Dado um vetor V de tamanho N e um inteiro K, contabilize quantos elementos de V são maiores ou
iguais ao inteiro K.
    Entrada
O programa terá apenas um caso de teste. O programa deve ler, obrigatoriamente, um número N que
pertença ao intervalo 1 ≤ N ≤ 1000. Se N lido não for válido, o programa deve fazer uma nova leitura de N.
Caso N seja válido, N representa o tamanho do vetor V. Na próxima linha há N números inteiros separados
por um espaço em branco cada, representando cada elemento do vetor V. E finalmente, na última linha há
um inteiro K.
    Saída
Seu programa gera apenas uma linha de saída contendo um número inteiro representando quantos elementos
do vetor V são maiores ou iguais ao inteiro K. Após a impressão do valor quebre uma linha.
*/
