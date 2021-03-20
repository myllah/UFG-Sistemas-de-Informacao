#include <stdio.h>

void torre(int nDiscos, char dePino, char paraPino, char auxPino) {

	if(nDiscos == 1) {
		printf("(%c,%c)\n", dePino, paraPino);
		return;
	}

	torre(nDiscos-1, dePino, auxPino, paraPino);

	printf("(%c,%c)\n", dePino, paraPino);

	torre(nDiscos-1, auxPino, paraPino, dePino);
}

main() {

	int n; scanf("%d",&n);
	
	torre(n, 'O', 'D', 'A');
	printf("\n");
 }

/*

8 Torre de Hanoi (+++)

Torre de Hanói é um "quebra-cabeça"que consiste em uma base contendo três pinos (ou hastes), em um dos quais são dispostos alguns discos, uns sobre os outros, em ordem crescente de diâmetro, de cima para baixo. O problema consiste em passar todos os discos de um pino para outro qualquer, usando um dos pinos como auxiliar, de maneira que um disco maior nunca fique em cima de outro menor, em nenhuma situação.
O número de discos pode variar, sendo que o mais simples contém apenas três discos. (Fonte: Wikipédia)
Suponha que os pinos se chamam “O” (origem), “D” (destino), “A” (auxiliar), faça um programa recursivo que resolva a Torre de Hanói.

Entrada
O arquivo de entrada consiste de uma única linha contendo um número natural n, n ∈ N∗ | 2 ≤ n ≤ 1000, que indica a quantidade de discos contidos no pino de origem – pino “O”. Os discos são, sempre, numerados de 1 a n, indicando o diâmetro do disco (numa determinada unidade de medida qualquer).

Saída
A saída deve conter os movimentos a serem realizados para se resolver a Torre de Hanói com os n discos.
Cada movimento deve estar em uma linha no formato de par ordenado na forma (<pino de origem>,<pino de destino>), onde <pino de origem> e <pino de destino> ∈ {O,D,A}.

Exemplos
Entrada
2
Saída
(O,A)
(O,D)
(A,D)

Entrada
3
Saída
(O,D)
(O,A)
(D,A)
(O,D)
(A,O)
(A,D)
(O,D)

Observação: Note que não há “espaço em branco” entre as letras indicativas dos pinos nas respostas, como também para os parênteses. Além disso, todas as letras são grafadas em maiúsculas.

*/
