//15 - Classificação do Aço
#include <stdio.h>

main() {

	int cc, dr, rt, testCC = 0, testDR = 0, testRT = 0, grau = 0;
	scanf("%d %d %d", &cc, &dr, &rt);

	if (cc < 7) { testCC = 1; }
	if (dr > 50) { testDR = 1; }
	if (rt > 80000) { testRT = 1; }

	if ((testCC == 1) && (testDR == 1) && (testRT == 1))
		{
			grau = 10;
		} else if (testCC == 1 && testDR == 1)
		{
			grau = 9;
		} else if (testCC == 1)
		{
			grau = 8;
		} else {
			grau = 7;
		}

	printf("ACO DE GRAU = %d\n", grau);
}

/*
15 - Classificação do Aço (+++)
Um certo aço é classificado de acordo com o resultado de três testes abaixo, que devem determinar se o
mesmo satisfaz às especificações:
1. Conteúdo de Carbono abaixo de 7.
2. Dureza Rockwell maior do que 50.
3. Resistência à tração maior do que 80.000 psi.
Ao aço é atribuído o grau “10” se passar por todos os testes; grau “9” se passar somente nos testes 1 e
2; grau “8” se passar no teste 1 apenas; grau “7” caso o aço não se enquadre nos graus, “10”, “9”, e “8”.
Desenvolver um programa que leia o conteúdo do carbono (CC), a dureza Rockwell (DR) e a resistência
à tração (RT) e fornece a classificação do aço.
	Entrada
A entrada é formada por três linhas. A primeira, contém um valor inteiro correspondendo ao conteúdo
do carbono (CC). A segunda linha contém um valor inteiro correspondendo à dureza Rockwell (DR). A
terceira linha, contém um valor inteiro correspondendo à resistência à tração (RT).
	Saída
O programa deve imprimir uma linha, contento a frase ACO DE GRAU = x, onde x é um dos graus
possíveis de classificação do aço (7, 8, 9, ou 10). Após o valor do grau do aço, o program deve imprimir o
caractere de quebra de linha ‘\n’.
*/