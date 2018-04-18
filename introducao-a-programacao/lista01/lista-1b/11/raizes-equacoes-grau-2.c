//11 - Raízes de equações de grau 2
#include <stdio.h>
#include <math.h>
main(){

	float a, b, c, x1, x2, delta;
	scanf("%f %f %f", &a, &b, &c);

	delta = pow(b,2) - 4*a*c;

	x1 = (-b + (sqrt(delta)) )/(2*a);

	x2 = (-b - (sqrt(delta)) )/(2*a);

	if (delta > 0)
	{
		printf("RAIZES DISTINTAS\n");
		printf("X1 = %.2f\n", truncf(x1*100)/100);
		printf("X2 = %.2f\n", truncf(x2*100)/100);
	}

	else if (delta == 0)
	{
		printf("RAIZ UNICA\n");
		printf("X1 = %.2f\n", truncf(x1*100)/100);
	}

	else if (delta < 0)

	{
		printf("RAIZES IMAGINARIAS\n");
	}
}

/*
11 - Raízes de equações de grau 2 (++)
Desenvolver um programa que leia os coeficientes (a, b e c) de uma equação de segundo grau e calcule
as raízes da equação. O programa deve mostrar a classificação das raízes, e, quando possível, o valor das
raízes calculadas.
	Entrada
O programa deve ler três valores reais na entrada. O primeiro valor corresponde ao valor do coeficiente
a, o segundo, do coeficiente b e o terceiro, do coeficiente c, de uma equação de segundo grau. Os três
valores ocorrem em uma única linha na entrada, separados entre si por um espaço.
	Saída
O programa deve imprimir uma linha contendo uma das seguintes frases, conforme for o resultado do
cálculo das raízes da equação: RAIZES DISTINTAS, ou RAIZ UNICA, ou RAIZES IMAGINARIAS. No
primeiro caso o programa deve imprimir uma outra linha contendo a frase X1 = x 1 , onde x 1 é o valor da
menor raiz encontrada para a equação. Ainda no primeiro caso, o programa deve imprimir uma terceira
linha com a frase X2 = x 2 , onde x 2 corresponde ao valor da segunda raiz. No segundo caso, o programa
deve imprimir uma frase X1 = x 1 , onde x 1 é o valor da única raiz da equação. O terceiro caso não há o que
imprimir pois as raízes são imaginárias.
	Observações
• Dada uma equação do segundo grau do tipo ax 2 + bx + c, ∆ (delta) = b 2 − 4ac. Se ∆ = 0, a raiz da
equação é ÚNICA. Se ∆ < 0. As raízes da equação são IMAGINÁRIAS. Se ∆ > 0, então há duas
RAÍZES DISTINTAS para a equação. A fórmula geral para computar as raízes de uma equação do
segundo grau é a fórmula de Báskara, dada por:

								x = - b ± (sqrt (∆))
								    ----------------
											2a
*/
