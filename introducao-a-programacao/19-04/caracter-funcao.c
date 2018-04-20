#include <stdio.h>

int tipoletra (int Letra){
    int retorno;
    if( Letra == 'a' || Letra == 'e' || Letra == 'i' || Letra == 'o' || Letra == 'u'){
    retorno = 1;
    }

    else{
    retorno = 0;
    }
    return retorno;
}

main(){

    char letra;
	printf("Insira uma letra. \n(Se a letra for vogal, o programa ira retornar 1. Caso contrario, retornara 0.)\n\n");
    scanf( "%c", &letra);

    printf("%d\n", tipoletra(letra));

}

/*
    Ler um caracter
    retornar 1 = vogal;
    retornar 0 = outra;
*/
