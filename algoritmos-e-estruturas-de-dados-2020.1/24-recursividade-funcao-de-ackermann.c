#include <stdio.h>

int fack(int m, int n){
	if(n == 0 && m > 0){
			return(fack (m - 1, 1));
	}else if(n > 0 && m > 0){
			return(fack (m - 1, fack (m, n - 1)));
	}
	return(n + 1);
}	

int main(){

int m, n;
scanf("%d%d", &m, &n);

printf("%d\n", fack(m,n));

return (0);
}


/*Função de Ackermann (+)
Na teoria da computabilidade, a Função de Ackermann ( f ack ), nomeada por Wilhelm Friedrich Ac-
kermann (1896 – 1962), é um dos mais simples exemplos de uma função computável que não é função
recursiva primitiva. Todas as funções recursivas primitivas são totais e computáveis, mas a Função de Ac-
kermann mostra que nem toda função total-computável é recursiva primitiva.
Depois que Ackermann publicou sua função (que continha três números naturais como argumentos), vários
autores a modificaram para atender a diversas finalidades. Então, a f ack pode ser referenciada a uma de suas
várias formas da função original.
Uma das versões mais comuns, a Função de Ackermann-Péter, que possui apenas dois argumentos, é defi-
nida a seguir para números naturais m e n:

(n + 1),							se m = 0
fack (m − 1, 1),					se n = 0, m > 0
f ack (m − 1, f ack (m, n − 1)), 	se n > 0, m > 0

Entrada
A única linha da entrada contém dois números naturais m e n separados por um único espaço em branco,
nesta ordem, representando os parâmetros para a Função de Ackermann.

Saída
Seu programa deve imprimir uma única linha com o valor da f ack para os dois parâmetros recebidos.

Exemplos
Entrada
0 7
Saída
8
Entrada
3 0
Saída
5
Entrada
3 2
Saída
29
Entrada
Saída
2 4
Saída
11
*/
