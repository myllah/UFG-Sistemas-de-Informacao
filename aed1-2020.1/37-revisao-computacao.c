#include<stdio.h>

void base4(int num){
	if(num == 0){
		printf("A");
	}else if(num == 1){
		printf("C");
	}else if(num == 2){
		printf("G");
	}else if(num == 3){
		printf("T");
	}else{
	
		int r = num%4;

		num = num/4;
		base4(num);
		
		if(r == 0){
			printf("A");
		}else if(r == 1){
			printf("C");
		}else if(r == 2){
			printf("G");
		}else if(r == 3){
			printf("T");
		}
	}
}

int main(){
	int i;
	int n;
	scanf("%d", &n);
	
	int num; 
	for(i = 0; i < n; i++){
		scanf("%d", &num);
		base4(num);
		printf("\n");
	}

return(0);	
}

/*Computação (++)
A capacidade natural do ser humano para calcular quantidades, nos mais variados modos, foi um dos
fatores que possibilitaram o desenvolvimento da Matemática, da Lógica e, por conseguinte, da Computação. Nos primórdios da Matemática e da Álgebra, utilizavam-se os dedos das mãos para efetuar cálculos,
daí a origem da palavra dígito.
Por volta do século III a.C., o matemático indiano Pingala inventou o sistema de numeração binário, que
ainda hoje é utilizado no processamento de todos computadores digitais: o sistema estabelece que sequências específicas de 1’s (uns) e 0’s (zeros) pode representar qualquer número, letra, imagem, etc.
Entretanto, a Computação está evoluindo rapidamente e recentemente a SBC (Sociedade Brasileira de Computação) inventou um computador com a base 4 (tetrade), inspirado na Biologia (lembra-se? Adenina, Citosina, Guanina e Timina, as quatro bases nitrogenadas!).
A SBC contratou você para fazer um programa C que receba um número inteiro positivo, na base decimal,
e converta-o para a base 4 utilizando divisões sucessivas. Você deve escrever um programa que, a partir de
uma lista de números, calcule o valor correspondente de cada desses números na base 4.
Observação: Considere que os símbolos utilizados para representar as quantidades ZERO, UM, DOIS
e TRÊS, na base 4 são, respectivamente, A, C, G e T.

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (o
teclado).
A primeira linha contém o número de inteiros N (1 ≤ N ≤ 100) que será digitada.
A segunda linha contém N números inteiros ni, cada um representando um número decimal.

Saída
Seu programa deve imprimir, na saída padrão, os valores correspondentes na base 4 – um por linha –
para cada número decimal digitado.
Exemplos
Observação: Note que as letras (A, C, G, T) são sempre grafadas em maiúsculas.

Entrada Saída
5
1 2 3 4 10
C
G
T
CA
GG
Entrada Saída
2
16 8
CAA
GA
Entrada Saída
9
1 2 3 4 10 16 8 5 11
C
G
T
CA
GG
CAA
GA
CC
GT
Entrada Saída
5
10 20 30 40 50
GG
CCA
CTG
GGA
TAG
Entrada Saída
10
1 2 3 4 1 2 3 4 1 2
C
G
T
CA
C
G
T
CA
C
G
*/
