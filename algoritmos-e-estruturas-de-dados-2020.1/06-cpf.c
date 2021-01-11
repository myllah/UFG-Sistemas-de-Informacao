
#include <stdio.h>

int verificarb1(int cpf[][11], int i){

	int k;
	int b1; 

	int soma = 0;
	for(k = 1; k< 10; k++){
		soma = soma + cpf[i][k] * k;
	}

	if(soma%11 == 10){
		b1 = 0;
	}else{
		b1 = soma%11;
	}

	if(b1 == cpf[i][10]){
		return 1;
	}else{
		return 0;
	}
}

int verificarb2(int cpf[][11], int i){
	int k, l;
	int b2;
	int soma = 0;
	
	for(k = 1, l = 9; k < 10; k++, l--){
		soma = soma + cpf[i][k] * l;
	}

	if(soma%11 == 10){
		b2 = 0;
	}else{
		b2 = soma%11;
	}

	if(b2 == cpf[i][10]){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	
	int i;

	int t; scanf("%d", &t);

	int cpf[t][11];

	for(i = 0; i < t; i++){
		scanf("%d %d %d %d %d %d %d %d %d %d %d", &cpf[i][1], &cpf[i][2], &cpf[i][3], &cpf[i][4], &cpf[i][5], &cpf[i][6], &cpf[i][7], &cpf[i][8], &cpf[i][9], &cpf[i][10], &cpf[i][11]);
	}

	for(i = 0; i < t; i++){
		if(verificarb1(cpf, i) == 1){
			printf("CPF valido\n");
		}else{
			printf("CPF invalido\n");
		}
	}

return 0;
}

/*CPF (+++)

Você foi contratado pelas Indústrias Udilandenses (INUDIL) para desenvolver uma maneira de verificar
se o Cadastro de Pessoa Física (CPF) indicado por um cliente era válido ou não. Conversando com amigos,
você chegou à conclusão de que um CPF seria válido se a soma de todos os seus dígitos resultasse em
número múltiplo de 11. Após verificação minuciosa, você descobriu que essa maneira só funciona em cerca
de 80% dos casos, e você precisa de mais do que isso para garantir a qualidade do seu trabalho. Após
pesquisar mais, você descobriu que dos 11 dígitos do CPF, os dois últimos são verificadores e dependem
dos 9 dígitos anteriores. Vamos introduzir alguma notação. Considere um CPF com os seguintes dígitos
a 1 a 2 a 3 a 4 a 5 a 6 a 7 a 8 a 9 − b 1 b 2
Para descobrirmos o dígito b 1 , procedemos da seguinte maneira: multiplicamos o primeiro dígito por 1,
o segundo por 2, o terceiro por 3, o quarto por 4 e vamos assim até multiplicarmos o nono por 9. Então,
somamos tudo isto. Após termos somado tudo, dividimos por 11. O dígito b 1 será o resto da divisão (ou 0,
caso o resto seja 10).
Para o segundo dígito verificador, temos o seguinte: multiplicamos o primeiro elemento por 9, o segundo
por 8, o terceiro por 7, o quarto por 6 e vamos assim até multiplicarmos o nono por 1. Então, somamos tudo
isto e dividimos por 11. O dígito b 2 será o resto da divisão (ou 0, caso o resto seja 10).
Sabendo que isso vale para 100% dos CPFs, sua missão é implementar um programa que, dado um CPF,
diga se ele é válido ou não.

Entrada
A entrada conterá uma linha com um inteiro T , que indica o número de casos de testes. Esta linha é
seguida por T linhas, cada uma contendo uma sequência de 11 dígitos decimais, separados entre sis por um
espaço. Após o último dígito decimal segue o caractere de quebra de linha.

Saída
Para cada candidato a CPF da entrada, escreva "CPF valido", se ele for um CPF válido e, escreva "CPF
invalido", em caso contrário.

Exemplos
Entrada
5
0 4 8 8 5 6 8 2 9 6 3
7 3 3 1 8 4 6 8 0 9 6
2 2 7 5 1 8 4 7 1 0 8
0 9 2 8 4 4 8 4 2 8 6
0 9 8 4 4 7 8 9 5 5 5
Saída
CPF invalido
CPF valido
CPF invalido
CPF valido
CPF invalido
*/
