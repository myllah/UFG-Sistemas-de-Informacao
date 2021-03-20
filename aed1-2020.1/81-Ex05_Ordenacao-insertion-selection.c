#include <stdio.h>
int cont_insertion = 0;
int cont_selection = 0;

void insercao (int *vetor, int n){
	int k, j, aux;
   for (k = 1; k <= n - 1; k++){
    //  printf("\n[%d] ", k);

      aux = vetor[k];
      j = k - 1;
      while (j >= 0 && aux < vetor[j]) {
         //printf("%d, ", j);

         vetor[j+1] = vetor[j];
         cont_insertion++;
         j--;
      }

      vetor[j+1] = aux;
      cont_insertion++;
   }
}

int indiceMenor(int vet[], int tam, int ini){
	int min = ini, j;
	for(j=ini+1; j<tam; j++){
		if(vet[min] > vet[j])
			min = j;
	}
return min;
}

void selecao(int vet[], int tam){
	int i, min, aux;
	for(i=0; i<tam; i++){
		min = indiceMenor(vet, tam, i); //Acha posicao do menor elemento a partir de i
		if(vet[i] != vet[min]){
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
			cont_selection++;
		}
	}
}

int main (){

    int tamanho,i;
    scanf("%d", &tamanho);
    int vet[tamanho], vet2[tamanho];
    for(i=0;i<tamanho;i++){
        scanf("%d", &vet[i]);
        vet2[i] = vet[i];
    }
  
    insercao(vet,tamanho);
    
    selecao(vet2,tamanho);
  

    printf("%d\n", cont_insertion - cont_selection);

}
/**
20
33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52
19
* 
* 
20
52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33
199
* 
* 
10
8 6 4 3 2 1 7 9 5 10
23
* 
 **/
