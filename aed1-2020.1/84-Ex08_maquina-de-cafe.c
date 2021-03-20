#include <stdio.h>
    
int main(){
	int i, j, k, aux1, aux2;
	
	int t; scanf("%d", &t); //casos de teste
	
	for(i = 0; i < t; i++){
		int n; scanf("%d", &n); //numero de pessoas servidas
		int pessoa[n][2];
		for(j = 0; j < n; j++){
			scanf("%d", &pessoa[j][0]);
			scanf("%d", &pessoa[j][1]);
		}
		
		/*
		printf("\nprintando a matriz original\n");
		for(j = 0; j < n; j++){
			printf("%d ", pessoa[j][0]);
			printf("%d\n", pessoa[j][1]);
		}
		*/
		
// ordenando a matriz pela hora
    for (k = 0; k < n; k++) {
        for (j = k; j < n; j++) {
            if (pessoa[j][0] > pessoa[j + 1][0]) {
				
				//primeira coluna - horas
                aux1          = pessoa[j][0];
                pessoa[j][0]     = pessoa[j + 1][0];
                pessoa[j + 1][0] = aux1;
                
                //segunda coluna - minutos
                aux2          = pessoa[j][1];
                pessoa[j][1]     = pessoa[j + 1][1];
                pessoa[j + 1][1] = aux2;
            }
        }
    }
    
    // ordenando a matriz pelo minuto
    for (k = 0; k < n; k++) {
        for (j = k; j < n; j++) {
            if ((pessoa[j][0] == pessoa[j+1][0]) && (pessoa[j][1] > pessoa[j + 1][1])) {
				
				//primeira coluna - horas
                aux1          = pessoa[j][0];
                pessoa[j][0]     = pessoa[j + 1][0];
                pessoa[j + 1][0] = aux1;
                
                //segunda coluna - minutos
                aux2          = pessoa[j][1];
                pessoa[j][1]     = pessoa[j + 1][1];
                pessoa[j + 1][1] = aux2;
            }
        }
    }
		/*
		printf("\nprintando a matriz ordenada\n ");
		for(j = 0; j < n; j++){
			printf("%d ", pessoa[j][0]);
			printf("%d\n", pessoa[j][1]);
		}*/
		
		int qtd = 1; int cont = 0;
		for(j = 0; j < n; j++){
			cont = 0;
			for(k = j; k < n; k++){
				if((pessoa[j][0] == pessoa[k][0]) && (pessoa[j][1] == pessoa[k][1])){
					cont++;
				}
				if(qtd < cont){
						qtd = cont;
				}
			}
		}
		
		printf("%d\n", qtd);
		
	}
	
return 0;	
}

/* 8 - Máquina de Café (+++)

O Sr. Vanila é dono de uma sofisticada cafeteria na centro da cidade – a StarCoffee – no dia da Procla-
mação da República, decidiu que irá distribuir cafés grátis como campanha de marketing durante todas as
24h deste dia.
Ele decidiu instalar p máquinas de café na StarCoffee. Cada uma das máquinas pode servir uma pessoa por
minuto. Ele recebeu a lista de n pessoas que irão visitar sua cafeteria, todos com hora marcada.
O momento da chegada de cada pessoa é denotado por dois números naturais (h, m), onde h é a hora da
visita e m é o minuto da visita naquela hora².
Devido à tecnologia, no século XXI somos todos(as) impacientes, e, assim, se uma pessoa tiver que esperar
para obter o seu café após sua chegada na StarCoffee, a pessoa fica brava. O Sr. Vanila está preocupado
com o custo desta campanha de marketing e quer configurar o número mínimo de máquinas de café para
que nenhuma pessoa fique brava durante sua estada na StarCoffee. Suponha, para simplificação da resolu-
ção, de que não há a menor possibilidade de que qualquer uma das máquinas instaladas apresente defeito
durante todo o dia da promoção.
Você, como exímio programador de computadores, recebeu a tarefa de ajudá-lo a encontrar o número mí-
nimo de máquinas de café necessárias para que todos(as) os(as) participantes da campanha de marketing
fiquem felizes, ou seja, não bravos(as)).

Entrada
A primeira linha da entrada contém t ∈ N ∗ , o número de casos de testes, com 1 ≤ t ≤ 100.
Cada grupo de (n + 1) linhas seguintes corresponde a um caso de teste, onde n representa o número de
pessoas a serem servidas naquele dia, com n ∈ N ∗ e n ≤ 10.000.
A primeira linha de cada caso de teste contém o valor de n. As n linhas seguintes contém dois números
naturais, h e m, separados por um espaço em branco, representando cada cliente específico.

² - O horário definido por h:m representa o exato momento em que a pessoa entra na cafeteria e se coloca à frente de uma das
máquinas de café disponíveis, onde 0 ≤ h ≤ 23 e 0 ≤ m ≤ 59.

Saída
Para cada caso de teste fornecido, o programa deve imprimir, numa única linha, o número mínimo de
máquinas de café necessário para atender ao problema anteriormente definido.
Restrições
Lembre-se: Todas as restrições definidas devem ser satisfeitas.

Exemplos
Entrada
1
7
10 20
5 40
10 20
23 11
5 50
10 30
17 12
Saída
2

Entrada
2
8
8 0
9 10
9 11
8 0
8 0
16 40
8 0
16 41
10
13 0
13 1
13 2
13 3
13 0
13 1
13 0
13 0
13 0
13 4
Saída
4
5
*/
