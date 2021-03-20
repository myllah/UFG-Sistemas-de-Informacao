//6 Volume da Pirâmide de Base Hexagonal

#include<stdio.h>
#include<math.h>

main(){

	float alturaPiramide;
	float arestaHexagono;
	float volume;
	float areaHexagono;

	//printf("Digite a altura da piramide\n");
	//printf("Digite o comprimento da aresta do hexágono\n");
	scanf("%f %f", &alturaPiramide, &arestaHexagono);
	areaHexagono = (3*(arestaHexagono*arestaHexagono) * sqrt(3))/2;
	//printf("area Hexagono %f\n", areaHexagono);
	volume = (1 * areaHexagono * alturaPiramide)/3;

	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", truncf(volume *100)/100);
}

/*
6 Volume da Pirâmide de Base Hexagonal
O volume (V ) de uma pirâmide cuja base é um hexágono regular é computado pela Equação 1:
v = 1/3· Ab · h
onde h é a altura da pirâmide e Ab é a área do hexágono que forma a base da pirâmide. A área do
hexágono é computada pela Equação 2:
Ab = (3 · a^2·√3)/2,
onde a é o comprimento de uma aresta do hexágono regular.
		Entrada
O programa deve ler uma linha com dois números float, separados entre si por um espaço. O primeiro
número corresponde à altura da pirâmide e o segundo número corresponde a uma aresta do hexágono que
forma a abase da pirâmide. Ambos são valores em metros.
		Saída
O programa deve emitir a frase: O VOLUME DA PIRAMIDE E = x METROS CUBICOS, onde x é o
valor do volume da pirâmide em metros cúbicos e com duas casas decimais. Ao final da frase o programa
deve imprimir o caractere de quebra de linha (\n).
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