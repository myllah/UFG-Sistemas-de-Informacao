//5 - Maior Elemento

#include <stdio.h>
main(){

	int i = 1, n, maior, anterior, proximo, indice;

	do{
        i = 0;
        indice = 0;

        scanf("%d", &n);

        if(n == 0){ return 0; }

        int a[n];

        if(n >1 && n <= 10000){
            while(i < n){

                scanf("%d", &a[i]);
            i++;
            }
            anterior = a[0];
            maior = anterior;

            i = 0;
            while (i < n)
            {
                proximo = a[i];

                if (proximo > maior)
                {
                    maior = proximo;
                    indice = i;
                }

                anterior = proximo;
            i++;
            }
        }
        printf("%d %d\n", indice, maior);
    }while(n != 0);
}

/*
5 - Maior Elemento (+)

Faça um programa que receba vários vetores e informe para cada um deles qual o maior elemento e o
indice (da primeira ocorrência) em que encontra-se tal elemento.
	Entrada
O programa possui vários casos de testes. A primeira de cada caso contém um inteiro N, 1 < N ≤ 10000,
representando o tamanho do vetor. A segunda linha conterá N inteiros entre 0 e 1000, representando os N
elementos do vetor. A entrada termina quando N=0.
	Saída
O programa gera N linhas de saída, com dois inteiros separados por um espaço em branco. O primeiro
inteiro é o índice da primeira ocorrência do maior elemento do vetor e o segundo inteiro é o maior valor do
vetor. Após a impressão de cada saída, inclusive a última, quebre uma linha.
*/
