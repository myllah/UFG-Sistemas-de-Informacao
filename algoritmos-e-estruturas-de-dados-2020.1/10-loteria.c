#include <stdio.h>

int main(){

	int i, j, k;

	//printf("\nDigite os números que foram sorteados na loteria\n");
	int sorteadas[6];
	for(i = 0; i<6; i++){
		scanf("%d", &sorteadas[i]);
	}
	
	int n; scanf("%d", &n);
	
	int loteria[n][6];

	//printf("\nDigite os números marcados na loteria\n");
	for(i = 0; i<n; i++){
		for(j = 0; j<6; j++){
			scanf("%d", &loteria[i][j]);
		}
	}
	
	int count; 
	int quadra = 0, quina = 0, sena = 0;
	for(i = 0; i<n; i++){
		count = 0;
		for(j = 0; j<6; j++){
			for(k = 0; k<6; k++){
				if(loteria[i][j] == sorteadas[k]){
					count++;
				}
			}
		}
		if(count == 4){
			quadra++;
		}else if(count == 5){
			quina++;
		}else if(count == 6){
			sena++;
		}
	}
	
	if(sena > 0){
		printf("Houve %d acertador(es) da sena\n", sena);
	} else{
		printf("Nao houve acertador para sena\n");
	}
	
	if(quina > 0){
		printf("Houve %d acertador(es) da quina\n", quina);
	} else{
		printf("Nao houve acertador para quina\n");
	}
	
	if(quadra > 0){
		printf("Houve %d acertador(es) da quadra\n", quadra);
	} else{
		printf("Nao houve acertador para quadra\n");
	}
	
return 0;
}


/* 1
Loteria (++++)
(++++)
A Mega-Sena é a maior loteria do Brasil. Para ganhar o prêmio máximo é necessário acertar a sena,
o que significa obter coincidência entre seis dos números apostados e os seis números sorteados, de um
total de sessenta dezenas (de 01 a 60), independentemente da ordem da aposta ou da ordem do sorteio.
O concurso prevê também a chance de ganhar parte do prêmio, acertando a quina ou a quadra. A Mega-
Sena foi lançada em março de 1996 e já premiou mais de 200 ganhadores na faixa principal. Os prêmios
correspondem a 32,2% da renda das apostas ao imposto de renda correspondem 13,8% de todas as apostas.
Os vencedores têm 90 dias para retirar o prêmio, se o período expirar, o dinheiro do prêmio será transferido
ao Tesouro Nacional e investido em programas educacionais. Vale lembrar que a probabilidade de acerto
em uma única aposta de 6 dezenas é de 1 em 50.063.860, o que representa um percentual de 0,000002%.
Faça um programa que receba todas as apostas e as seis dezenas sorteadas de um concurso e mostre quantos
vencedores para sena, quina e quadra houve.
Entrada
Na primeira linha da entrada haverá uma linha com as seis dezenas sorteadas, separadas por um espaço
em branco cada. Na linha seguinte haverá um inteiro N, 1 ≤ N ≤ 50000, representando a quantidade de
apostas. Em seguida, em cada uma das N linhas haverá as seis dezenas de cada aposta, sendo que as dezenas
estão no intervalo entre 1 e 60 e sem repetição de dezenas por apostas.
Saída
A saída consiste de 3 linhas contando uma das seguintes frases: “Houve K acertador(es) da sena” ou
“Houve K acertador(es) da quina” ou ainda “Houve K acertador(es) da quadra”, onde K é quantidade de
acertadores para a faixa. Caso não haja acertadores a seguinte frase deve ser apresentada: “Nao houve
acertador para sena” ou “Nao houve acertador para quina” ou ainda “Nao houve acertador para quadra”.
Ao exibir a última frase quebre uma linha.
Exemplo
Entrada
23 12 33 19 10 8
5
23 19 8 12 60 18
14 60 12 44 54 10
8 3 12 19 33 10
33 15 7 60 12 10
22 12 19 23 33 11
Saída
Nao houve acertador para sena
Houve 1 acertador(es) da quina
Houve 2 acertador(es) da quadra

*/
