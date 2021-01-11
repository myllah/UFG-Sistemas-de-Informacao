#include <stdio.h>

int main(){
	
	int i, j;

    int tam;
    scanf("%d", &tam);
    
    int vet[tam];

	double multi = 1;
	// lendo o vetor e descobrindo o produto de todos os valores do vetor
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]); // lendo cada elemento do vetor
        multi *= vet[i]; // multiplicando cada elemento
    }

    int novoValor = 0;
    double testandoMulti;

	// descobrindo qual valor multiplicado por si mesmo x vezes é maior que o produto dos elementos do vetor lido (x igual ao tam do vetor)
    i = 1;
    while(1){
		testandoMulti = 1;
        for(j = 0; j < tam; j++){
            testandoMulti *= i;
        }
        if(testandoMulti > multi){
            novoValor = i;
            break;
        }
        i++;
    }

	// atualizando o valor dos elementos do vetor
    for(i = 0; i < tam; i++){
        vet[i] = novoValor;
    }

	// mostrando o vetor atualizado
    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
}

/*
Godofredo, um estagiário na área de tecnologia da informação da empresa TSE - Turing Software
Development Enterprise, recebeu uma tarefa para hoje:
Há uma vetor A que possui n números naturais estritamente positivos, com n ∈ N ∗ . Sua tarefa é atualizar
todos os elementos deste vetor para algum valor mínimo, x min , ou seja, após a atualização teremos que:
A[i] = x min , com 1 ≤ i ≤ n.
Isto deve feito de modo tal que o produto de todos os elementos do novo vetor A, que chamaremos de A',
seja estritamente maior que o produto de todos os elementos do vetor A original.
Observe que todos os x min devem ser tão pequenos quanto possível, desde que satisfaçam à condição esta-
belecida.

Saída
A saída deverá conter uma única linha, com os novos valores de cada dos elementos de A, do primeiro
ao n-ésimo, nesta ordem.

Exemplos
Entrada
5
4 2 1 10 6
Saída
4 4 4 4 4
* 
Entrada
10
1 2 4 8 16 32 64 128 256 512
Saída
23 23 23 23 23 23 23 23 23 23
*/
