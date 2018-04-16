//14 - Número de finais
#include <stdio.h>
main(){

	int i=1, times, iA = 1, iB = 1;
	scanf("%d", &times);

	if (times < 2)
	{
		printf("Campeonato invalido!\n");
	}

	while(iA <=times){
		iB = iA;
		while(iB <= times) {
			if (iA != iB) {
				printf("Final %d: Time%d X Time%d\n",i, iA, iB);
				i++;
			}
			iB++;
		}
		iA++;
	}
}
/*
14 - Número de finais (++)

Em um campeonato de futebol os times são nomeados como Time1, Time2, ..., TimeN. A organização
do campeonato deseja saber quais são as finais possíveis dado a quantidade N de times. Para resolver esse
problema, você foi contratado para fazer um programa de computador que, dada a quantidade N de times,
imprima todas as configurações possíveis de finais.
	Entrada
O programa deve ler um número N, inteiro e positivo, referente à quantidade de times do campeonato.
	Saída
O programa deve apresentar na tela a sequência de finais com cada linha no formato: Final k: Timei X
Time j, onde k é um contador de finais, i e j são as denominações de cada time. Caso o número de times
informado for menor que 2, então o programa deve imprimir a mensagem: "Campeonato invalido!".
*/
