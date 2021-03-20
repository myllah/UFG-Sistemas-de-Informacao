//9 - Descrição de inteiros
#include <stdio.h>
#include <string.h>
main(){

	int x, un, dez, cen, mil;
	char sun, sdez, scen, smil;
	scanf("%d", &x);

	un = x%10;
	dez = (x/10)%10;
	cen =(x/100)%10;
	mil = (x/1000)%10;

	if (un == 1) sun = 0; else sun = 's';
	if (dez == 1) sdez = 0 ; else sdez = 's';
	if (cen == 1) scen = 0; else scen = 's';
	if (mil == 1) smil = 0; else smil = 's';

	if (x < 0 || x > 9999) { printf("Numero invalido!\n"); return 0; }

	if (x >= 0 && x <= 99)printf("(segunda ordem) %d = ", x );
	else if (x >= 100 && x <= 999) printf("(terceira ordem) %d = ", x );
	else if (x >= 1000 && x <= 9999) printf("(quarta ordem) %d = ", x );

	if (x >= 0 && x <= 99) {
		if (un == 0){
			printf("%d dezena%c", dez, sdez);
			printf(" = %d0", dez);
		}else{
			printf("%d dezena%c + %d unidade%c", dez, sdez, un, sun);
			printf(" = %d0 + %d\n", dez, un);
		}
	}else if (x >= 100 && x <= 999) {
		if (un == 0 && dez == 0){
			printf("%d centena%c",cen, scen);
			printf(" = %d00\n",cen);
		}else if (un == 0){
			printf("%d centena%c + %d dezena%c",cen, scen , dez, sdez);
			printf(" = %d00 + %d0\n",cen, dez);
		}else if (dez == 0){
			printf("%d centena%c + %d unidade%c",cen, scen, un, sun);
			printf(" = %d00 + %d\n",cen, un);
		}else{
			printf("%d centena%c + %d dezena%c + %d unidade%c",cen, scen, dez, sdez, un, sun);
			printf(" = %d00 + %d0 + %d\n",cen, dez, un);
		}
	}else if (x >= 1000 && x <= 9999){
		if (un == 0 && dez == 0 && cen == 0){
			printf("%d unidade%c de milhar",mil, smil);
			printf(" = %d000\n",mil);
		}else if (un == 0 && dez == 0 ){
			printf("%d unidade%c de milhar + %d centena%c",mil, smil, cen, scen);
			printf(" = %d000 + %d00\n",mil, cen);
		}else if (dez == 0 && cen == 0){
			printf("%d unidade%c de milhar + %d unidade%c",mil, smil, un, sun);
			printf(" = %d000 + %d\n",mil, un);
		}else if (un == 0 && cen == 0){
			printf("%d unidade%c de milhar + %d dezena%c",mil, smil, dez, sdez);
			printf(" = %d000 + %d0\n",mil, dez);
		}else if (un == 0){
			printf("%d unidade%c de milhar + %d centena%c + %d dezena%c",mil, smil, cen, scen, dez, sdez);
			printf(" = %d000 + %d00 + %d0\n",mil, cen, dez);
		}else if (dez == 0){
			printf("%d unidade%c de milhar + %d centena%c + %d unidade%c",mil, smil, cen, scen, un, sun);
			printf(" = %d000 + %d00 + %d\n",mil, cen, un);
		}else if (cen == 0){
			printf("%d unidade%c de milhar +  %d dezena%c + %d unidade%c",mil, smil, dez, sdez, un, sun);
			printf(" = %d000 + %d0 + %d\n",mil, dez, un);
		}else{
			printf("%d unidade%c de milhar + %d centena%c + %d dezena%c + %d unidade%c",mil, smil, cen, scen, dez, sdez, un, sun);
			printf(" = %d000 + %d00 + %d0 + %d\n",mil, cen, dez, un);
		}
	}
}

/*
9 - Descrição de inteiros (++)
Escreva um algoritmo em Linguagem C que leia um número inteiro (maior que zero e de no máximo 4
dígitos), imprima na tela quantas unidades de milhar, centenas, dezenas e unidades formam o número e a
qual ordem o número pertence.
	Entrada
O programa deve ler um número inteiro.
	Saída
O algoritmo deve imprimir a mensagem “Numero invalido!” se o número não está dentro do intervalo
estabelecido e, caso seja válido, realizar a decomposição do número e decidir se as palavras devem ser
impressas no singular ou no plural. Caso a quantidade de uma ordem seja 0, o algoritmo não deve imprimir
a quantidade da ordem.
*/