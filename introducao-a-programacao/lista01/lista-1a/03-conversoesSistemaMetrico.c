//3. Conversões para o Sistema Métrico (+)

#include<stdio.h>
#include <math.h>
main(){
    float tempF;
    float chuvaPol;
    float tempC;
    float chuvaMil;

    //printf("Digite a temperatura em Fahrenheit.\n");
	scanf("%f", &tempF);
	//printf("Digite a quantidade de chuva em polegadas.\n");
	scanf("%f", &chuvaPol);

	tempC = (5*(tempF - 32))/9;
	chuvaMil = chuvaPol*25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", truncf(tempC*100.0)/100.0);
	printf("A QUANTIDADE DE CHUVA E = %.2f\n", truncf(chuvaMil*100.0)/100.0);
}

/*
3. Conversões para o Sistema Métrico (+)
Muitos países estão passando a utilizar o sistema métrico. Faça um programa para executar as seguintes
conversões:
• Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius (C =(5(F −32))/9).
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25.4 mm).
			Entrada
O programa deve ler dois valores na entrada: um valor em Fahrenheit e outro valor em polegadas.
Ambos os valores são do tipo float. Cada valor ocorre em uma linha diferente na entrada.
			Saída
O programa deve imprimir duas linhas. Aa primeira contém a frase: O VALOR EM CELSIUS = X,
onde X é o valor de temperatura convertido de Fahrenheit para Celsius e deve ter duas casas decimais. A
segunda linha deve conter a frase: A QUANTIDADE DE CHUVA E = Y, onde Y é o valor em milímetros
correspondente ao valor em polegadas dado como entrada. Y é um valor real (float) e deve ter duas casas
decimais. Logo após o valor de Y, o programa deve imprimir o caractere de quebra de linha ‘\n’.
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas diferenças de
uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34 enquanto outra imprime
x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif. Para evitar isso,
vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f", truncf(x*100.0)*100.0);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/