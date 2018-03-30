//13. Sistemas de Equação Linear (++++)

#include<stdio.h>
#include<math.h>

main(){

	float a, b, c, d, e, f, x, y;

	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    //ax + by = c
    //dx + ey = f

    ///-- multiplicar - d - em cima e - a - em embaixo para anular x --

    //a*x + b*y = c (*d)
    //d*x + e*y = f (*a)

    //a*d*x + b*d*y = c*d
    //d*a*x + e*a*y = f*a

    /// -- adx == dax. Ou seja, adx - dax == 0 --

    //b*d*y = c*d
    //e*a*y = f*a

    /// -- Isolando y --

	//y = c*d / b*d
    //y = f*a / e*a

    y = (c * d - f * a) / (b * d - e * a);

    /// -- Já temos valor de y, então nos resta achar valor de x. Isolar x --

    //ax + by = c
    //ax = c - by
    //x = (c - by)/a , que é o mesmo que x = c/a - (by)/a;

    x = c/a - (b*y)/a;

	printf("O VALOR DE X E = %.2f\n", truncf(x*100)/100);
	printf("O VALOR DE Y E = %.2f\n", truncf(y*100)/100);
}

/*
Sistemas de Equação Linear (++++)
Dado um sistema de equações lineares do tipo:
ax + by = c
dx + ey = f
Escreva um programa para ler os valores dos coeficientes: a, b, c, d, e e f e calcular os valores de x e y.
	Entrada
O programa deve ler os valores de a, b, c, d, e, f nesta ordem, um valor por linha. Os valores são
números reais (float).
	Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DE X E = z, onde z é o valor da
variável x, escrito com duas casas decimais. O programa deve imprimir uma segunda linha contendo a
frase: O VALOR DE Y E = w, onde w corresponde ao valor da variável y escrito com duas casas decimais.
Ao final da segunda linha o programa deve imprimir um caractere de quebra de linha: ‘\n’.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f ", x);
O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas diferenças de
uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34 enquanto outra imprime
x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif. Para evitar isso,
vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f", truncf(x*100.0)/100.0);
A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar sustas casas decimais) e
depois divide o número por 100.0 novamente, fazendo com que o número seja impresso truncado em duas
casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34; dividido por 100: 0.34.
*/
