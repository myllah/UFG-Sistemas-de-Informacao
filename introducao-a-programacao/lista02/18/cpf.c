//18 - CPF

#include <stdio.h>
main(){

	int i = 1, icpf, teste, contrario, cpf[11], B1, B2;

	scanf("%d", &teste);

	while(i <= teste){

	    icpf = 1;
        B1 = 0;
        B2 = 0;
        contrario = 9;

		while(icpf <= 11)
		{
			scanf("%d", &cpf[icpf]);

		icpf++;
		}

		icpf = 1;

		while(icpf <= 9){

			B1 = B1 + (cpf[icpf]*icpf);
			B2 = B2 + (cpf[icpf]*contrario);

			icpf++;
			contrario--;

		}

		B1 = B1%11;
		B2 = B2%11;

		if (B1 == 10) { B1 = 0; }
		if (B2 == 10) { B2 = 0; }

		if (cpf[10] == B1 && cpf[11] == B2)
		{
			printf("CPF valido\n");

		}else if (cpf[10] != B1 || cpf[11] != B2)
		{
			printf("CPF invalido\n");
		}

    i++;
	}

}

/*
18 - CPF (+++)
Você foi contratado pelas Indústrias Udilandenses (INUDIL) para desenvolver uma maneira de verificar
se o Cadastro de Pessoa Física (CPF) indicado por um cliente era válido ou não. Conversando com amigos,
você chegou à conclusão de que um CPF seria válido se a soma de todos os seus dígitos resultasse em
número múltiplo de 11. Após verificação minuciosa, você descobriu que essa maneira só funciona em cerca
de 80% dos casos, e você precisa de mais do que isso para garantir a qualidade do seu trabalho. Após
pesquisar mais, você descobriu que dos 11 dígitos do CPF, os dois últimos são verificadores e dependem
dos 9 dígitos anteriores. Vamos introduzir alguma notação. Considere um CPF com os seguintes dígitos

						a1 a2 a3 a4 a5 a6 a7 a8 a9 − b1 b2

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
seguida por T linhas, cada uma contendo uma sequência de 11 dígitos decimais, separados entre si por um
espaço. Após o último dígito decimal segue o caractere de quebra de linha.
	Saída
Para cada candidato a CPF da entrada, escreva "CPF valido", se ele for um CPF válido e, escreva "CPF
invalido", em caso contrário.
*/
