//11. Número Invertido (+++)

#include<stdio.h>
#include<math.h>

main(){
	int num;
	int newNum;
	scanf("%d",&num);
    
    /*
    newNum = 0;
	while(num > 0){
		newNum = newNum * 10;
		newNum = newNum + (num % 10);
		num = num /10;
	}
	*/

	if(num > 0){
		newNum = num % 10;
		num = num /10;

		newNum = newNum * 10;
		newNum = newNum + (num % 10);
		num = num /10;

		newNum = newNum * 10;
		newNum = newNum + (num % 10);
	}
	printf("%d\n", newNum);

}

/*
Número Invertido (+++)
Escreva um programa para ler um número de três dígitos e imprimir o número invertido.
		Entrada
A entrada contém apenas um número com três dígitos. Esse número é diferente de zero e não é múltiplo
de 10 ou 100.
		Saída
A saída deve conter apenas uma linha com o número correspondente ao valor da entrada, com seus
dígitos invertidos. Logo após o número, deve ser impresso o caractere de quebra de linha: ’\n’.
*/