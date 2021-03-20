#include <stdio.h>
#include <stdlib.h>

#define MAX 60000
#define SUCESSO 1
#define FALHA -1

typedef struct{
	int chave;
	int identificador;
}Pessoa;

typedef struct{
	Pessoa pessoas[MAX];
	int tam;
}Lista;

void criarListaVazia(Lista *lista){
	lista->tam = 0;
}

void mostrarCelula(Pessoa pessoa){
	//printf("Chave..............:%d\n", pessoa.chave);
	//printf("Identificador......:%d\n", pessoa.identificador);
	printf("%d ", pessoa.identificador);
}

int insereFinal(Lista *lista){
	if(lista->tam == MAX){
			//printf("A Fila está cheia\n");
			return(FALHA);
	}else{
		Pessoa pessoa;
				//printf("Criando uma pessoa na fila\n");
				//printf("Digite o identificador da pessoa\n");
				scanf("%d", &pessoa.identificador);
				pessoa.chave = lista->tam+1;
				lista->pessoas[lista->tam] = pessoa;
				lista->tam++;
				//printf("INSERÇÃO REALIZADA COM SUCESSO\n");	
				return(SUCESSO);
	}
}

void exibirLista(Lista lista){
	int i;
	if(lista.tam == 0){
		//printf("A fila está vazia\n");
	}else{
		//printf("Existem %d pessoas na fila\n", lista.tam);
		for(i=0; i<lista.tam; i++){
			//printf("\n");
			mostrarCelula(lista.pessoas[i]);
		}
		printf("\n");
	}
}

void removeIdentificador(Lista *lista, int iden){
	if(lista->tam == 0){
			printf("Não é possível remover. A lista está vazia");
	}else{
		int i = 0, j = 0;
		while (i < lista->tam){
			//printf("pessoa %d , ident %d\n",lista->pessoas->identificador, iden);
			if(lista->pessoas[i].identificador != iden){
					i++;
			}else{
				for(j = i; j < lista->tam; j++){
					lista->pessoas[j] = lista->pessoas[j+1];
				}
				lista->tam--;
			}
		}
	}
}

int main(){
	int i = 0;
	Lista lista;
	criarListaVazia(&lista);
	
	int qtdPessoasNaFila;
	scanf("%d", &qtdPessoasNaFila);
	
	for(i = 0; i<qtdPessoasNaFila; i++){
		insereFinal(&lista);	
	}
	
	int qtdSairamFila;
	scanf("%d",&qtdSairamFila);
	
		
	for(i = 0; i<qtdSairamFila; i++){
		int iden; scanf("%d", &iden);
		removeIdentificador(&lista, iden);	
	}
	
	exibirLista(lista);

return 0;
}

/* A COPA do mundo é nossa... (+)
Sempre que se aproxima a realização de uma Copa do Mundo de Futebol, o fluxo de pessoas nas filas para
compra de ingressos aumenta consideravelmente. Quando as filas vão se tornando cada vez maiores, as
pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando,
assim, sua vaga para outras pessoas, o que é muito bom para os mais pacientes.
Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo à frente e, portanto,
nunca existe um espaço vago entre duas pessoas consecutivas na fila. A fila inicialmente contém n pessoas,
cada uma com um identificador diferente: m i . Estes identificadores são, vulgarmente, chamados de “se-
nhas”.
Pedro, um menino que sagrou-se campeão da etapa regional goiana da OBI (Olimpíada Brasileira de Infor-
mática, coordenada pelo Prof. Wellington Martins do INF/UFG), sabe o estado inicial da fila e a sequência
de identificadores das pessoas que deixaram a fila, na ordem em que elas a abandonaram. Ele também sabe
que, após o estado inicial, nenhuma pessoa entrou mais na fila.
Ele deseja saber qual será o estado final desta fila, mas não quer fazer, manualmente, a simulação das saídas
das pessoas. Pedro não conhece “Estruturas de Dados” e, sabendo que você está cursando esta disciplina
no INF/UFG, pediu sua ajuda para elaborar um programa de computador, C, que resolva este problema.
Entrada
A primeira linha contém um número natural n representando a quantidade de pessoas inicialmente na
fila, com 1 ≤ n ≤ 60000.
A segunda linha contém n números naturais representando os identificadores m i das pessoas na fila, com
1 ≤ i, m i ≤ n. O primeiro identificador corresponde ao identificador da primeira pessoa na fila, o segundo
identificador é o da segunda pessoa na fila e, assim, sucessivamente. É garantido que duas pessoas diferentes
não possuem o mesmo identificador.
A terceira linha contém um natural s, 1 ≤ s ≤ n, que representa a quantidade de pessoas que deixaram a fila.
A quarta linha contém s naturais – s i , 1 ≤ s i ≤ n, representando os identificadores das pessoas que deixaram
a fila, na ordem em que elas a abandonaram. Da mesma maneira, é garantido que um mesmo identificador
não aparece duas vezes nessa lista de pessoas que sairam a fila.
Saída
Seu programa deve imprimir uma única linha contendo (n − m) naturais, correspondendo à sequência
de identificadores das pessoas que permaneceram na fila, na ordem de chegada a ela.

Exemplos
Entrada
8
5 100 9 81 70 33 2 1000
3
9 33 5
Saída
100 81 70 2 1000

Entrada
4
10 9 6 3
1
3
Saída
10 9 6

Entrada
Saída
8
10 2 3 4 66 45 32 77
1
3
Saída
10 2 4 66 45 32 77

Entrada
8
10 2 3 4 66 45 32 77
1
5
Saída
10 2 3 4 66 45 32 77
 */
