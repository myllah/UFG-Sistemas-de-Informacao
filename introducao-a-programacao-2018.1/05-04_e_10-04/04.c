#include <stdio.h>
main(){

    int i;

	for(i=11; i< 100; i++){

		if ((i%10 != 0) && (i%(i/10) == 0)){
            printf("%d\n", i);
		}
	}
}

/*
Criar um algoritmo que imprima todos os números inteiros positivos no intervalo aberto entre 10
e 100 de modo que:
• não termine em zero
• se o digito da direita for removido, o número restante é divisor do número original
ex: 26
se retirar o número da direita fica 2
2 é divisor de 26 (que é o número original)
*/
