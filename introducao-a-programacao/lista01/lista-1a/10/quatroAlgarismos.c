//10 Quatro Algarismos (++)

#include<stdio.h>
#include<math.h>

main(){

	int num, dig1, dig2, dig3, dig4, newNum;
	scanf("%d",&num);

	dig3=num%10;
	num=num/10;

	dig2=num%10;
	num=num/10;

	dig1=num%10;

	dig4 = (dig1 + dig2*3 + dig3*5)%7;

	newNum = dig1*1000 + dig2*100 + dig3*10 + dig4;

    printf("O NOVO NUMERO E = %d\n", newNum);
}

/*
10 Quatro Algarismos
Dado um número inteiro de três algarismos, construir outro número inteiro de quatro algarismos de
acordo com a seguinte regra: os três primeiros algarismos, contados da esquerda para a direita são iguais
ao número dado. O quarto algarismo é um digito de controle calculado da seguinte forma: primeiro
algarismo + segundo algarismo×3 + terceiro algarismo×5. O dígito de controle é igual ao resto da
divisão dessa soma por 7.
		Entrada
O programa deve ler uma linha de dados contendo apenas um número com três algarismos.
		Saída
O programa deve imprimir uma linha contendo a frase: O NOVO NUMERO E = X, onde X é o novo
número inteiro com quatro algarismos, seguido por um caractere de quebra de linha: ‘\n’.
*/