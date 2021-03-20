#include <stdio.h>
main(){

int n, i, j, temp;

do{
  scanf("%d", &n);

  while (n <= 1 || n > 10000) {
    if (n == 0) {
      return 0;
    } else{
      scanf("%d", &n);
    }
  }

int vetor[n];
  i = 0;
  while (i < n) {
    scanf("%d", &vetor[i]);
  i++;
  }

  for (i = 1; i < n; i++){
    j = i;
    while (j > 0 && vetor[j-1] > vetor[j]){
       temp = vetor[j];
       vetor[j] = vetor[j - 1];
       vetor[j -1] = temp;
    j--;
    }
  }

  for (i = 0; i < n; i++) {
    if (i == 0) {
      printf("%d", vetor[i]);
    } else{
      printf(" %d", vetor[i]);
    }
  }
} while(n != 0);

printf("\n");
}
