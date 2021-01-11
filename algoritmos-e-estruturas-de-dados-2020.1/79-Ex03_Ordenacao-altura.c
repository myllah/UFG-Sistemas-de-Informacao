#include <stdio.h>
#define TRUE 1
#define FALSE 2

main(){
	int i, j;

	//printf("Entre com a quantidade de cidades\n");
	int nCidades; scanf("%d", &nCidades); // nCidades < 100 

	for (i = 0; i < nCidades; i++){

	//	printf("Entre com a quantidade de pessoas na cidade %d\n", i+1 );
		int nPessoas; scanf("%d", &nPessoas); // 1 <= n <= 10000
		
		int valtura[nPessoas];
		for (j = 0; j < nPessoas; j++){
	//		printf("Entre com a altura da pessoa %d\n", j+1);
			scanf("%d", &valtura[j]); // 20 <= altura <= 230
		}

		int k, l;

	// begin -- insertion sort
		int min, aux; int swapped = TRUE;
		for (k = 0; k < nPessoas; k++){
			swapped = FALSE;
			min = k;
			for (l = k+1; l < nPessoas; l++){
				if (valtura[l] < valtura[min]){
					min = l;
				}
			}

		/*printf("\n");
		for (j = 0; j < nPessoas; j++){
			if(min == j) printf("-- ");
			if(min == j-1) printf("-- ");
			// " -- x --" = valtura[min]
			printf("%d ", valtura[j]);
			
		}*/

			if(valtura[k] != valtura[min]){
				aux = valtura[k];
				valtura[k] = valtura[min];
				valtura[min] = aux;
				swapped = TRUE;
			}else if(valtura[k] == valtura[min]){
				swapped = TRUE;
			}
			if(swapped == FALSE){
				break;
			}
		}
	// end -- insertion sort

		for (j = 0; j < nPessoas; j++){
			printf("%d ", valtura[j]);
		}printf("\n");
	}

}

/*

3 Altura (+)

Sempre cheio de “boas ideias”, agora o governo brasileiro resolveu criar a “bolsa altura”, subsidiado na
intenção de que as futuras gerações de brasileiros sejam, em média, mais altas que a atual.
Desta forma, você, depois de ser aprovado num árduo concurso público, faz parte da equipe que realizará o
levantamento da altura da população de todas as cidades brasileiras.
Você foi designado para realizar a tarefa num conjunto de cidades com 10.000 ou menos habitantes,
sabendo-se que você terá que coletar a altura de todos os habitantes da cidade e que ninguém, segundo
o IBGE, tem mais do que 230cm de altura nestas cidades.

Entrada
A entrada contém vários casos de teste.
A primeira linha de entrada contém um inteiro ηC (ηC < 100) que indica a quantidade de casos de teste, ou
seja, o número de cidades.
Cada caso de teste é formado por duas linhas: a primeira linha conterá um inteiro n (1 ≤ n ≤ 10(elevado a 4)), que
indica a quantidade de pessoas daquela cidade. A segunda linha apresenta a altura de cada uma destas
pessoas, em centímetros, representado pela letra h(20 ≤ h ≤ 230) e separados por um espaço em branco.

Saída
Deve-se imprimir, por caso de teste, uma linha contendo os valores das alturas de todos os moradores
da cidade (em cm), em ordem crescente de altura, separados por um espaço em branco.

Exemplo
Entrada Saída
6
10
65 31 37 37 72 76 61 35 57 37
12
45 186 185 55 51 51 22 78 64 26 49 21
10
20 93 203 67 64 225 112 81 58 180
8
169 189 220 228 68 32 214 180
6
133 55 67 166 112 41
4
39 38 120 55
31 35 37 37 37 57 61 65 72 76
21 22 26 45 49 51 51 55 64 78 185 186
20 58 64 67 81 93 112 180 203 225
32 68 169 180 189 214 220 228
41 55 67 112 133 166
38 39 55 120

Observação
Devido à largura da coluna de entrada, algumas das sequências aparecerem em “duas linhas” mas, em
verdade, serão digitadas numa única linha. Por exemplo, a sequência: 45 186 185 55 51 51 22 78 64 26 49
21, deve ser digitada numa única linha.

*/