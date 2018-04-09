//2-Conta de Água
#include <stdio.h>
#include <stdio.h>

main(){

	int conta;
	float consumo, valorR, valorC, valorI;
	char tipoConsumidor;

	//printf("Digite o numero da conta\n");
	//printf("Digite o consumo de agua por metros cubicos\n");
	//printf("Digite o tipo de consumidor(‘C’ - COMERCIAL, ‘I’ - INDUSTRIAL ou ‘R’ - RESIDENCIAL)\n");

	scanf("%d %f %c", &conta, &consumo, &tipoConsumidor);

	printf("CONTA = %d\n", conta);

	if (tipoConsumidor == 'r' || tipoConsumidor == 'R')
	{
		valorR = consumo*0.05 + 5;
		printf("VALOR DA CONTA = %.2f\n", truncf(valorR*100)/100);
	}

	else if (tipoConsumidor == 'c' || tipoConsumidor == 'C')
	{
		if (consumo <= 80)
		{
			valorC = 500;
			printf("VALOR DA CONTA = %.2f\n", truncf(valorC*100)/100);
		} else if (consumo > 80)
		{
			valorC = (consumo - 80)*0.25 + 500;
			printf("VALOR DA CONTA = %.2f\n", truncf(valorC*100)/100);
		}
	}

	else if (tipoConsumidor == 'i' || tipoConsumidor == 'I')
	{
		if (consumo <= 100)
		{
			valorI = 800;
			printf("VALOR DA CONTA = %.2f\n", truncf(valorI*100)/100);
		} else if (consumo > 100)
		{
			valorI = (consumo - 100)*0.04 + 800;
			printf("VALOR DA CONTA = %.2f\n", truncf(valorI*100)/100);
		}
	}
}

/*
2- Conta de Água (+)
Desenvolver um programa para calcular a conta de água para uma empresa de saneamento. O custo da
água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para
calcular a conta é:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por metros cúbicos gastos;
• Comercial: R$ 500,00 para os primeiros 80 metros cúbicos gastos mais R$ 0,25 por metros cúbicos
gastos;
• Industrial: R$ 800,00 para os primeiros 100 metros cúbicos gastos mais R$ 0,04 por metros cúbicos
gastos;
O programa deverá ler a conta do cliente, o consumo de água por metros cúbicos e o tipo de consumidor
( residencial, comercial e industrial ). Como resultado, o programa deve imprimir a conta
do cliente e o valor em Reais a ser pago pelo mesmo.
		Entrada
O programa deverá ler uma linha na entrada contendo: a conta do cliente (um número inteiro), o consumo
de água por metros cúbicos (float) e o tipo do consumidor (um caractere: ‘C’ - COMERCIAL, ‘I’ -
INDUSTRIAL ou ‘R’ - RESIDENCIAL). Há um espaço entre os valores na linha de entrada
		Saída
O programa deve imprimir duas linhas, contendo o seguinte:
• CONTA = u, onde u é o código inteiro identificador da conta;
• VALOR DA CONTA = v, onde v é o valor da conta com duas casas decimais, a ser pago pelo consumidor;
Após o valor impresso em cada linha, o programa dev imprimir o caractere de quebra de linha; ‘\n’. Os
valores de v,x e w devem conter duas casas decimais.
		Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif.
Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/