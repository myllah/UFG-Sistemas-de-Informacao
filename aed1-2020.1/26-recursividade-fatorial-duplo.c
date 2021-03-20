#include <stdio.h>

int fatorialduplo(int n){
	if(n%2 == 0){
		fatorialduplo(n-1);
	}else{
		if(n >= 1)
		return(n * fatorialduplo(n-2));
	}
}

int main(){
	
	int n;
	scanf("%d", &n);
	printf("%d\n", fatorialduplo(n));

return (0);
}

/*Fatorial duplo (++)
Pode-se definir uma função f̈(n), fatorial duplo de n, com n ∈ N, como sendo o produto de todos os
números naturais ímpares de 1 até n, inclusive este, quando ele é ímpar. Assim, por exemplo, tem-se que:
f̈(1) = 1
f̈(2) = 1
f̈(3) = 3
f̈(5) = 15
Você deve escrever uma função recursiva, em C, que seja capaz de, recebendo n, imprimir o valor de f̈(n).

Entrada
A única linha de entrada contém o valor de n, com 1 ≤ n ≤ 100.

Saída
Imprima uma única linha de saída, com o valor de f̈(n).

Exemplo
Entrada
1
Saída
1
Entrada
7
Saída
105
Entrada
10
Saída
945
*/
