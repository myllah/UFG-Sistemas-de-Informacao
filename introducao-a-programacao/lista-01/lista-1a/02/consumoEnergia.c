//2 Consumo de energia (+)

#include<stdio.h>
#include<math.h>

main(){

	float salarioMinimo, quantidadeKW, custoKW, custoConsumo, custoDesconto;

	scanf("%f", &salarioMinimo);
	scanf("%f", &quantidadeKW);


	custoKW = ((salarioMinimo*70)/100)/100;
	custoConsumo = custoKW * quantidadeKW;
	custoDesconto = (custoConsumo - (custoConsumo*10)/100);


	printf("Custo por kW: R$ %.2f\n", truncf(custoKW*100)/100);
	printf("Custo do consumo: R$ %.2f\n", truncf(custoConsumo*100)/100);
	printf("Custo com desconto: R$ %.2f\n", truncf(custoDesconto*100)/100);
}

/*
2 Consumo de energia (+)
Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um algoritmo em Linguagem
C que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência. Calcule e
imprima:
• o valor em reais de cada kW;
• o valor em reais a ser pago pelo consumo da residência;
• o novo valor a ser pago pela residência com um desconto de 10%.
		Entrada
O programa deve ler o valor do salário mínimo e a quantidade de kW gasta por uma residência. Ambos
os valores são reais.
		Saída
O programa deve imprimir três linhas contento o texto:
Custo por kW: R$ x.xx
Custo do consumo: R$ x.xx
Custo com desconto: R$ x.xx
		Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas diferenças de
uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34 enquanto outra imprime
x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif. Para evitar isso,
vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f", truncf(x*100.0)*100.0);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/