//12. Valor em Notas e Moedas (+++)

#include<stdio.h>
#include<math.h>

main(){
	int dinheiro;
	int n100 = 0;
	int n50 = 0;
	int n10 = 0;
	int m1 = 0;
	scanf("%d",&dinheiro);
        while(dinheiro >= 100){
            dinheiro = dinheiro-100;
            n100++;
        }

        while(dinheiro >= 50){
            dinheiro = dinheiro-50;
            n50++;
        }

        while(dinheiro >= 10){
            dinheiro = dinheiro-10;
            n10++;
        }

        while(dinheiro <10 && dinheiro >0){
            dinheiro--;
            m1++;
        }

	printf("NOTAS DE 100 = %d\n", n100);
	printf("NOTAS DE 50 = %d\n", n50);
	printf("NOTAS DE 10 = %d\n", n10);
	printf("MOEDAS DE 1 = %d\n", m1);
}
/*
12 Valor em Notas e Moedas (+++)
Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de $R
100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto. O programa deve escrever
a quantidade de cada nota e moeda a ser utilizada.
		Entrada
O programa deve ler uma única linha na entrada, contendo um valor em Reais. Considere que somente
um número inteiro seja fornecido como entrada.
		Saída
O programa deve imprimir quatro frases, uma em cada linha: NOTAS DE 100 = X, NOTAS DE 50 =
Y , NOTAS DE 10 = Z, MOEDAS DE 1 = W, onde X, Y , Z e W correspondem às quantidades de cada
nota ou moeda necessárias para corresponder ao valor em Reais dado como entrada. Após cada quantidade,
o programa deve imprimir um caractere de quebra de linha: ‘\n’.
*/