//14- Transcrição de datas
#include <stdio.h>
main()
{
	int data, dia , mes , ano;

	//printf("Digite a data (ex: 01012001)\n");
	scanf("%d", &data);

	dia = data / 1000000;
	mes = (data/10000)%100;
	ano = data%10000;


	if (mes == 1)
	{
		if (dia <= 0 || dia >31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de janeiro de %d\n", dia, ano);
		}
	} else if (mes == 2)
	{
		if (dia <= 0 || dia > 28)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de fevereiro de %d\n", dia, ano);
		}
	} else if (mes == 3)
	{
		if (dia <= 0 || dia >31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de marco de %d\n", dia, ano);
		}
	} else if (mes == 4)
	{
		if (dia <= 0 || dia > 30)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de abril de %d\n", dia, ano);
		}
	} else if (mes == 5)
	{
		if (dia <= 0 || dia >31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de maio de %d\n", dia, ano);
		}
	} else if (mes == 6)
	{
		if (dia <= 0 || dia > 30)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de junho de %d\n", dia, ano);
		}
	} else if (mes == 7)
	{
		if (dia <= 0 || dia >31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de julho de %d\n", dia, ano);
		}
	} else if (mes == 8)
	{
		if (dia <= 0 || dia > 31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de agosto de %d\n", dia, ano);
		}
	} else if (mes == 9)
	{
		if (dia <= 0 || dia >30)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de setembro de %d\n", dia, ano);
		}
	} else if (mes == 10)
	{
		if (dia <= 0 || dia > 31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de outubro de %d\n", dia, ano);
		}
	} else if (mes == 11)
	{
		if (dia <= 0 || dia >30)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de novembro de %d\n", dia, ano);
		}
	} else if (mes == 12)
	{
		if (dia <= 0 || dia > 31)
		{
			printf("Data invalida!\n");
		} else {
			printf("%d de dezembro de %d\n", dia, ano);
		}
	}
	// if (mes < 0 || mes > 12)
	// {
	// 	printf("Data invalida!\n");
	// }
}

/*
Transcrição de datas(++)
Faça um algoritmo que leia uma data no formato ddmmaaaa usando um único número inteiro. Escreva
a mesma data no formato dia/mês/ano, <dia> de <mês por extenso> de <ano>. O programa deve verificar
se o número informado representa uma data válida. Caso não seja, imprimir na tela a mensagem "Data
invalida!". Considere que o ano em questão nunca é bissexto, ou seja, fevereiro tem somente 28 dias.
	Entrada
Um número inteiro positivo com 8 dígitos.
	Saída
O programa deve apresentar a transcrição da data no formado "dd de mês por extenso de aa".
*/