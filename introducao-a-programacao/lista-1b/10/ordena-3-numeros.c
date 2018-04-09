//10 - Ordena 3 números
#include <stdio.h>
main(){

  /*  float i = 1, maior = 0, menor = 0, medio = 0, aux = 0;

	//printf("Digite os numeros: ");

	do{
	  scanf("%f", &aux );
		 if (i == 1){
			menor = aux;
		 }
		 if ( aux > maior ){
			medio = maior;
			maior = aux;
		}
		 if ( aux < menor){
			 menor = aux;
		} if (aux < maior && aux > menor){
			medio = aux;
		}
		i++;
	}while (i <= 3);

	printf("%.2f, %.2f, %.2f\n", truncf(menor*100)/100, truncf(medio*100)/100, truncf(maior*100)/100);
  }*/

   float i = 1, a = 0, b = 0, c = 0;

	//printf("Digite os numeros: ");
	scanf("%f", &a );
	scanf("%f", &b );
	scanf("%f", &c );

	if (a >= b && a >= c)
	{
		if (c >= b)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100);

		} else if (b >= c)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100);

		}
	} else if (b >= a && b >= c)
	{
		if (c >= a)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100);

		} else if (a >= c)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100);

		}
	} else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100);

		} else if (a >= b)
		{
			printf("%.2f, %.2f, %.2f\n", truncf(b*100)/100, truncf(a*100)/100, truncf(c*100)/100);

		}
	}
}

/*
10 - Ordena 3 números (++)
Escreva um algoritmo que leia 3 números reais em qualquer ordem e os apresente de forma ordenada
na tela.
	Entrada
O programa deve ler 3 valores reais.
	Saída
O programa deve imprimir uma linha contento a lista ordenada de números separados por vírgula e
espaço, cada número com 2 casas decimais.
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
