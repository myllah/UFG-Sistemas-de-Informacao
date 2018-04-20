//21 - Triângulo ou trapézio?

#include <stdio.h>
main(){

	float a, b, c, perimetro, area;
	scanf("%f %f %f", &a, &b, &c);

	if (((b-c) < a && a < (b + c)) && ((a-c) < c < (a+c)) && ((a-b) < c < (a+b)))
	{

		perimetro = a + b + c;
		printf("Perimetro = %.1f\n", truncf(perimetro*100)/100);
	}

	else{

		area = ((a + b)*c)/2;
		printf("Area = %.1f\n", truncf(area*100)/100);
	}

}

/*
21 - Triângulo ou trapézio? (+++)

Leia três valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e imprima a mensagem:
Perimetro = XX.X
Caso os valores não formem um triângulo, calcule a área do trapézio que tem A e B como base e C como
altura, mostrando a mensagem:
Area = XX.X
	Entrada
A entrada é formada por uma linha contendo três valores decimais separados um do outro por um espaço
em branco.
	Saída
A saída deve conter em uma única linha a frase apropriada. Observe nos exemplos acima que a saída
deve conter apenas uma casa decimal. Os valores “X” que aparecem nos formatos são substituídos por
dígitos que formam o valor de saída. Depois desses valores o programa deve imprimir o caractere de
quebra de linha: ‘\n’.
	Observações
Para que os três valores: A, B e C formem um triângulo as três condições abaixo devem ser satisfeitas:
• |b − c| < a < b + c;
• |a − c| < b < a + c;
• |a − b| < c < a + b;
• Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ",
x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir
0.34 enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado
pelo Sharif. Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf():
printf("%.2f", truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes
de trunca-lo (podar sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo
com que o número seja impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00=
34.561. truncf(34.51) = 34; dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique
e depois divida por 10.0. Se for com três casas decimais, multiplique e depois divida por 1000.0, e
assim por diante.
A área de um trapézio é computada como

						Área = (A + B)∗C
							  -----------
							  		2

Para imprimir um valor float com apenas uma casa decimal você deve usar a função printf com o código
de formato "%.1f".
*/
