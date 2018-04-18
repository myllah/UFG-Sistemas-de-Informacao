#include<stdio.h>
#include<math.h>

main(){

	int num1, num2, operacao;
	printf("Informe o primeiro numero.\n");
	scanf("%d", &num1);
	printf("Informe o segundo numero.\n");
	scanf("%d", &num2);

	printf("O que você deseja fazer?\n- 1 Média entre os números digitados \n- 2 Diferença do maior pelo menor \n- 3 Produto entre os números digitados\n");
	scanf("%d", &operacao);



	if(operacao == 1){
        printf("A media entre os dois números é: %d", (num1 + num2)/2);
	} else if(operacao == 2){
        if(num1>num2){
            printf("A diferença do maior numero pelo menor e: %d\n",(num1 - num2));
        } else if(num1<num2){
            printf("A diferença do maior numero pelo menor e: %d\n",(num2 - num1));
        } else{
            printf("A diferença do maior numero pelo menor e: %d\n",(num1 - num2));
            }
    }else if (operacao == 3){
        printf("O produto entre os números digitados: %d", num1 * num2);
	} else{
        printf("Valor Inválido");
	}

}

/*
Questão 02 (3,5 pontos) – Faça um programa que receba dois números inteiros e execute as
operações listadas a seguir, de acordo com a escolha do usuário .
Escolha do usuário Operação
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do
programa.
*/
