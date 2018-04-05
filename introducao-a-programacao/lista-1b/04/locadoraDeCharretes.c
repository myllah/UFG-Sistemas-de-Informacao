//4 Locadora de charretes
#include <stdio.h>
#include <math.h>

main(){

	int horas, horasInteiras;
	float valor, horasQuebradas;

	//printf("Digite a quantidade de horas que o locatario utilizou a charrete\n");
	scanf("%d", &horas);

	if (horas%3 == 0){
		valor = 10*(horas/3);
		printf("O VALOR A PAGAR E = %.2f\n", truncf(valor*100)/100);
	}

	 else if (horas%3 != 0){

		horasInteiras = truncf(horas/3);
		horasQuebradas = horas%3;
		valor = 10*horasInteiras+ horasQuebradas*5;

		printf("O VALOR A PAGAR E = %.2f\n", truncf(valor*100)/100);
	}

}

/*4 Locadora de charretes (+)
Uma locadora de charretes cobra R$ 10,00 de taxa para cada 3 horas de uso de uma charrete e R$5,00
para cada 1 hora abaixo dessas 3 horas. Fazer um programa que leia a quantidade de horas que a charrete
foi usada e que calcule e escreva quanto o cliente tem de pagar.
	Entrada
O programa deve ler uma única linha na entrada, contendo o número de horas que o locatário utilizou a
charrete.
	Saída
O programa deve imprimir uma linha contendo a frase: O VALOR A PAGAR E = X, onde X é o valor
do aluguel e deve conter no máximo 2 casas decimais. Após o valor do aluguel o programa deve imprimir
um caractere de quebra de linha: ‘\n’.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif.
Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)/100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/
