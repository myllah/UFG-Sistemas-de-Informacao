//5 Cálculo do Delta na Equação de Báskara

#include<stdio.h>
#include<math.h>

main(){
	float a;
	float b;
	float c;
	float delta;

	//printf("Digite o valor de a\n");
	scanf("%f", &a);
	//printf("Digite o valor de b\n");
	scanf("%f", &b);
	//printf("Digite o valor de c\n");
	scanf("%f", &c);

	delta = b*b - 4*a*c;

	printf("O VALOR DE DELTA E = %.2f\n", truncf(delta*100)/100);
}

/*
Fazer um programa para ler os valores dos coeficientes A, B e C de uma equação quadrática e calcular
e imprimir o valor do discriminante (∆). O valor de ∆ é dado pela fórmula: ∆ = B2 − 4AC.
		Entrada
O programa deve ler três valores reais na entrada. O primeiro valor corresponde ao valor do coeficiente
A, o segundo, do coeficiente B e o terceiro, do coeficiente C, de uma equação do seguro grau. Cada valor
ocorre em uma linha diferente na entrada.
		Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DE DELTA E = X, onde X é o valor de delta
computado pelo seu programa e deve conter no máximo 2 casas decimais. Após o valor de delta, o programa
deve imprimir um caractere de quebra de linha: "\n".
		Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais.
Esse arredondamento pode ter pequenas diferenças de uma máquina para outra. por exemplo, se x= 0.34561,
uma máquina pode imprimir 0.34 enquanto outra imprime x=0.35. Isso pode fazer com que seu programa
seja considerado errado pelo Sharif. Para evitar isso, vamos usar um "truncamento do número x"usando a
função truncf(): printf("%.2f", truncf(x*100.0)/100.0);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/