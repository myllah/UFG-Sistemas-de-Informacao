//9. Decolagem (++)

#include<stdio.h>
#include<math.h>

main(){

	double massa, aceleracao, tempoSegundos, velocidade, velocidade2, espacoPercorrido, trabalhoRealizado;

	scanf("%lf %lf %lf", &massa, &aceleracao, &tempoSegundos);

	velocidade = aceleracao * tempoSegundos;
	velocidade2 = velocidade *3.6;
	espacoPercorrido = (aceleracao*pow(tempoSegundos, 
		2))/2;
	trabalhoRealizado = ((massa*1000) * pow(velocidade,2))/2;

	printf("VELOCIDADE= %.2lf\n", truncf(velocidade2*100.0)/100.0);
	printf("ESPACO PERCORRIDO= %.2lf\n", truncf(espacoPercorrido*100.0)/100.0);
	printf("TRABALHO REALIZADO= %.2lf\n", truncf(trabalhoRealizado*100.0)/100.0);
}

/*
9. Decolagem
Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua aceleração (m/s2) e o tempo (s)
que levou do repouso até a decolagem. O programa deve calcular e escrever a velocidade atingida (Km/h),
o comprimento da pista (m) e o trabalho mecânico realizado (J) no momento da decolagem.
		Dicas
• v = velocidade; a = aceleração; t =
tempo;
• m = massa;
• s = espaço percorrido;
• W = trabalho mecânico realizado;
• Um double deve ser lido com "%lf"
• 1 m/s = 3,6 Km/ h;
• v = a * t;
• s = at2 / 2;
• W = mv2 / 2;
• A massa utilizada no trabalho é em Kg
		Entrada
O programa deve ler três linhas de entrada. A primeira linha contém um valor do tipo double representando
a massa do avião em toneladas. A segunda linha, contém um valor do tipo double correspondente
à aceleração de avião. A terceira, linha contém um valor do tipo double correspondente ao tempo em
segundos gasto na decolagem.
		Saída
O programa deve imprimir três linhas. A primeira, contém a frase: VELOCIDADE = x, onde x é o
valor da velocidade do avião em Km/h. A segunda, contém a frase: ESPACO PERCORRIDO = y, onde
y corresponde ao espaço em metros percorrido pelo avião durante a decolagem. A terceira linha contém a
frase: TRABALHO REALIZADO = z, onde z corresponde ao valor do trabalho em Joules, realizado pelo
avião durante a decolagem. Os valores de x, y e z devem ser do tipo double e devem conter duas casas
decimais e após esses valores deve vir o caractere de quebra de linha \n.
		Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas diferenças de
uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34 enquanto outra imprime
x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif. Para evitar isso,
vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f", truncf(x*100.0)/100.0);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/