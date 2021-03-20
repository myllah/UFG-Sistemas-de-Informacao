//5-Soma de progressão aritmética
#include <stdio.h>
main(){

	int i = 0, inicial, razao, elementos;
    int s = 0;

	scanf("%d %d %d", &inicial, &razao, &elementos);

	while(i < elementos){

		s = s + (inicial + i*razao);
		i++;

	}
	printf("%d\n", s);

}

/*
5-Soma de progressão aritmética (+)
Nerdilton adora Matemática, mas ele não tem a memória muito boa para memorizar fórmulas. Geralmente
ele entende como a fórmula funciona e deriva o valor de saída da fórmula. Ele precisa responder a um
conjunto de exercícios que pedem a soma dos n primeiros elementos de uma progressão aritmética, dados
o primeiro elemento da progressão e a razão. Escreva um programa que seja capaz de encontrar a soma
dos n primeiros termos de uma progressão aritmética sem usar a fórmula fechada da soma dos elementos
de uma progressão aritmética. Lembre-se que uma progressão aritmética com valor inicial a 1 e razão r é
a sequência formada por: a 1 , a 1 + r, a 1 + 2r, · · · , a 1 + (n − 1)r. O programa precisa computar
a soma dos valores dessa sequência.
	Entrada
A entrada conterá uma linha com três números inteiros separados entre si por um caractere de espaço.
O primeiro número corresponde ao valor inicial da progressão aritmética, o segundo, corresponde à
razão da mesma e o terceiro corresponde ao número n de elementos da progressão.
	Saída
O programa deve imprimir o valor da soma dos n primeiro elementos da progressão, seguido de um
caracter de quebra de linha.
*/
