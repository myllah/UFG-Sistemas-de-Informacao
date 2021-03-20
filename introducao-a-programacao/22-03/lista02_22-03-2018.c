#include <stdio.h>
#include <math.h>

#define PI 3.14

main(){

	printf("Hello World!!\n");
	printf("/////////////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////


    float baseMenorTrapezio, baseMaiorTrapezio, alturaTrapezio, areaTrapezio;

    printf("\nInforme a base menor do trapezio\n");
    scanf("%f", &baseMenorTrapezio);
    printf("Informe a base maior do trapezio\n");
    scanf("%f", &baseMaiorTrapezio);
    printf("Informe a altura do trapezio\n");
    scanf("%f", &alturaTrapezio);
    printf("A area do trapezio e: %.2f \n\n", ((baseMenorTrapezio + baseMaiorTrapezio)*alturaTrapezio)/2);
    printf("/////////////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////

 	float rendaJose;

 	printf("\nDigite a Renda Mensal de Jose\n");
 	scanf("%f", &rendaJose);

 	printf("A renda mensal de Jose eh %.2f\n", rendaJose);
 	printf("Jose distribui sua renda da seguinte forma:\n");
 	printf("10%% para saude, ou seja, %.2f\n", (rendaJose*10)/100);
 	printf("25%% para educacao, ou seja, %.2f\n", (rendaJose*25)/100);
 	printf("30%% para alimentacao, ou seja, %.2f\n", (rendaJose*30)/100);
 	printf("10%% para vestuario, ou seja, %.2f\n", (rendaJose*10)/100);
 	printf("5%% para lazer, ou seja, %.2f\n", (rendaJose*5)/100);
 	printf("20%% para outros, ou seja, %.2f\n", (rendaJose*20)/100);
 	printf("/////////////////////////////////////////////////////////\n");

////////////////////////////////////////////////////////////////////////////////////////////


 	float quantidade, custo, altura, raio, area;

	printf("\nDigite a altura do tanque cilindrico de combustivel\n");
	scanf("%f", &altura);
	printf("\nDigite o raio do tanque cilindrico de combustivel\n");
	scanf("%f", &raio);

	area = 2 * PI * raio * (raio + altura);
	quantidade = area/15;
	custo = 50 * quantidade;

	printf("A area do tanque cilíndrico eh %.2f metros quadrados\n", area);

	printf("\nCada lata pinta 15 metros quadrados, portanto, vão ser necesarias %.2f latas de tinta.\n",quantidade);

	printf("\nCada lata custa 50 reais, portanto, o custo será %.2f R$\n", custo);

	printf("/////////////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////

 	float num1, num2;

 	printf("\nInforme o primeiro numero\n");
 	scanf("%f", &num1);
 	printf("Informe o segundo numero\n");
 	scanf("%f", &num2);

 	if(num1 > num2){
 		printf("%.2f eh maior que %.2f\n", num1, num2);

 	} else if(num1 < num2){
 		printf("%.2f eh maior que %.2f\n", num2, num1);

 	} else {
 		printf("Os numeros sao iguais\n");
 	}

	printf("/////////////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////

 	int num;

 	printf("\nInforme um numero\n");
 	scanf("%d", &num);

 	if(num % 2 == 0){
		printf("\n%d é par\n", num);
 	} else if(num % 2 == 1 || num%2 == -1){
		printf("\n%d é impar\n", num);
 	} else{
		printf("ERRO\n");
 	}

 	printf("/////////////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////

 	int m, n;

 	printf("\nInforme um numero\n");
 	scanf("%d", &m);
 	printf("\nInforme outro numero\n");
 	scanf("%d", &n);

 	if(m%n == 0){
		printf("\n%d é divisível por %d.\n",m, n);
 	} else if(m%n > 0 || m%n < 0){
		printf("\n%d não é divisível por %d.\n",m, n);
 	} else{
		printf("ERRO\n");
 	}
}

/*
01) Faça um programa que calcule e mostre a área de um trapézio ((base maior + base menor) *
altura)/2
02) José distribui sua renda mensal da seguinte forma: 10% saúde, 25% educação, 30%
alimentação, 10% vestuário; 5% lazer, 20% outros. Faça um algoritmo que leia a renda mensal
liquida de José, calcule e escreva o valor aplicado em cada item acima citado.
03) Construa um algoritmo que calcule a quantidade de latas de tinta necessária e o custo para
pintar tanques cilíndricos de combustível, em que são fornecidos a altura e o raio desse cilindro.
Sabe-se que: a) A lata de tinta custa 50 reais; b) A lata contém 5 litros; c) Cada litro pinta 3 metros
quadrados).
04) Faça um programa para, dados dois números, decidir qual deles é o maior.
05) Faça um programa para ler um número inteiro e determinar se ele é par ou ímpar.
06) Faça um programa para ler dois números inteiros M e N e determinar se M é divisível por N.
*/
