#include <stdio.h>
int main(){
	
	int n, minPresencas;
	scanf("%d", &n);
		scanf("%d", &minPresencas);
	int i, j;
	int count = 0;
	
	int chegada[n];
	for(i=0; i<n; i++){
		scanf("%d", &chegada[i]);
		
		if(chegada[i] <= 0){
			count++;
		}
	}
	
	int presentes[count]; int flag=0;
	for(i=0, j=0; i<n; i++){
		if(chegada[i] <= 0){
			presentes[j] = i+1;
			flag++; j++;
		}
	}

	if(flag < minPresencas){
			printf("SIM\n");
	}else{
			printf("NAO\n");
		for(i=count-1; i>=0; i--){
			printf("%d\n", presentes[i]);
		}
	}

return 0;
}
/*Aula Cancelada (+++)
Um professor X tem uma turma de N alunos. Frustrado com a falta de disciplina, ele decide cancelar a
aula se menos de K alunos estão presentes quando a aula começa. Dado o tempo de chegada de cada aluno,
determinar se a aula é cancelada. Caso a aula não seja cancelada, imprima uma lista com os alunos que
chegaram antes do início da aula em ordem contrária à mostrada na entrada.
Entrada
A primeira linha apresenta dois números inteiros separados por um espaço: N (alunos da turma) e K
(mínimo de presenças para que a aula não seja cancelada), com 0 ≤ N, K, ≤ 1000. Na segunda linha há
N inteiros separados por espaços (A1 , A2 ,... , An ) descrevendo os tempos de chegada para cada aluno.
Suponha que esta ordem seja a mesma da lista de presença do professor, com o primeiro aluno descrito na
entrada sendo o aluno 1 e assim por diante. Nota: horários de chegada não-positivos (Ai ≤ 0) indicam que
o aluno chegou cedo ou na hora; horários de chegada positivos (Ai>0) indicam o aluno chegou Ai minutos
tarde.
Saída
O programa apresenta uma mensagem com a palavra “SIM” se a aula é cancelada, e “NAO” caso
contrário. Após imprimir a mensagem quebre uma linha. Se a aula não for cancelada, imprima os M alunos
presentes antes do início da aula (ou seja, com Ai ≤ 0) na ordem contrária da lista de entrada.
Exemplo
Entrada
4 3
-1 -3 4 2
Saída
SIM
Entrada
2 1
1 2
Saída
SIM
Entrada
4 2
0 -1 2 1
Saída
NAO
2
1
Entrada
10 10
0 0 0 0 0 0 0 0 0 1
Saída
SIM
Entrada
10 4
-93 -86 49 -62 -90 -63 40 72 11 67
Saída
NAO
6
5
4
2
1
Entrada
10 10
23 -35 -2 58 -67 -56 -42 -73 -19 37
Saída
SIM
1
Entrada
2 1
-8 -4
Saída
NAO
2
1Entrada
10 1
88 -17 -96 43 83 99 25 90 -39 86
Saída
NAO
9
3
2
 */
