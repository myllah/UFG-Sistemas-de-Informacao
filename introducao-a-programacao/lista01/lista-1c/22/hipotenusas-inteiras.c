//22 - Hipotenusas inteiras

#include <stdio.h>
main(){

	int c1 = 1, c2 = 1, n, h = 1;
	scanf("%d", &n);

	while(h <= n){
		while(c1 <= n){
			while(c2 <= n){
				if (((c1*c1) + (c2*c2)) == (h*h)){
					if (c1 < c2){
						printf("hipotenusa = %d, catetos %d e %d \n", h, c1, c2);
					}
				}
				c2++;
			}
			c1++;
			c2 = 1;
		}
    h++;
    c1 = 1;
    c2 = 1;
	}
}

/*
22 - Hipotenusas inteiras (+++)

(IME-USP) Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que são compri-
mento da hipotenusa de um triângulo retângulo com catetos inteiros. Para cada valor de hipotenusa válido
no intervalo de 1 a n, imprimir todos os pares de catetos que formam um triângulo retângulo distinto com
aquele valor de hipotenusa.
	Entrada
O programa deve ler um valor inteiro n maior que zero.
	Saída
O programa deve apresentar uma linha com o texto: "hipotenusa = h, catetos c 1 e c 2 ", onde h é uma hi-
potenusa inteira, c 1 e c 2 são seus catetos inteiros, de modo que c 1 ≤ c 2 . No caso de haver mais de um par de
catetos válidos para um mesmo valor de hipotenusa, por exemplo (c1, c2), (c3, c4), . . . (c k , c k+1 ), imprima
os pares de tal modo que o valor do primeiro cateto seja menor ou igual ao valor do segundo cateto de um
mesmo par e que o valor do primeiro cateto de um par seja menor que o valor do primeiro cateto do par de
subsequente. Por exemplo, para um valor de hipotenusa igual a 85, existem os seguintes pares de catetos:
(13, 84), (40, 75), (36, 77)e(51, 68). Nesse caso a saída deve ser a seguinte:
			hipotenusa = 85, catetos 13 e 84
			hipotenusa = 85, catetos 36 e 77
			hipotenusa = 85, catetos 40 e 75
			hipotenusa = 85, catetos 51 e 68
*/
