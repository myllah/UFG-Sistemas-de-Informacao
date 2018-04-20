//25 - N ao cubo
#include <stdio.h>

main(){

	int k = 1, n, i, start, soma;

	scanf("%d", &n);

	while(k <= n) {
		soma = 0;
		for(start = 1; soma != (k * k * k); start = start +2){
			soma = 0;
			for (i = 0; i < k; i++){
				soma = soma + start + 2*i;
			}
		}
		start = start - 2;
		printf("%d*%d*%d = %d", k, k, k, start);
		for (i = 1; i < k; ++i)
		{
			printf("+%d", start + 2*i );
		}
		printf("\n");
		k++;
	}

}

/*
25 - N ao cubo (+++)

(IME-USP) Sabe-se que um número da forma n³ é igual a soma de n ímpares consecutivos.
Exemplo: 1³ = 1, 2³ = 3 + 5, 3³ = 7 + 9 + 11 e 4³ = 13 + 15 + 17 + 19. Dado m, determine os ímpares
consecutivos cuja soma é igual a n³ para n assumindo valores de 1 a m.
	Entrada
O programa deve ler um número inteiro maior que zero.
	Saída
O programa deve apresentar m linhas com a seguinte mensagem: "k ∗ k ∗ k = x 1 + x 2 + . . . + x k ", onde
k = 1, 2, . . . , m e x i é a sequência de números ímpares consecutos.
*/
