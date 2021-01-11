#include <stdio.h>

int main(){

	int n1, n2;
	int a, b, c;

	//printf("Digite dois números de três digitos\n");
	scanf("%d %d", &n1, &n2);

	if(n1 == n2){
		printf("Os números são iguais");
	}
	
	a = n1/100;
	b = n1/10%10;
	c = n1%10;

	n1 = 100*c + 10*b + a;

	a = n2/100;
	b = n2/10%10;
	c = n2%10;

	n2 = 100*c + 10*b + a;

	if(n1 > n2){
		printf("%d", n1);
	} else{
		printf("%d", n2);
	}
return (0);
}

/* José (+)

João tem um irmão mais novo, José, que começou a ir à escola e já
está tendo problemas com números.
Para ajudá-lo a “pegar o jeito” com a escala numérica, a professora
de José escreve dois números de três
dígitos e pede ele para comparar esses números.
Entretanto, ao invés de interpretá-los com o dígito mais significativo
à esquerda, ele deve interpretá-los com
o dígito mais significativo à direita. Ele tem que dizer à professora
qual o maior dos dois números.
Escreva um programa em C que seja capaz de verificar as respostas de José.

    Entrada
A entrada conterá uma única linha com dois números de três dígitos,
A e B, os quais não serão iguais.

    Saída
A saída deve conter, uma linha com o maior dos números na entrada,
comparados conforme descrito no enunciado da tarefa.
O número deve ser escrito invertido, para mostrar a José como ele
deve lê-lo e, havendo zeros à esquerda do número, eles devem ser
escritos, como mostra o terceiro exemplo a seguir.

    Exemplos
Entrada     Saída
483 583     385
Entrada     Saída
734 893     437
Entrada     Saída
160 720     61
Entrada		Saída
493 583		394
Entrada		Saída
493 589		985
Entrada		Saída
100 200		2
*/
