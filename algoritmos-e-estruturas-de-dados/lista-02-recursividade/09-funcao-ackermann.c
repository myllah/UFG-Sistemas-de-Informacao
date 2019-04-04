#include <stdio.h>

main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n",fack(m, n));
}

int fack(int m, int n){

	if(m == 0){
		return(n+1);
	} else if(n == 0 && m > 0){
		return(fack(m-1, 1));
	} else if(n > 0 && m > 0){
		return(fack(m-1, fack(m, n-1)));
	}

}

/*
9 Função Ackermann (+)

Na teoria da computabilidade, a Função de Ackermann (fack),
nomeada por Wilhelm Friedrich Ackermann (1896 – 1962),
é um dos mais simples exemplos de uma função computável 
que não é função recursiva primitiva. Todas as funçõe
recursivas primitivas são totais e computáveis, mas a
Função de Ackermann mostra que nem toda função
total-computável é recursiva primitiva.
Depois que Ackermann publicou sua função (que continha três
números naturais como argumentos), vários
autores a modificaram para atender a diversas finalidades. 
Então, a fack pode ser referenciada a uma de suas
várias formas da função original.
Uma das versões mais comuns, a Função de Ackermann-Péter,
que possui apenas dois argumentos, é definida a seguir para 
números naturais m e n:
 			
 				(n+1),							se m = 0
fack(m,n) =	{	fack(m−1,1), 				se n = 0,m > 0
				fack(m−1, fack(m,n−1)),		 se n > 0,m > 0

Entrada
A única linha da entrada contém dois números naturais m e n 
separados por um único espaço em branco,
nesta ordem, representando os parâmetros para a Função de Ackermann.

Saída
Seu programa deve imprimir uma única linha com o valor da fack 
para os dois parâmetros recebidos.

Exemplos
Entrada 	Saída
0 7 	      8
Entrada 	Saída
3 0			  5
Entrada 	Saída
3 2 		  29
Entrada 	Saída
2 4 		  11
*/