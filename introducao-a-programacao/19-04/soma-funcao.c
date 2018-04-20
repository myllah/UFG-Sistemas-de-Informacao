#include <stdio.h>

int soma (int a, int b){
	int soma2numeros = a + b;
	return (soma2numeros);
}

main (){
	int A, B;
	printf("Insira dois numeros\n");
	scanf("%d %d", &A, &B);

	printf ("A soma dos dois numeros eh = %d", soma (A, B));
}
