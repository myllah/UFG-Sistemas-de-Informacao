#include <stdio.h>
main(){
    int i= 1;
    int idade, contador = 0;
    char sexo;

    do{
        printf("Informe a idade\n"); scanf(" %d", &idade);
        printf("Informe o sexo, f para feminino e m para masculino\n"); scanf(" %c", &sexo);

        if ((idade > 21 ) && (sexo == 'm')){
            contador ++;
        }

        i++;
    }while(i <= 20);

    printf("\nHá %d pessoas do sexo masculino e tem mais de 21 anos\n", contador);

}

/*
Entrar idade e sexo de 20 pessoas. Imprimir Quantas são do sexo masculino e tem mais de 21
anos
*/
