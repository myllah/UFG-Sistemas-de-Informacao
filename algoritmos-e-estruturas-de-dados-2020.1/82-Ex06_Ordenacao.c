#include <stdio.h>

void quickSort(int *vetor, int inicio, int fim)
{
   int i, j, meio, aux;

   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];

   do
   {
      while(vetor[i] < meio && i<fim)
         i++;
      while(vetor[j] > meio && j>inicio)
         j--;
      if(i <= j)
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);

   if(inicio < j)
      quickSort(vetor, inicio, j);
   if(i < fim)
      quickSort(vetor, i, fim);
}



int main (){

    int tamanho,i,l,k;
    scanf("%d", &tamanho);
    int vet[tamanho];
    for(i=0; i < tamanho;i++){
        scanf("%d ", &vet[i]);
    }

    scanf("%d %d", &l, &k);

    quickSort(vet, 0, tamanho-1);
    printf("%d\n", vet[k-1]+vet[l-1]);

}

