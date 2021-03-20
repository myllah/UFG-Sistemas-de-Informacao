//7. Tempo em segundos

#include<stdio.h>
#include<math.h>

main() {
	
	int h;
	int m;
	int s;
	int segundos;

	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &s);

	segundos = (h*60*60)+ (m*60) + s;

	printf("O TEMPO EM SEGUNDOS E = %d\n", segundos);
}

/*
7 Tempo em segundos
Fazer um programa que leia um valor de tempo expresso em horas, minutos e segundos e que converta
esse tempo para um valor em segundos.
			Entrada
O programa deve ler três linhas na entrada. A primeira contém um valor em horas, a segunda, contém
um valor em minutos e a terceira, contém um valor em segundos. Os valores são todos números inteiros.
			Saída
O programa deve imprimir uma linha contendo a frase: O TEMPO EM SEGUNDOS E = X, onde X é
o valor do tempo convertido em segundos. Após o valor do tempo em segundos, o programa deve imprimir
um caractere de quebra de linha: ‘\n’.
*/