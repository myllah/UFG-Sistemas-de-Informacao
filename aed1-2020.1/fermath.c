#include <stdio.h>

int primo(int nPrimo){
    int i=1, div=0;
   // printf("primoo 1\n");
    while (i<= nPrimo) {
        if(nPrimo%i==0) div++;
        i++;
	}
    if (div==2) {
      //  printf("%d ", nPrimo);
        return 1;
    } else {
        return 0;
    }

}

void fermath(int n,int *vetor,int maior){

    int i,m,cont=0,resultado=0,primos=0,j=0;
    int vet[maior];

    for(i=1;i<=maior;i++){
        resultado = primo(i);
        if(resultado == 1){
            vet[primos] = i;
            primos++;
        }
    }

     for(i=0;i<primos;i++){

        //   printf("%d ", vet[i]);

    }
    while(j < primos){
        for(i=1;i<primos;i++){
            for(m=primos;m>=0;m--){
                resultado = (i*i) + (m*m);

                if((resultado == vet[j]) && (resultado != vet[cont-1])){
                    vet[cont] = vet[j];
                   // printf("%d-%d = %d <----> %d\n",i,m ,resultado,vet[j]);
                    // printf("%d ", vet[cont]);
                    cont++;

                }
            }
        }
        j++;
    }
    j=0;
    while(j < n){
        if((j+1) % 2 ==0){
             for(i=cont-1;i>=0;i--){
               if(vet[i] < vetor[j]){
                    printf("%d ", vet[i]);
               }
            }
            printf("\n");
        }else{
            for(i=0;i<cont;i++){
              if(vet[i] < vetor[j]){
                    printf("%d ", vet[i]);
               }
            }
            printf("\n");
        }
    j++;
    }


}

int main (){

    int n,maior=-1,i;
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
         scanf("%d", &vetor[i]);
         if(vetor[i] > maior){
            maior = vetor[i];
         }
    }
    fermath(n,vetor,maior);
}
