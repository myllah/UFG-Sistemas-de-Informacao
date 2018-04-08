//6 - Reajuste salarial

#include <stdio.h>
main()
{
	float salario, reajuste;
	//printf("Digite o salario\n");
	scanf("%f", &salario);

	if (salario >0 && salario <= 300)
	{
		reajuste = (salario*50)/100;
	} else if (salario >300)
	{
		reajuste = (salario*30)/100;
	}

	printf("SALARIO COM REAJUSTE = %.2f\n", truncf((salario + reajuste)*100)/100);
}
/*
6 - Reajuste salarial (+)
Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com as
seguintes regras:
• Salário de até R$ 300,00, reajuste de 50%;
• Salário maior que R$300,00 reajuste de 30%;
	Entrada
A entrada conterá uma linha com o salário do funcionário.
	Saída
A saída deve conter, numa linha com a frase: SALARIO COM REAJUSTE = x, onde x é um valor real
com duas casas decimais e corresponde ao valor do salário reajustado. Logo em seguida ao valor de x, o
programa devem imprimir o caractere de quebra de linha: ‘\n’.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sha-
rif. Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/
