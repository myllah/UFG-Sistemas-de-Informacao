#include <stdio.h>

int troca(int l, int *v){
	int i, j;
	int flag = 0;

	for (i = 0; i < l; i++){
		for (j = i+1; j < l; j++){
			if(v[i] > v[j]){
				flag ++;
			}
		}
	}	
	return flag;
}

int main(){
	int i, j;
	//printf("\nDigite o valor para n ");
	int n; scanf("%d", &n);

	for(i = 0; i < n; i++){
		//printf("\nDigite o valor para l ");
		int l; scanf("%d", &l);
		int v[l];
		for(j = 0; j < l; j++){
			//printf("\nDigite o valor para v[%d] ", j);
			scanf("%d", &v[j]);
		}
		
		printf("%d\n", troca(l, v));
	}
return (0);
}


/*Organizador de Vagões (++)
Na estação de trem você ainda pode encontrar o último dos(as) organizadores(as) de vagões de trens
(OVT).
Um(a) OVT é um(a) prestador(a) de serviços, terceirizado(a), cujo trabalho é apenas o de reordenar os
vagões do trem, trocando-os de posição conforme determinado.
Uma vez que os vagões são organizados numa ordem considerada ótima, o condutor pode desconectar cada
vagão e colocá-los na estação.
O título OVT é dado à pessoa que realiza esta tarefa, cuja estação fica perto de uma ponte. Ao invés da
ponte poder subir ou descer, ela roda sobre um pilar que fica no centro do rio. Após rodar 90 , os barcos
podem passar pela lateral esquerda ou pela lateral direita dela.
O(A) primeiro(a) OVT descobriu que girando a ponte em 180 graus com dois vagões em cima dela, é
possível a troca de lugar entre os dois vagões. Obviamente a ponte pode operar no máximo com dois
vagões sobre ela.
Agora que quase todos os(as) OVTs já faleceram, a estação gostaria de automatizar esta operação. Parte
do sistema a ser desenvolvido para realizar esta automatização é uma rotina que decide, para um dado trem
com determinado número de vagões, qual é o número de trocas entre trens adjacentes que são necessárias
para que o trem fique ordenado (em ordem crescente).
Você, sendo da equipe de desenvolvimento da tarefa, já sabe: você deve elaborar tal rotina.

Entrada
A entrada contém, na primeira linha, o número de caso de testes n ∈ N ∗ , com 1 ≤ n ≤ 50.
Cada par de linhas seguintes representa um caso de teste, sendo que a primeira linha do par contém um
número natural L, determinando o tamanho do trem (1 ≤ L ≤ 1000), ou seja, o número de vagões nele
presente.
A segunda linha do par contém uma permutação qualquer dos naturais de 1 até L, indicando a ordem atual
dos vagões daquele trem.
Os vagões devem ser ordenados em ordem crescente pelo número de cada vagão.

Saída
Deve ser impresso, por caso de teste, o número ideal de trocas necessário para realizar a tarefa de
ordenação dos vagões do trem.

Exemplos
Entrada
3
3
1 3 2
4
4 3 2 1
2
2 1
Saída
1
6
1

Entrada
2
10
1 5 6 3 7 8 9 10 11 50
10
1 2 3 4 5 6 7 8 9 10
Saída
2
0

Entrada
3
10
1 5 2 6 3 7 4 8 9 10
1
3
10
10 9 8 7 6 5 4 3 2 1
Saída
6
0
45
*/
