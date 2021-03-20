#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa{ 
	int cod;
}Pessoa;

typedef struct Caixa{
	Pessoa pessoa;
	struct Caixa *prox;
}Caixa;
                 
typedef Caixa *Ponteiro;

typedef struct Fila{
	Ponteiro inicio;
	Ponteiro fim;
	int tam;
}Fila;

void criarFilaVazia(Fila *F){
	Ponteiro A;
	A = (Ponteiro) malloc(sizeof(Caixa)); // crio uma caixa A
	A->prox = NULL; // proxima caixa é vazia
	F->inicio = A; // faço o início da fila apontar para a caixa A
	F->fim = A; // faço o fim da fila apontar para a caixa A
	F->tam = 0; // o tamanho é zero
 }	

int verificaFilaVazia(Fila fila){ 
	return (fila.inicio == fila.fim);
}

void enfileirar(Fila *F, Pessoa pessoa){
	Ponteiro A;
	A = (Ponteiro) malloc(sizeof (Caixa)); // crio uma caixa A
	A->pessoa = pessoa; // atribuo os valores da pessoa para a caixa A
	F->fim->prox = A; // faço o ponteiro do ultimo da fila apontar para a caixa A - fazendo q o ultimo da fila não seja mais o ultimo
	F->fim = A; // faço o fim da fila apontar para a caixa A
	F->tam++; // aumento o tamanho da fila
}

void desenfileirar(Fila *F, Pessoa *X){
	Ponteiro A;
	if(verificaFilaVazia(*F)){
		printf("A Fila esta vazia - Desenfileirar\n");
	}else {
		A = F->inicio;  //faço A apontar para o início da fila
		F->inicio = A->prox;   //faço o início da fila apontar para o segundo elemento da fila
		*X = F->inicio->pessoa;  //faço X ter os valores da pessoa q vai sair da fila
		F->tam--;      //diminuir o tamanho da fila
		free(A);       //elimina o espaço da caixa removida
	}		
}
 
void exibirPessoa(Pessoa X){
	printf("%d ", X.cod);
}

void exibirFila(Fila *F){
	Pessoa X;
	Fila F1;
	criarFilaVazia(&F1);
	if(verificaFilaVazia(*F)){
		printf("A Fila esta vazia - Exibir Fila\n");
	}else {
		// desenfilero da fila colocando em outra fila e mostrando na tela cada elemento
		while(F->inicio != F->fim){
			desenfileirar(&(*F),&X);
			enfileirar(&F1,X);
			exibirPessoa(X);
		}
	// Volto os elementos para a fila original enfilerando-os novamente
		while((F1.inicio)!= (F1.fim)){
			desenfileirar(&F1,&X);
			enfileirar(&(*F),X);
		}
	}
}

void sairDaFila(Fila *F, int ident){
	Pessoa X;
	Fila F1;
	criarFilaVazia(&F1);
	if(verificaFilaVazia(*F)){
		printf("A Fila esta vazia - Exibir Fila\n");
	}else {
		// desenfilero da fila colocando em outra fila e mostrando na tela cada elemento
		while(F->inicio != F->fim){
			desenfileirar(&(*F),&X);
			if(X.cod != ident){
				enfileirar(&F1,X);
			}
		}
	// Volto os elementos para a fila original enfilerando-os novamente
		while((F1.inicio)!= (F1.fim)){
			desenfileirar(&F1,&X);
			enfileirar(&(*F),X);
		}
	}
}
       
void ler(Pessoa *pessoa){
	//printf("\nEntre com o Código: ");
	scanf("%d", &pessoa->cod);
}
   
int main(){
	int i = 0;
	Pessoa pessoa;
	Fila fila;
	criarFilaVazia(&fila);
	
	int qtdPessoasNaFila;
	//printf("\nDigite a quatidade de pessoas na fila\n");
	scanf("%d", &qtdPessoasNaFila);
	
	for(i = 0; i<qtdPessoasNaFila; i++){
		ler(&pessoa);
		enfileirar(&fila, pessoa);	
	}
		
	int qtdSairamFila;
	//printf("\nDigite a quatidade de pessoas que saíram da fila\n");
	scanf("%d",&qtdSairamFila);
	
	for(i = 0; i<qtdSairamFila; i++){
		int iden; scanf("%d", &iden);
		sairDaFila(&fila, iden);	
	}
	
	exibirFila(&fila);

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
10 2 3
Saída
4 66 45 32 77

Entrada
8
10 2 3 4 66 45 32 77
1
5
10 3 45 32 77
Saída
2 4 66
 */
