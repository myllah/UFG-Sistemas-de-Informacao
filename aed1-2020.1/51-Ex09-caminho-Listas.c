#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dataNode{
    char instrucao[20];
	char rua[20];
}DataNode;

typedef struct node{
    DataNode data;
    struct node* next;
    struct node* previous;
}Node;

typedef struct list{
    int size;
    Node* head;
    Node* fool;
}List;

List* createList(); ///CRIA UMA LISTA
void pull(List* list,DataNode data); ///ADICIONA NO FINAL
void LastprintList(List* list); ///IMPRIME NO FINAL
int isEmpty(List* list); ///RETORNA SE TA VAZIA OU NAO

List* createList(){

    List* list = (List*) malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;
    list->fool = NULL;

    return list;

}

void pull(List* list,DataNode data){

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->previous = NULL;
    newNode->next = NULL;

    if(list->head == NULL){ ///se a lista estiver vazia
        list->head = newNode;
        list->fool = newNode;
    }else{
        list->fool->next = newNode;
        newNode->previous = list->fool;
        list->fool = newNode;
    }

    list->size++;
}

void print(List* list){

    if(isEmpty(list)){
        printf(" --- LISTA VAZIA ---");
        return;
    }

    Node* pointer = list->fool;

    while(pointer != NULL){
		if(pointer == list->fool){
			printf("Vire a ");
			if(strcmp("DIREITA", pointer->data.instrucao) == 0){
				printf("ESQUERDA ");
			}else if(strcmp("ESQUERDA", pointer->data.instrucao) == 0){
				printf("DIREITA ");
			}
		}else if(pointer == list->head){
			printf("na rua %s.\nVire a ", pointer->data.rua);
			if(strcmp("DIREITA", pointer->data.instrucao) == 0){
				printf("ESQUERDA ");
			}else if(strcmp("ESQUERDA", pointer->data.instrucao) == 0){
				printf("DIREITA ");
			}
			printf("na sua CASA.\n");
		}else{
			 printf("na rua %s.\nVire a ", pointer->data.rua);
			 if(strcmp("DIREITA", pointer->data.instrucao) == 0){
				printf("ESQUERDA ");
			}else if(strcmp("ESQUERDA", pointer->data.instrucao) == 0){
				printf("DIREITA ");
			}
		}
        pointer = pointer->previous;
    }
}

int isEmpty(List* list){
    return (list->size == 0);
}

  void ler_pessoa(DataNode *data){
	   //printf("\nEntre com a instrução: ");
	   scanf("%s", data->instrucao);
	   getchar();
	   //printf("\nEntre com a rua: ");
	   scanf("%s", data->rua);
	   getchar();
	}  
	
int main(){
        
    int i;
    int op; scanf("%d", &op);
    
    for(i = 0; i< op; i++){
		List* list = createList(list);
		DataNode data;
    
		do{
			ler_pessoa(&data);
			pull(list, data);
		} while(strcmp("ESCOLA", data.rua) != 0);

	   print(list);
	}
}
