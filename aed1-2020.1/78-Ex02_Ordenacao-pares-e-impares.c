/*

Separando Números Pares de Números Ímpares (++)

Tales, um menino muito levado, pegou na escola uma caixa repleta de números naturais impressos em
cartelas de EVA (Espuma Vinílica Acetinada) e derrubo-os sobre o chão da sala. Por estranho que pareça,
ao cairem os números formaram uma fila indiana de tal maneira que ficaram com seus valores distribuídos
aleatoriamente nesta fila.
Sabe-se que na caixa havia n ∈ N
∗ números, mas seus valores são desconhecidos.
Você deverá ordenar esta fila, segundo as seguintes regras:
• primeiro devem vir todos os números pares, em ordem crescente;
• depois devem vir os números ímpares, em ordem decrescente.

Entrada
A primeira linha de entrada contém um único inteiro positivo n, com (1 < n < 100), indicando a quantidade de números existente na caixa que Tales derrubou.
As próximas n linhas conterão, cada uma delas, um número natural.

Saída
Apresente todos os valores lidos na entrada segundo a ordem descrita anteriormente. Cada número deve
ser impresso em uma linha, conforme exemplo abaixo.

Exemplos
Entrada Saída
10
4
32
34
543
3456
654
567
87
6789
98
4
32
34
98
654
3456
6789
567
543
87
4
Entrada Saída
7
2
5
6
51
512
913
375
2
6
512
913
375
51
5
Entrada Saída
8
6
2
8
12
202
304
18
10
2
6
8
10
12
18
202
304
Entrada Saída
8
1
3
5
7
11
23
45
81
81
45
23
11
7
5
3
1

*/


#include <stdio.h>


void quickSort(int *vetor, int inicio, int fim){
   int i, j, meio, aux;

   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];

   do{
      while(vetor[i] < meio && i<fim){
         i++;
	 }
      while(vetor[j] > meio && j>inicio){
         j--;
	 }
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);

   if(inicio < j){
      quickSort(vetor, inicio, j);
  }
   if(i < fim){
      quickSort(vetor, i, fim);
  }
}


int main (){

    int tamanho,i;
    scanf("%d", &tamanho);
    int vet[tamanho];
    for(i=0;i<tamanho;i++){
        scanf("%d", &vet[i]);
    }
     quickSort(vet,0,tamanho-1);
     for(i=0;i<tamanho;i++){
        if(vet[i]%2==0){
            printf("%d ",vet[i]);
        }
    }
     for(i=tamanho-1;i>=0;i--){
        if(vet[i]%2!=0){
            printf("%d ",vet[i]);
        }
    }
}
