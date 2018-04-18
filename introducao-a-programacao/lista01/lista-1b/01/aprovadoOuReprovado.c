//1 Aprovado ou Reprovado
#include <stdio.h>
#include <math.h>

main(){
	float n1, n2, n3;
	float media = 0;

	//printf("Digite as notas do aluno\n"); 
	scanf("%f %f %f", &n1, &n2, &n3);

	media = (n1 + n2 + n3)/3;
	printf("MEDIA = %.2f\n", truncf(media*1000)/1000);

	if (media >= 6) {
		printf("APROVADO\n");
	} else {
		printf("REPROVADO\n");
	}
}

/*
1 Aprovado ou Reprovado (+)
Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "APROVADO", caso a média seja igual ou superior a seis, ou a mensagem
"REPROVADO", caso contrário.
	Entrada
A entrada conterá uma linha com as três notas do aluno, separadas entre si por um caractere de espaço.
	Saída
A saída deve conter duas linhas. A primeira linha deve conter uma frase com o seguinte formato:
MEDIA = x, onde x é o valor da média entre as três notas do aluno, contendo duas casas decimais. A
segunda linha contém uma das duas mensagens: APROVADO ou REPROVADO. Após o valor da média e
após a mensagem, o programa deve imprimir o caractere de quebra de linha: ‘\n’.
	Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif.
Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)/100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/