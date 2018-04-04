#include <stdio.h>
#include <math.h>

#define PI 3.14

main(){

/*
1- Faça um algoritmo que leia dois números, calcule e escreva a divisão do
primeiro pelo segundo (considere o segundo diferente de zero)
*/

    float a, b , divisaoAB;

    printf("\nDigite o primeiro numero\n"); scanf("%f", &a);

    printf("\nDigite o segundo numero\n"); scanf("%f", &b);

    if(b == 0){
    	printf("\nOperacao Invalida\n");
    } else{
    	divisaoAB = a/b;
    	printf("\nO valor da divisao do primeiro valor pelo segundo e %.2f\n", divisaoAB);
	}
    printf("\n/////////////////////////////////////////////////////////\n");

/*
2- Faca um algoritmo que leia 3 números, calcule e escreva a multiplicação
deles.
*/

    float c, d, e, multiplicacaoCDE;

    printf("\nDigite o primeiro numero\n"); scanf("%f", &c);

    printf("\nDigite o segundo numero\n"); scanf("%f", &d);

    printf("\nDigite o terceiro numero\n"); scanf("%f", &e);

    multiplicacaoCDE = c*d*e;
    printf("\nA multiplicacao entre esses tres numeros e %.2f\n", multiplicacaoCDE);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
3-Faca um algoritmo que leia a idade do pai e a idade do filho, calcule e
escreva a diferenca de idade dos dois
*/

    int idadePai, idadeFilho, diferencaPaiFilho;

    printf("\nDigite a idade do pai\n"); scanf("%d", &idadePai);

    printf("\nDigite a idade do filho\n"); scanf("%d", &idadeFilho);

    diferencaPaiFilho = idadePai - idadeFilho;

    printf("\nA diferenca entre a Idade do Pai e do Filho e %d\n", diferencaPaiFilho);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
4-Faça um algoritmo que leia a idade de uma pessoa em anos, calcule e
escreva quantos dias ele viveu. Considerar um ano com 365,25 dias.
*/

    float idadeDaPessoa;

    printf("\nDigite a idade\n"); scanf("%f", &idadeDaPessoa);

    printf("\nVoce viveu %.2f dias\n", 365.25 * idadeDaPessoa);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
5- Faca um algoritmo que leia tres numeros, calcule e escreva a media
aritmetica
*/
    float f, g, h, mediaFGH;

    printf("\nDigite o primeiro numero\n"); scanf("%f", &f);

    printf("\nDigite o segundo numero\n"); scanf("%f", &g);

    printf("\nDigite o terceiro numero\n"); scanf("%f", &h);

    mediaFGH = (f + g + h)/3;
    printf("\nA media entre esses tres numeros e %.2f\n", mediaFGH);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
6- Faca um algoritmo que leia as medidas de um retangulo (comprimento e
largura), calcule e escreva sua area.
*/
    float comprimentoA, larguraA, areaA;

    printf("\nInforme o comprimento do retangulo\n"); scanf("%f", &comprimentoA);

    printf("\nInforme a largura do retangulo\n"); scanf("%f", &larguraA);

    areaA = comprimentoA * larguraA;
    printf("\nA area do retangulo e %.2f\n", areaA);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
7- Faca um programa que receba o peso de uma pessoa. Calcule e escreva o
novo peso, se a pessoa emagrecer 20% do peso informado
*/

    float pesoA, novoPesoA;

    printf("\nInforme o seu peso\n"); scanf("%f", &pesoA);

    novoPesoA = (pesoA*20)/100;

    printf("\nSe voce emagrecer 20%%, voce teria %.2f quilos\n", pesoA - novoPesoA);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
8- Faca um programa que receba o salario dos funcionarios, calcule e mostre
o novo salario sabendo-se que este sofreu um aumento de 25%%.
*/

    float salarioA, aumentoA;

    printf("\nQual e o salario?\n"); scanf("%f", &salarioA);
    aumentoA = (salarioA*25)/100;
    printf("\nO novo salario e %f\n", salarioA + aumentoA);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
9- Faca um programa que receba o solario de um funcionario e o percentual de
aumento, calcule e mostre o valor do aumento e o novo salario
*/
    float salarioB, aumentoB, totalAumentoB;

    printf("\nQual e o salario?\n"); scanf("%f", &salarioB);

    printf("\nQual e o percentual de aumento?\n"); scanf("%f", &aumentoB);

    totalAumentoB = (salarioB * aumentoB)/100;

    printf("\nO aumento e %.2f\n", totalAumentoB );
    printf("\nPortanto, o novo salario e %.2f\n", totalAumentoB + salarioB);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
10-Faca um programa que receba o salario base de um funcionario, calcule e
mostre o salario a receber, sabendo-se que o funcionário tem gratificação de
5% sobre o salario base e paga imposto de 7% sobre este salario
*/

    float salarioC, gratificacaoC, impostoC;

    printf("\nQual e o salario base?\n"); scanf("%f", &salarioC);

    gratificacaoC = (salarioC *5 )/100;

    impostoC = (((salarioC + gratificacaoC)*7) /100);

    printf("\nO salario a receber e %.2f\n", salarioC - impostoC);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
11-Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a
quantidade de salários mínimos que esse funcionário ganha.
*/

    float salarioMinimoD, salarioFuncionarioD;

    printf("\nDigite o valor do salario minimo\n"); scanf("%f", &salarioMinimoD);

	printf("\nInforme o valor do salario do funcionario\n"); scanf("%f", &salarioFuncionarioD);

	printf("\nO funcionario recebe %.2f salarios minimos\n", salarioFuncionarioD/salarioMinimoD);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
12-João faz economias em dólar e deseja saber quanto vale em reais, faça um algoritmo
que leia a quantidade de dólares que ele possui e a cotação do dólar em real, calcule
e escreva o valor convertido.
*/


	float dolaresA, cotacaoDolarRealA;

	printf("\nInforme quantos dolares Joao tem\n"); scanf("%f", &dolaresA);

	printf("\nInforme a cotacao do Dolar em Real\n"); scanf("%f", &cotacaoDolarRealA);

	printf("%.2f dolares convertidos para real e %.2f\n", dolaresA, dolaresA*cotacaoDolarRealA);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
13-Uma pessoa construindo sua residência resolveu colocar em sua casa uma caixa para
servir como reservatório de água.
Considerando que a caixa seja retangular, faça um algoritmo que leia as dimensões a caixa
(comprimento, altura e largura), calcule e escreva o volume de água que pode ser armazenado.
*/

	float comprimentoB, alturaB, larguraB, volumeB;

    printf("\nDigite o comprimento da caixa d'agua\n"); scanf("%f", &comprimentoB);

    printf("\nDigite a altura da caixa d'agua\n"); scanf("%f", &alturaB);

    printf("\nDigite a largura da caixa d'agua\n"); scanf("%f", &larguraB);

    volumeB = comprimentoB * alturaB * larguraB;
    printf("\nO volume da caixa d'agua e %.2f\n", volumeB);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
14-Faça um programa que calcule e mostre a área de um círculo.
*/

    float areaB, raioB;

    printf("\nDigite o raio do circulo\n"); scanf("%f", &raioB);

    areaB = PI * (pow(raioB,2));

    printf("\nArea do circulo = %.2f\n", areaB);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
15-Faça um programa que calcule e mostre a área de um trapézio ((base maior + base menor) * altura)/2.
*/

    float baseMenorTrapezioA, baseMaiorTrapezioA, alturaTrapezioA, areaTrapezioA;

    printf("\nInforme a base menor do trapezio\n"); scanf("%f", &baseMenorTrapezioA);
   
    printf("\nInforme a base maior do trapezio\n"); scanf("%f", &baseMaiorTrapezioA);
   
    printf("\nInforme a altura do trapezio\n"); scanf("%f", &alturaTrapezioA);
   
    printf("\nA area do trapezio e: %.2f\n", ((baseMenorTrapezioA + baseMaiorTrapezioA)*alturaTrapezioA)/2);
    printf("\n/////////////////////////////////////////////////////////\n");

/*
16-Faça um algoritmo que receba um número positivo e maior que zero, calcule e mostre: o número digitado ao
quadrado e a raiz quadrada desse número.
*/

    float numA, numAQuadrado, numARaiz;

    printf("\nInforme um numero\n"); scanf("%f", &numA);
    
    if(numA > 0){

        numAQuadrado = pow(numA, 2);
        numARaiz = sqrt(numA);
        
        printf("\n%.2f ao quadrado e = %.2f \n", numA, numAQuadrado);
        printf("\nA raiz de %.2f e = %.2f \n", numA, numARaiz);
    }

    printf("\n/////////////////////////////////////////////////////////\n");


/*
17-Faça um algoritmo que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
*/

    float numB, numC, elevadoBC;

    printf("\nInforme um numero\n"); scanf("%f", &numB);
    printf("\nInforme outro numero\n"); scanf("%f", &numC);
    
    if(numB > 0 && numC > 0){

        elevadoBC = pow(numB, numC);
        
        printf("\n%.2f ao elevado a %.2f e = %.2f \n", numB, numC, elevadoBC);

    }

    printf("\n/////////////////////////////////////////////////////////\n");


}
