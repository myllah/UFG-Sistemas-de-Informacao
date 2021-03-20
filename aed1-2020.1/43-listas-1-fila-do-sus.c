#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct Paciente {
	int h;
	int m;
	int c;
}Paciente;

typedef struct Lista{
	Paciente paciente[MAX];
	int prim;
	int ult;
	int tam;
}Lista;

void CriaListaVazia(Lista *lista) {
	lista->prim = 0;
	lista->ult = 0;
	lista->tam = 0;
}

int VerificaListaVazia(Lista lista){
	return(lista.prim == lista.ult);
}

int VerificaListaCheia(Lista lista){
	return(lista.ult == MAX);
}

void LerPaciente(Paciente *paciente){
	//printf("LEITURA DO PACIENTE\n");
	//printf("\nEntre com a hora de chegada: ");
	scanf("%d", &paciente->h);
	//printf("\nEntre com os minutos da chegada: ");
	scanf("%d", &paciente->m);
	//printf("\nEntre a quantidade de minutos até atingir a condição crítica: ");
	scanf("%d", &paciente->c);
}

void InsereElementoLista(Lista *lista, Paciente paciente){ 
	int i,j;
	if(VerificaListaCheia(*lista)){
	   printf("NAO FOI POSSIVEL INSERIR - A LISTA ESTA CHEIA\n");
	 }else { 
		 i = lista->prim;
		 while(i < lista->ult)
		     i++;
		    if(i == lista->ult){
				  lista->paciente[i] = paciente;
		      }else { 
				  for(j = lista->ult; j > i; j--)
				        lista->paciente[j]= lista->paciente[j-1];
				       lista->paciente[i] = paciente;
				       
			          }
		 lista->ult++;
		 lista->tam++;
		 //printf("INSERCAO REALIZADA COM SUCESSO\n"); 
	 }
  }
   
void ExibirPaciente(Paciente paciente){
	printf("%d ", paciente.h);
	printf("%d ", paciente.m);  
	printf("%d\n", paciente.c);   
}

int atendimento(Lista lista){
	int i = 0;
	
	int horaAtual = 7;
	int minAtual = 0;
	int criticos = 0;

	while(i < lista.tam){
		if(horaAtual == lista.paciente[i].h){
			if(minAtual >= lista.paciente[i].m){
				int difHoras = horaAtual - lista.paciente[i].h;
				int difMin = minAtual - lista.paciente[i].m;
				while(difHoras > 0){
						difMin = difMin + 60;
						difHoras--;
				}
				if(difMin > lista.paciente[i].c){
						criticos++;
				}
				i++;
			}			
		}
		if(horaAtual > lista.paciente[i].h){
				int difHoras = horaAtual - lista.paciente[i].h;
				int difMin = minAtual - lista.paciente[i].m;
				
				while(difHoras > 0){
						difMin = difMin + 60;
						difHoras--;
				}
				if(difMin > lista.paciente[i].c){
						criticos++;
				}
				i++;			
		}
		if(minAtual == 0){
				minAtual = 30;
		}else{
				horaAtual++;
				minAtual = 0;
		}
	}		
	return (criticos);
}
     
int main(){
int i;

Lista lista;
CriaListaVazia(&lista);

Paciente paciente;

int n; scanf("%d", &n);

for(i=0; i<n; i++){
	LerPaciente(&paciente);
	InsereElementoLista(&lista,paciente);
}
printf("%d\n", atendimento(lista));

return 0;
}

/*Fila do SUS (++)
Os pacientes que chegam à fila do Sistema Único de Saúde (SUS) passam por uma “triagem” e, imedi-
atamente, vão para a fila de atendimento² .
Na triagem a enfermeira anota o horário de entrada do paciente e quantos minutos ele tem até que sua con-
dição de saúde se torne crítica, sendo que ela nunca erra em suas previsões² .
Sabe-se que os pacientes são atendidos de 30 em 30 minutos, ou seja, sempre nas horas “cheias” ou em
“meias-horas”, quando estão na fila de atendimento. O início da triagem e do atendimento se dá, pontual-
mente, às 07h da manhã de cada dia.
Se não há nenhum paciente sendo atendido e a fila está vazia³ , o primeiro paciente é atendido no instante
que chega à triagem. O médico sempre atende até o último paciente na fila⁴ .
A preocupação é se algum paciente atingiu a sua condição crítica enquanto está na fila de atendimento, ou
seja, ainda não tenha sido iniciado seu atendimento⁵.
Diante deste cenário, você foi convidado a implementar um programa de computador, em C, que seja capaz
de verificar na fila quantos pacientes atingem a sua condição crítica.

Entrada
A primeira linha da entrada contém um número inteiro n ∈ N ∗ , 0 < n ≤ 50, o número de pacientes que
chegaram à triagem.
As n linhas seguintes possuem uma tríade de valores inteiros h, m, c ∈ N ∗ e 7 < h < 19, 0 ≤ m < 60 e
0 ≤ c ≤ 720. Os valores de h e m correspondem, respectivamente, à hora e ao minuto em que o paciente
chega à triagem. O paciente da linha i sempre chega antes de, e no máximo junto com, o paciente da linha (i + 1).
O valor c é o tempo, expresso em minutos, antes daquele paciente atingir a condição crítica em seu
estado de saúde.

¹ Lembre-se:
Isto é apenas um exercício de programação e, portanto, não há nenhuma fidedignidade com os acontecimentos
reais no SUS do Brasil.
² Sim, ela é uma enfermeira que, nas horas vagas, opera uma “bola de cristal” dos contos infantis e que, por isso, consegue
predizer, de maneira inequívoca, em quanto tempo o paciente atingirá o estado crítico.
³ Isto ocorre? Eu não acredito!
⁴ Tá de brincadeira!
⁵ Tá de brincadeira, de novo!

Saída
O programa deverá imprimir o número de pacientes que atingiram a condição crítica ainda na fila de
atendimento.

Exemplos
Entrada
4
7 0 20
7 0 30
7 30 20
8 15 30
Saída
1

Entrada
5
10 20 50
10 30 30
11 10 20
12 0 0
12 10 30
Saída
0

Entrada
24
7 0 0
7 0 30
7 0 60
7 0 90
7 0 120
7 0 150
7 0 180
7 0 210
7 0 240
7 0 270
7 0 300
7 0 330
7 0 360
7 0 390
7 0 420
7 0 450
7 0 480
7 0 510
7 0 540
7 0 570
7 0 600
7 0 630
7 0 660
7 0 690
Saída
0

Entrada
15
7 0 0
7 0 20
7 30 50
7 50 30
8 0 120
8 1 75
8 30 90
9 59 30
11 0 240
11 15 0
11 30 300
14 0 0
14 40 5
15 15 5
17 50 5
Saída
8
*/
