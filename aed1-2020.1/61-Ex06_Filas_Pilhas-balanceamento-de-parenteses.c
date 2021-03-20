#include <stdio.h>
#include <stdlib.h>

typedef char Char;

typedef struct Cx{
	Char c;
	struct Cx *prox;
}Caixa;
                 
typedef Caixa *Ponteiro;

typedef struct {
	Ponteiro topo;
	int tam;
}Pilha;    
             
void criarPilha(Pilha *pilha){ 
	pilha->topo= NULL;
	pilha->tam = 0;
 }

int verificaPilhaVazia(Pilha pilha){ 
	return(pilha.topo == NULL);
}
 
void empilhar(Pilha *P, Char X){
	Ponteiro A;
	A = (Ponteiro) malloc(sizeof (Caixa));
	A->c = X;
	A->prox = P->topo;
	P->topo = A;
	P->tam++;
}
 
Char desempilhar(Pilha *P){
	Ponteiro A;
	if(verificaPilhaVazia(*P)){
		printf("A Pilha esta vazia - Desempilhar\n");
	} else {
		A = P->topo;
		P->topo = A->prox;
		P->tam--;
	}	
	return(A->c);
		free(A);
}

int calcula(Pilha *pilha, int abri){
	if (pilha->topo->c == '('){
		abri++;
	}else if (pilha->topo->c == ')'){
		abri--;
	}
	desempilhar(pilha);
	return abri;
}
       
  int main(){

	Pilha pilha;
	Pilha pilha2;
	Char c;
	
	criarPilha(&pilha);
	criarPilha(&pilha2);
	
	int i;
	
	// leio a string
	char string[100];
	scanf("%s", string);
	
	// empilho cada letra da string
	for (i = 0; string[i] != '\0'; i++){
		empilhar(&pilha, string[i]);
	}
	
	// passo para outra pilha, invertendo a ordem
	while (pilha.topo != NULL){
		c = desempilhar(&pilha);
		empilhar(&pilha2, c);
	}
	// calculo se houve fechamento de parenteses antes de abrir
	int abri = 0;
	while(pilha2.topo != NULL){
		abri = calcula(&pilha2, abri);
		if(abri < 0){ // se eu fechei ")" antes de abrir "(", então está incorreto
			break;
		}
	}
	
	// Se abri for negativo, então houve mais ")" do que "("
	if(abri < 0){
		printf("incorreta");
	}else{
		printf("correta");
	}
		
	 return 0;	
 }

/*Balanceamento de parênteses (++)
* 
Considere que seja dada uma expressão aritmética e qualquer, onde nela pode haver a presença de
parênteses, ou seja, “(” – abre parêntese ou “)” – fecha parêntese.

Por exemplo:
a ∗ b − (2 + c)
é uma expressão correta, pois há um “abre” parêntese e um “fecha” parêntese.
O mesmo ocorre com:
(a + b ∗ (2 − c) − 2 + a) ∗ 2
Por outro lado, a expressão:
(a ∗ b − (2 + c)
está incorreta.
Como também estão:
2 ∗ (3 − a))
e
)3 + b ∗ (2 − c)(
Sintetizando: todo parêntese que “fecha” deve ter um outro parêntese que “abre” correspondente, bem
como não pode haver parêntese que “fecha” sem um prévio parênteses que “abre”. A quantidade total de
parênteses que “abre” e “fecha” deve ser igual.
Você deve elaborar um programa de computador, em C, que seja capaz de verificar se uma dada expressão
e, fornecida como entrada, está correta no que diz respeito à parentetização.
Observação: É obrigatório que seu programa utilize uma estrutura de dados “dinâmica” para implementar
a solução para este problema.

Entrada
Uma única expressão e, com no mínimo 1 (um) caractere e no máximo 1000 (mil) caracteres, na linha
de entrada.

Saída
Seu programa deve imprimir, numa única linha, a mensagem “correta” ou “incorreta”.
A análise deve ser realizada sem considerar o restante da expressão, apenas a relação existente entre os
parênteses, ou seja, desconsideram-se todos os demais elementos (numerais, espaços em branco e símbolos
de operação aritmética).

Exemplos
Entrada
Saída
a * b - (2 + c)
correta

Entrada
Saída
)3+b*(2-c)(
incorreta

Entrada
Saída
(a+b*(2-c)-2+a)*2(
correta

Observação: Perceba todas as letras das palavras correta e incorreta estão grafadas em minúscula.
Você deve fazer com que seu programa grafe exatamente desta maneira.

Entrada
Saída
2*(3-a))
incorreta
* */
