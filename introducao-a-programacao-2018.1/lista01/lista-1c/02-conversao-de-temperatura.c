//2-Conversão de temperatura (+)
#include <stdio.h>
main(){

    int quantidade, i;
    float f, c;

    scanf("%d", &quantidade);

    for(i = 1; i <= quantidade; i++){

        scanf("%f", &f);

        c = (5*(f-32))/9;

        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n\n", f , truncf(c*100)/100);

    }

}

/*
2-Conversão de temperatura (+)
Escreva um programa que imprima uma tabela de conversão de graus Fahrenheit para graus Celsius.
Dado um valor de temperatura F medida na escala Fahrenheit, seu valor equivalente C na escala Celsius é
dado pela seguinte equação:
C = (5(F −32))/9
    Entrada
A entrada conterá várias linhas. A primeira delas contém o número n de temperaturas em Fahrenheit a
serem convertidas para Celsius. Cada uma das n linhas seguintes contém um valor real (float) com a medida
de uma temperatura em graus Fahrenheit.
    Saída
O programa deve imprimir n linhas cada uma no seguinte formato x FAHRENHEIT EQUIVALE A y
CELSIUS, onde x corresponde a um valor de temperatura em Fahrenheit e y corresponde ao valor equivalente
em graus Celsius. Logo após a palavra CELSIUS em cada linha de saída deve ser impresso o caractere
de quebra de linha. Os valores de x e y devem ser impressos com duas casas decimais.
    Observação
Os valores floats podem sofrer variações de uma máquina para outra. Quando se usa printf ("%.2f
", x); O printf arredonda o float x para duas casas decimais. Esse arredondamento pode ter pequenas
diferenças de uma máquina para outra. por exemplo, se x= 0.34561, uma máquina pode imprimir 0.34
enquanto outra imprime x=0.35. Isso pode fazer com que seu programa seja considerado errado pelo Sharif.
Para evitar isso, vamos usar um "truncamento do número x"usando a função truncf(): printf("%.2f",
truncf(x*100.0)*100.0); A expressão acima multiplica o valor de x por 100.00 antes de trunca-lo (podar
sustas casas decimais) e depois divide o número por 100.0 novamente, fazendo com que o número seja
impresso truncado em duas casas decimais. No exemplo: 0.34561*100.00= 34.561. truncf(34.51) = 34;
dividido por 100: 0.34. Para truncar em uma casa decimal, multiplique e depois divida por 10.0. Se for
com três casas decimais, multiplique e depois divida por 1000.0, e assim por diante.
*/
