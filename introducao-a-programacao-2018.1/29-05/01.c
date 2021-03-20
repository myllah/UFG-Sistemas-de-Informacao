#include <stdio.h>
struct lista {
        char titulo[200];
        char autor[200];
        float preco;

    }livro[3];

int main(){

    int i = 0;
    do{
        scanf(" %[^\n]", livro[i].titulo); getchar();
        scanf(" %[^\n]", livro[i].autor); getchar();
        scanf("%f", &livro[i].preco);
        i++;
    } while(i < 3);

    printf("\nEsses sao os livros cadastrados:\n");

    for(i = 0; i < 3; i++){
        printf("%s\n", livro[i].titulo);
        printf("%s\n", livro[i].autor);
        printf("%.2f\n", livro[i].preco);
        puts("");
    }

return 0;
}

/*
1) Escrever um programa que cadastre livros. Insira o título, autor e preço. Em seguida imprima os
dados de todos os livros cadastrados.
*/
