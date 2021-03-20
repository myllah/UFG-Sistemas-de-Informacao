#include <stdio.h>

int main(){

    char vetor[1000];
    int qtd, flag;
    int i, j;
    //printf("\nDigite a quantidade de testes: ");
    scanf("%d", &qtd);

	i = 0;
	//printf("\nDigite a string da arvore: ");
    while(i < qtd){
        flag = 0;
        getchar();
        scanf("%[^\n]", vetor);

       //printf("\nEsse é o vetor: %s\n", vetor);

        for(j = 0; vetor[j] != '\0'; j++){
            if((vetor[j] == 'A') || (vetor[j] == 'a') || (vetor[j] == 'E') || (vetor[j] == 'e') || (vetor[j] == 'I') || (vetor[j] == 'i') || (vetor[j] == 'O') || (vetor[j] == 'o') || (vetor[j] == 'U') || (vetor[j] == 'u')){
                flag++;
            }
        }
        //printf("Resposta: ");
        printf("%d\n", flag);

        flag = 0;
    i++;
    }

}
