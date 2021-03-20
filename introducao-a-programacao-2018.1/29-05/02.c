#include <stdio.h>
struct lista {
        char nome[200];
        int id;
        float preco;

    }produto[3];

int main(){

    int i = 0;
    do{

        printf("Digite o nome do produto:\n");
        scanf(" %[^\n]", produto[i].nome); getchar();

        printf("Digite o codigo do produto:\n");
        scanf("%d", &produto[i].id);

        printf("Digite o preco do produto:\n");
        scanf("%f", &produto[i].preco);
        i++;
    } while(i < 3);

    printf("\nEsses sao os produtos cadastrados:\n");

    for(i = 0; i < 3; i++){
        printf("%s --- %d\n", produto[i].nome, produto[i].id);
    }

    printf("\nDigite um codigo de um produto a ser procurado:\n");
    int n;
    scanf("%d", &n);

    int flag = 0;

    for(i = 0; i < 3; i++){
        if(n == produto[i].id){
            printf(" codigo ----  ");
            printf(" nome ----  ");
            printf(" preco \n");

            printf("    %d    ---   ", produto[i].id);
            printf("  %s    ---   ", produto[i].nome);
            printf("  %.2f\n", produto[i].preco);
            flag++;
        }
    }

return 0;
}

/*
2) Escrever um programa que cadastre produtos, com os seguintes dados: nome, código e preço. Em
seguida, imprima uma lista com o nome e código de todos os produtos cadastrados. Por último,
consulte o preço de um produto através de seu código.
*/
