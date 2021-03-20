//28 - União e intersecção de conjuntos

#include <stdio.h>
main(){
// c = união // d = intersecção
	int na = 0, nb = 0, nc = 0, nd = 0;

	int i, ia, ib, ok;
	int cont = 0, s = 0, aux = 0;

	scanf("%d", &na);
	while(na < 1 || na > 100){
		scanf("%d", &na);
	}

	scanf("%d",&nb);
	while(nb < 1 || nb > 100){
		scanf("%d",&nb);
	}

	int a[na], b[nb];

	i = 0; ia = 0;
	while(i < na){
		scanf("%d", &a[i]);
		while (ia < i) {
			while (a[i] == a[ia]) {
				scanf("%d", &a[i]);
			}
		ia++;
		}
	ia = 0; i++;
	}

	/////

	i = 0; ia = 0;
	while(i < nb){
		scanf("%d", &b[i]);
		while (ia < i) {
			while (b[i] == b[ia]) {
				scanf("%d", &b[i]);
			}
		ia++;
		}
	ia = 0; i++;
	}

	//////

	i = 0; ia = 0; aux = 0;

	while(i < nb){
		while (ia < na) {
				if (b[i] != a[ia]) {
				}else if (b[i] == a[ia]) {
					aux++;
				}
		ia++;
		}
		if (aux != 0) {
			cont ++; aux = 0;
		}
	ia = 0; i++;
	}

///

	ia = 0; i = 0; ok = 0; nd = 0;

	while(i < nb){
		while (ia < na) {
			if (b[i] == a[ia]) {
			nd++;
			}
		ia++;
		}
	ia = 0; i++;
	}

////

  nc = (na+nb - cont); int c[nc];

///////	UNIÃO ////

	i = 0; ia = 0; ib = 0;

	while(i < na){
		c[i] = a[i];
	s++; i++;
	}

	///

	ia = 0; ib = 0; i = 0; aux = 0; ok = 0;

	while(i < nb){
		while (ia < na) {
			if (b[i] == c[ia]) {
				aux++;
			}
		ia++;
		}
		if (aux == 0) {
			c[ok+s] = b[i];
			 ok++;
		}
		aux = 0; ia = 0; i++;
	}

	//// 	INTERSECÇÃO //

	i = 0; ia = 0; ib = 0; aux = 0; ok = 0; int d[nd];

		while(i < nb){
			while (ia < na) {
				if (b[i] == a[ia]) {
					aux++;
				}
			ia++;
			}

			if (aux != 0) {
				d[ok] = b[i];
				 ok++;
			}
			aux = 0; ia = 0; i++;
		}

/////
		// printf("Lista na\n");
		// i = 0;
		// while (i < na) {
		// 	printf("%d - %d\n", i, a[i]);
		// i++;
		// }
		// ///
		// printf("\nLista nb\n");
		// i = 0;
		// while (i < nb) {
		// 	printf("%d - %d\n", i, b[i]);
		// i++;
		// }
		//

		// UNIÃO //
		i = 0;
		if (nc == 0) {
				printf("()\n");
		}
		while (i < nc) {
			if (i == 0 && i == nc-1){
				printf("(%d)\n", c[i]);
			} else if (i == 0) {
				printf("(%d,", c[i]);
			} else if (i == nc-1){
				printf("%d)\n", c[i]);
			} else {
				printf("%d,", c[i]);
			}
		i++;
		}

		// INTERSECÇÃO //
		i = 0;
		if (nd == 0) {
				printf("()\n");
		}
		while (i < nd) {
			if (i == 0 && i == nd-1) {
				printf("(%d)\n", d[i]);
			} else if (i == 0) {
				printf("(%d,", d[i]);
			} else if (i == nd-1){
				printf("%d)\n", d[i]);
			} else {
				printf("%d,", d[i]);
			}
		i++;
		}

}

/*
28 - União e intersecção de conjuntos (++++)

Faça um programa que leia 2 conujuntos (A e B) válidos, sem elementos repetidos, cada um com no
mínimo 1 e no máximo 100 elementos, e imprima A ∪ B e A ∩ B.
	Entrada
Durante a entrada de dados, o programa deve ler tamanhos válidos para os conjuntos A e B. Caso o
tamanho informado seja inválido, o programa deve refazer a leitura do tamanho do conjunto. A leitura deve
ser feita separadamente. Uma vez definido os tamanhos dos vetores, o programa deve ler os elementos
de cada vetor. Em seguida, o programa deve apresentar na tela uma linha com o conjunto união, ou seja,
todos os elementos que ocorrem em A e B, e outra linha contendo o conjunto intersecção, ou seja, todos os
elementos que ocorrem em A e B.
O programa deve ler um número inteiro T A , correspondente ao tamanho do conjunto A, até que T A
seja válido, em seguida outro número inteiro T B , correspondente ao tamanho do conjunto B até que T B seja
válido. Uma vez definido os tamanhos dos vetores, o programa deve ler T A + T B elementos, correspondentes
aos elementos de A e B. Durante a leitura dos elementos de um conjunto, o programa deve permitir somente
a leitura de elementos diferentes aos já presentes no conjunto. Caso um elemento lido já esteja presente no
conjunto, o programa deve ignorá-lo e realizar uma nova leitura do elemento.
	Saída
O programa deve apresentar na tela uma linha com o conjunto união, ou seja, todos os elementos que
ocorrem em A e B, e outra linha contendo o conjunto intersecção, ou seja, todos os elementos que ocorrem
em A e B. Os elementos dos conjuntos devem ser apresentados entre parênteses, separados por vírgula e
sem espaços.
	Observações
Não se esqueça que um conjunto válido não permite a existência de elementos repetidos.
*/
