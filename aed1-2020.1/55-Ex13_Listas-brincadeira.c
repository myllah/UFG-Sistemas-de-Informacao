#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Caixa{
	char nome[20];
	struct Caixa *prox;
	struct Caixa *ant;
}Caixa;

typedef struct Lista{
	int tam;
	Caixa *inicio;
	Caixa *fim;
}Lista;

void criaLista(Lista *lista){
	lista->tam = 0;
	lista->inicio = NULL;
	lista->fim = NULL;
}

void adicionaLista(Lista *lista, char nome[]){

	Caixa* c = (Caixa*) malloc(sizeof(Caixa));
    strcpy(c->nome, nome);
    c->ant = NULL;
    c->prox = NULL;

    if(lista->inicio == NULL){
        lista->inicio = c;
        lista->fim = c;
    }else{
        lista->fim->prox = c;
        c->ant = lista->fim;
        lista->fim = c;
    }

    lista->tam++;
}

void mostraLista(Lista lista){
	
    if(lista.tam == 0){
        printf(" --- LISTA VAZIA ---");
        return;
    }

    Caixa* c = lista.inicio;

    while(c != NULL){
        printf("%s ", c->nome);
        c = c->prox;
    }
}

int procuraFim(Lista *lista, char n[]){

    if(lista->tam == 0){
        printf(" --- LISTA VAZIA ---");
        return 0;
    }

    Caixa* c = lista->fim;

	int i = 0; int cont = 0;
    while(c->ant != NULL && i < 2){
       
			if(strcmp(n, c->nome) == 0){
				cont++;
				
				if(c->ant == NULL){
					c = c->prox;
					c->ant = NULL;
					lista->inicio = c;
				} else if(c->prox == NULL){
					c->ant->prox=NULL;
					lista->fim = c;
				} else{
					c->prox->ant = c->ant;
					c->ant->prox = c->prox;
				}
				
			}
		c = c->ant;
        i++;
    }
    return cont;
}

int procuraInicio(Lista *lista, char n[]){

    if(lista->tam == 0){
        printf(" --- LISTA VAZIA --- ");
        return 0;
    }

    Caixa* c = lista->inicio;

	int i = 0; int cont = 0;
    while(c->prox != NULL && i < 2){
       
       		if(strcmp(n, c->nome) == 0){
				cont++;
				
				if(c->ant == NULL){
					c = c->prox;
					c->ant = NULL;
					lista->inicio = c;
				} else if(c->prox == NULL){
					c->ant->prox=NULL;
					lista->fim = c;
				} else{
					c->prox->ant = c->ant;
					c->ant->prox = c->prox;
				}
				
			}
		c = c->prox;
        i++;
	}
	return cont;
}
   
int main(){
	
	Lista lista;
	criaLista(&lista);
	
	char nome[20];
	
	while(1){
		scanf("%s", nome);
		
		if(strcmp(nome, "FIM") == 0){
			break;
		}
		
		adicionaLista(&lista, nome);
	}
		
	int i = 0;
	int cont = 0;
	
	while(i < lista.tam){
		
		char n[20], s[20]; //  nome e sentido
		
		scanf("%s", n);
		scanf("%s", s);

		if(strcmp(s, "horario") == 0){
			cont = cont + procuraInicio(&lista, n);
		}else if (strcmp(s, "anti-horario") == 0){
			cont = cont + procuraFim(&lista, n);
		}
		i++;
	}
		
		printf("%d\n", cont);

return 0;
}

/* Brincadeira (+)

Para acalmar seus cinco netos, Dona Arlete propôs uma brincadeira:
Um neto era vendado e o restante se agrupava formando um círculo, sendo que a vovó ocupava a posição
de número “um” nesse círculo. O neto vendado dizia um nome (de outro dos netos) e uma direção: horário
ou anti-horário.
Se em até dois passos, sem contar a vovó, ele acertasse o nome de um dos outros netos, então marcava um
ponto e o primo (ou irmão) cujo nome foi dito deixava o círculo. Esse processo se repetia para cada neto
presente no círculo. Não se podia repetir os nomes.
A vovó pediu seu auxílio: é a vez de Paulo ficar vendado e, dada a disposição inicial dos outros netos
no círculo, bem como os nomes e direções ditas por Paulo, determine a pontuação feita por ele.
Você deverá escrever um programa C para realizar esta tarefa, segundo os padrões estabelecidos a seguir.
Entrada
As primeiras linhas contém, cada uma, o nome de um dos netos de dona Arlete, do primeiro do círculo
ao último, inseridos sempre no sentido horário. A leitura de nomes deve ser encerrada pela digitação da
palavra FIM, com todas as letras maiúsculas.
Na sequência, há uma linha por neto no círculo, onde está o nome de um neto e a direção (horário ou anti-
horário).
Observação: Lembre-se que a Dona Arlete, a vovó, é que inicia o círculo ocupando sempre a posição
de número “UM” e que, na entrada, as palavras “horário” e “anti-horário” são escritas sem a acentuação
gráfica.

Saída
Imprima a pontuação de Paulo.

Exemplos
Entrada
Ana
Joaquim
Henrique
Marcela
Carlos
Sabrina
Loys
FIM
Henrique horario
Ana horario
Joaquim horario
Marcela horario
Carlos anti-horario
Sabrina anti-horario
Loys anti-horario
Saída
5

Entrada
Ana
Joaquim
Henrique
Marcela
Carlos
Sabrina
Loys
FIM
Loys anti-horario
Sabrina anti-horario
Henrique horario
Marcela horario
Ana horario
Joaquim horario
Carlos anti-horario
Saída
5
*/
