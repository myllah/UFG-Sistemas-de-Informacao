//8. Cálculo da Área de um Triângulo

#include<stdio.h>
#include<math.h>

main(){

	float a;
	float b;
	float c;
	float area;
	float t;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

	t = (a + b + c)/2;
	area = sqrt(t*(t - a)*(t - b)*(t - c));

	printf("A AREA DO TRIANGULO E = %.2f\n", truncf(area*100)/100);
}

/*
8. Cálculo da Área de um Triângulo
Desenvolver um algoritmo para ler os comprimentos dos três lados de um triângulo (L1, L2 e L3) e
calcular a área do triângulo.
	Considerações
A área de um triângulo pode ser computada pela fórmula:
A = srt(T(T − L1)(T − L2)(T − L3))
onde
T = (L1 + L2 + L3)/2

A função s q r t ( ) computa a raiz quadrada de uma expressão. Para usar essa função você deve incluir o
arquivo de cabeçalho math . h, inserindo a seguinte diretiva de pré-processamento logo no início do seu
arquivo com o programa em C: # i n cl u d e <math . h>
			Entrada
O programa deve ler três valores reais na entrada, cada um correspondendo ao comprimento de um lado
do triângulo. Cada valor ocorre em uma linha diferente na entrada.
			Saída
O programa deve imprimir uma linha contendo a frase: A AREA DO TRIANGULO E = X, onde X é
o valor da área do triângulo e deve conter no máximo 2 casas decimais. Após o valor da área do triângulo,
o programa deve imprimir um caractere de quebra de linha: "\n".
			Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas diferenças de
uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34 enquanto outra imprime
x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif. Para evitar isso,
vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f", truncf(x*100)/100);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/