#include <stdio.h>
main() {
    int x, i = 1, cont=0;

    //printf("Digite um numero\n");
    scanf("%d", &x);

    if (x<=0) {
    	printf("Numero invalido!\n");
    	return 0;
    }

    while(i<=x){

        if(x%i==0){
            cont++;
        }
        i++;
    }

    if(cont>2 || x==1){
        printf("NAO PRIMO\n");
    }else{
        printf("PRIMO\n");
    }
}

/*
15
Número primo (++)
(++)
Faça um programa que leia um número N e informa se o número é primo ou não.
Entrada
O programa deverá ler um número inteiro N positivo.
Saída
O programa deverá apresentar a mensagem "PRIMO"caso N seja primo e "NAO PRIMO"caso contrario.
Caso o valor de N não seja um número inteiro positivo, o programa deve apresentar a mensagem "Numero
invalido!"
*/
