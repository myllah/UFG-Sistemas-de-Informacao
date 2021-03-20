#include <stdio.h>
main(){

    printf("Hello World!!\n");

    int x;
    printf("Informe um número\n");
    scanf("%d", &x);
    printf("O antecessor e %d e o sucessor e %d \n\n",x-1,x+1);
    printf("////////////////////////////////////////////////\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int lado;
    printf("\nInforme o tamanho do lado do quadrado\n");
    scanf("%d", &lado);
    int area = lado*lado;
    printf("A area do quadrado e %d\n\n", area);
    printf("////////////////////////////////////////////////\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int anoAtual;
    int anoNascimento;
    int ano2050 = 2050;

    printf("\nEm que ano estamos?\n");
    scanf("%d", &anoAtual);

    printf("\nEm que ano você nasceu?\n");
    scanf("%d", &anoNascimento);

    int idade = anoAtual - anoNascimento;
    printf("\nVoce tem %d anos.\n", idade);

    int idade2050 = ano2050 - anoNascimento;
    printf("\nEm 2050 você terá %d anos.\n\n", idade2050);
    printf("////////////////////////////////////////////////\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int salarioMinimo1;
    int salarioFuncionario1;

    printf("\nQuanto e o salario minimo?\n");
    scanf("%d", &salarioMinimo1);

    printf("\nQual o seu salario?\n");
    scanf("%d", &salarioFuncionario1);

    int quantidadeSalarios1 = salarioFuncionario1/salarioMinimo1;
    printf("\nVoce recebe %d salarios minimos.\n\n", quantidadeSalarios1);
     printf("////////////////////////////////////////////////\n");

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int comprimento;
    int altura;
    int largura;
    printf("\nQual o comprimento da caixa d'agua?\n");
    scanf("%d", &comprimento);
    printf("\nQual o altura da caixa d'agua?\n");
    scanf("%d", &altura);
    printf("\nQual o largura da caixa d'agua?\n");
    scanf("%d", &largura);
    int volume = comprimento*altura*largura;
    printf("\nO volume da sua caixa d'agua é %d\n\n", volume);
     printf("////////////////////////////////////////////////\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float salario;
    float horasTrabalhadas;

    printf("\nQual o salario vigente?\n");
    scanf("%f", &salario);
    printf("\nQuantas horas o funcionario trabalhou?\n");
    scanf("%f", &horasTrabalhadas);

    float remuneracaoHora = salario/20;

    float remuneracaoTotal = remuneracaoHora*horasTrabalhadas;
    printf("\nA remuneração total e %f\n\n", remuneracaoTotal);

}


/*
1) Ler um número inteiro e apresentar seu predecessor e seu sucessor;
2) Faça um programa que calcule a área de um quadrado.
3) Faça um algoritmo que receba o ano atual e o ano de seu nascimento. Calcule e mostre a idade
dessa pessoa e quantos anos ela terá em 2050
4) Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário,
calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.
5) Uma pessoa construindo sua residência resolveu colocar em sua casa uma caixa para servir como
reservatório de água. Considerando que a caixa seja retangular, faça um algoritmo que leia as
dimensões da caixa (comprimento, altura e largura), calcule e escreva o volume de água que pode
ser armazenado.
6) Elabore um algoritmo que seja capaz de receber como entrada o valor do salário mínimo vigente
e o número de horas trabalhadas por um operário para, em seguida, calcular e apresentar o valor da
remuneração a ser recebida por ele. Sabe-se que:
a) a hora trabalhada equivale à vigésima parte do salário mínimo;
b) a remuneração total corresponde ao produto entre o valor da hora trabalhada e o
número de horas trabalhadas
*/
