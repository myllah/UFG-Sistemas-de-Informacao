//16 - Cálculo do imposto de renda
#include <stdio.h>
main(){

	int matricula, dependentes;
	float salarioMinimo, salarioFuncionario, taxaImposto, quantidadeSalarios;
	float impostoBruto, impostoLiquido, diferenca;

	scanf("%d %f %d %f %f", &matricula, &salarioMinimo, &dependentes, &salarioFuncionario, &taxaImposto);
	quantidadeSalarios = salarioFuncionario/salarioMinimo;

	if (quantidadeSalarios > 12)
	{
		impostoBruto = (salarioFuncionario*20)/100;
	} else if (quantidadeSalarios > 5)
	{
		impostoBruto = (salarioFuncionario*8)/100;
	} else if (quantidadeSalarios < 5)
	{
		impostoBruto = 0;
	}

	impostoLiquido = impostoBruto - (300*dependentes);
	taxaImposto = (taxaImposto * salarioFuncionario )/100;
	diferenca =  impostoLiquido - taxaImposto;

	printf("MATRICULA = %d\n", matricula);
	printf("IMPOSTO BRUTO = %.2F\n", truncf(impostoBruto*100)/100);
	printf("IMPOSTO LIQUIDO = %.2F\n", truncf(impostoLiquido*100)/100);
	printf("RESULTADO = %.2f\n", diferenca);

	if (diferenca < 0)
	{
		printf("IMPOSTO A RECEBER\n");
	} else if (diferenca == 0)
	{
		printf("IMPOSTO QUITADO\n");
	} else if (diferenca > 0)
	{
		printf("IMPOSTO A PAGAR\n");
	}

}

/*
16 - Cálculo do imposto de renda (+++)
Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.
Seu programa deverá ler a matrícula de um funcionário, o valor do salário mínimo, o número de dependen-
tes, o salário do funcionário e a taxa de imposto normal que já foi paga pelo funcionário. O imposto bruto
é:
• 20% do salário do funcionário, se o funcionário ganha mais de 12 salários mínimos;
• 8% do salário do funcionário, se o funcionário ganha mais de cinco salários mínimos;
• Zero % do salário do funcionário, se ele ganha cinco salários mínimos ou menos.
Determine o imposto líquido a ser pago pelo funcionário subtraindo R300, 00 no imposto bruto, para cada
dependente do funcionário. O programa calculará e imprimirá o imposto a ser pago ou devolvido, que
é a diferença entre o imposto líquido e o imposto normal descontado do salário do funcionário. Se a
diferença for negativa, o programa deve emitir a mensagem de “imposto a receber”. Se a diferença for um
valor positivo o programa deve emitir a mensagem, “imposto a pagar”, e, se for igual a zero, deve emitir a
mensagem “imposto quitado”.
	Entrada
O programa deve ler uma linha contendo cinco valores na entrada, separados entre si por um espaço:
a matrícula (um número inteiro), o valor do salário mínimo (float), o número de dependentes (inteiro), o
salário do funcionário (float) e a taxa de imposto (float), nesta ordem.
	Saída
O programa deve imprimir quatro linhas, contendo o seguinte:
• MATRICULA = u, onde u é o valor da matrícula do funcionário;
• IMPOSTO BRUTO = v, onde v é o valor do imposto bruto;
• IMPOSTO LIQUIDO = x, onde x é o valor do imposto líquido;
• RESULTADO = w, onde w é o valor da diferença entre o imposto normal e o imposto líquido;
• A mensagem IMPOSTO A RECEBER, se o valor de w for negativo ou a mensagem IMPOSTO
QUITADO, se w for igual a zero, ou a mensagem IMPOSTO A PAGAR, caso w for maior que zero.
Os valores de v,x e w devem conter duas casas decimais.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sha-
rif. Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
21impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/
