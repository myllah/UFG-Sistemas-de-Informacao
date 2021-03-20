//21 - José
#include <stdio.h>
main(){
	
	int i = 1, t = 1;
	int n1, un1, dn1, cn1;
	int n2, un2, dn2, cn2;
	scanf("%d", &t);

	while(i <= t){

		scanf("%d %d", &n1, &n2);

		un1 = (n1)%10;
		dn1 = (n1/10)%10;
		cn1 = (n1/100)%10;
		n1 = (un1*100) + (dn1*10) + (cn1);

		un2 = (n2)%10;
		dn2 = (n2/10)%10;
		cn2 = (n2/100)%10;
		n2 = (un2*100) + (dn2*10) + (cn2);

		if (n1 < n2)
		{
			printf("%d\n", n2);
		} else if (n1 > n2)
		{
			printf("%d\n", n1);
		} else{
			printf("NUMEROS IGUAIS\n");
		}

		i++;
	}
}

/*
21 - José (+++)
João tem um irmão mais novo, José, que começou a ir à escola e já está tendo problemas com números.
Para ajudá-lo a pegar o jeito com a escala numérica, sua professora escreve dois números de três dígitos
e pede a José para comparar esses números. Mas em vez de interpretá-los com o dígito mais significativo
à esquerda, ele deve interpretá-lo com o dígito mais significativo à direita. Ele tem que dizer à professora
qual o maior dos dois números. Escreva um programa que irá verificar as respostas de José.
	Entrada
A entrada conterá um inteiro T , o número de casos de testes, e, para cada caso de teste, uma única linha
com dois números de três dígitos, A e B, os quais não serão iguais e não conterão zeros.
	Saída
A saída deve conter, numa linha para cada caso de teste, com o maior dos números na entrada, compa-
rados como descrito no enunciado da tarefa. O número deve ser escrito invertido, para mostrar a José como
ele deve lê-lo.
*/