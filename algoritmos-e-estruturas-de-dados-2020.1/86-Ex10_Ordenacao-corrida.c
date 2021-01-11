#include <stdio.h>
int main(){

	int i, j;

	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	// n = numero competidores
	// m = numero voltas da corrida

	int v[n][m];
	int sexo[n];
	int tamM = 0; int tamF = 0;

	for (i = 0; i < n; i++){
		//printf("Competidor número %d\n", i+1);
		scanf("%d", &sexo[i]);
		if(sexo[i] == 1){
				tamM++;
		}else if(sexo[i] == 2){
				tamF++;
		}
		for (j = 0; j < m; j++){
			//printf("   Volta número %d\n", j+1);
			scanf("%d", &v[i][j]);
		}
	}
	
	int vM[tamM][m][2];
	int vF[tamF][m][2];
	int imas = 0; int ifem = 0;
	
	for (i = 0; i < n; i++){
		if(sexo[i] == 1){ // Masculino
			for (j = 0; j < m; j++){
				vM[imas][j][0] = v[i][j];
				vM[imas][j][1] = i;
			}
			imas++;
		}else if(sexo[i] == 2){ // Feminino
			for (j = 0; j < m; j++){
				vF[ifem][j][0] = v[i][j];
				vF[ifem][j][1] = i;
			}
			ifem++;
		}
	}
	
	int totalM;
	int vtotalM[tamM][2];
	for (i = 0; i < tamM; i++){
		totalM = 0;
		for (j = 0; j < m; j++){
			totalM = totalM + vM[i][j][0];
		}
		vtotalM[i][0] = totalM;
		vtotalM[i][1] = vM[i][0][1];
	}
	
	int totalF;
	int vtotalF[tamF][2];
	for (i = 0; i < tamF; i++){
		totalF = 0;
		for (j = 0; j < m; j++){
			totalF = totalF + vF[i][j][0];
		}
		vtotalF[i][0] = totalF;
		vtotalF[i][1] = vF[i][0][1];
	}

	int menorM = vtotalM[0][1];
	int imenorM = 0;
	
	for (i = 0; i < tamM; i++){
		if(vtotalM[i][0] < vtotalM[imenorM][0]){
			menorM = vtotalM[i][1];
			imenorM = i;
		}
	}

	printf("%d ", menorM+1);
	
	
	int menorF = vtotalF[0][1];
	int imenorF = 0;
	
	for (i = 0; i < tamF; i++){
		if(vtotalF[i][0] < vtotalF[imenorF][0]){
			menorF = vtotalF[i][1];
			imenorF = i;
		}
	}

	printf("%d\n", menorF+1);
	
	
}

/** 10 - Corrida Escolar (+++)

Na escola onde “Nelsinho” há, uma vez por ano, uma tradicional corrida de estudantes ao redor de seu
prédio principal.
Apesar, evidemente, de haver estudantes dos mais variados períodos, todos(as) os(as) alunos(as) da escola
são convidados(as) a participar, sendo impossível que todos participem da mesma corrida, mas em diferen-
tes categorias.
Para contornar esse problema, os(as) professores(as) cronometram o tempo que cada aluno(a) consome
para dar cada uma das voltas ao redor do prédio principal, e depois comparam os tempos para descobrir a
classificação final, de acordo com a categoria a qual pertence cada estudante.
Tarefa
Sua tarefa é, sabendo o número de competidores(as), o número de voltas de que consistiu a corrida e
os tempos de cada aluno(a) competidor(a), descobrir quem foi o(a) aluno(a) vencedor(a), para que ele(a)
possa receber uma medalha comemorativa.
Há, obviamente, duas categorias distintas: masculina (M) e feminina (F).

Entrada
A primeira linha da entrada contém dois naturais, n e m, representando o número de competidores(as) e
o número de voltas da corrida, respectivamente, sendo que (1 ≤ n ≤ 200) e (1 ≤ m ≤ 5).
Na sequência, cada linha representa um competidor(a) e, portanto, haverá n linhas representando os com-
petidores(as).
Em cada linha haverá (m + 1) números naturais: o primeiro será 1 para indicar que se trata de um menino
e 2 para indicar se trata de uma menina, e os m seguintes indicam o tempo consumido em cada uma das
voltas dadas por aquele(a) competidor(a). O tempo t é expresso em segundos e, por isso, garante-se que
não houve dois(duas) competidores(as) que gastaram o mesmo tempo para completar a corrida inteira, ou
seja, o tempo total de todas as suas voltas.
Para simplificar a solução do problema considera-se que nenhum(a) dos(as) competidores(as) desistiu da
corrida, ou seja, todos(as) concluiram as m voltas da corrida da qual participou. Sabe-se também que
1 ≤ t ≤ 1000.

Saída
A saída deve consistir de dois números naturais, separados por um único espaço em branco entre eles,
que correspondem, respectivamente, ao vencedor da prova masculina à vencedora da prova feminina.

Exemplos
Entrada
2 3
1 2 1 2
2 1 2 3
Saída
1 2
* 
Entrada
4 3
1 3 2 1
1 4 3 1
2 1 4 2
2 6 3 1 7
Saída
1 3
* 
Entrada
3 3
2 3 5 6
2 1 2 3
1 1 1 1
Saída
3 2 
 **/
