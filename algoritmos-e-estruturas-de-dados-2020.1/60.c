#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define JOHN 1
#define JACK 0
#define JOSEPH 2

typedef struct lista{ int dado;
                 struct lista *prox;
                 }Lista;
typedef struct aluno{ int nprobs, pontuacao;
                      char nome[10];
                     }Aluno;
              
Lista *cria_no(int x) {
	    Lista *no;
	    no = (Lista *) malloc(sizeof(Lista));
	    no->dado = x;
	    no->prox = NULL;
	    return no;
}

Lista *insere(Lista *L, int x) {
	if(L == NULL) return cria_no(x);
	L->prox = insere(L->prox, x);
	return L;
}

Lista *insere_ordem_crescente(Lista *L, int x) {
	Lista *tmp = NULL;
	if(L == NULL){ 
		return(cria_no(x));}
	if(x<L->dado) 
	   {tmp = cria_no(x);
		tmp->prox = L;
		return tmp;
	}
	L->prox = insere_ordem_crescente(L->prox, x);
	
    return L;
  }
  
 Lista *insere_ordem_decrescente(Lista *L, int x) {
	Lista *tmp = NULL;
	if(L == NULL){ 
		return(cria_no(x));}
	if(x > L->dado) {
	   tmp = cria_no(x);
		tmp->prox = L;
		return tmp;
	}
	L->prox = insere_ordem_decrescente(L->prox, x);
	
    return L;
  }    
  
 void limpa(Lista *L) {
	 if(L == NULL)
	    return;
	 limpa(L->prox);
	 free(L);
	 L = NULL;
	}
	
Aluno conta(Lista *L,int k) {
 int tempo =0, nprobs =0, pontuacao =0;
  Aluno tmp;
  while((L != NULL)&& (tempo + L->dado)<k) {
	 nprobs++;
	 tempo  += L->dado;
     pontuacao += tempo;
     L = L->prox;
}
	tmp.nprobs = nprobs;
	tmp.pontuacao = pontuacao;
	return tmp; 
 }
 
void bubble_sort(Aluno A[]){
	int i = 0, j = 0;
	Aluno tmp;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3-i-1;j++){
			if(((A[j].nprobs < A[j+1].nprobs ) || ((A[j].nprobs) == A[j+1].nprobs)) && (A[j].pontuacao > A[j+1].pontuacao)){
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
}
	
int main() {
	int t, n, k, i, x, z;
	Lista *fila = NULL, *prioridade_pilha_c = NULL, *prioridade_pilha_d = NULL;
    Aluno alunos[3];
    scanf("%d",&t);
    for(z=1; z <= t; z++) {
		 scanf("%d %d",&k,&n);
		 prioridade_pilha_c = prioridade_pilha_d = fila = NULL;
		 for(i=0;i<n;i++)
		    { scanf("%d",&x);
			  prioridade_pilha_c = insere_ordem_crescente(prioridade_pilha_c, x);
			  prioridade_pilha_d = insere_ordem_decrescente(prioridade_pilha_d, x);
			  fila = insere(fila, x);
			}
		alunos[JACK] = conta(prioridade_pilha_c, k);
		alunos[JOHN] = conta(fila, k);
		alunos[JOSEPH] = conta(prioridade_pilha_d, k);
		strcpy(alunos[JACK].nome, "Jack");
		strcpy(alunos[JOHN].nome, "John");
		strcpy(alunos[JOSEPH].nome, "Joseph");
		bubble_sort(alunos);
		printf("%s %d %d\n",alunos[0].nome, alunos[0].nprobs, alunos[0].pontuacao);
		limpa(prioridade_pilha_d);
		limpa(prioridade_pilha_c);
		limpa(fila);
 }
 return 0;
}
