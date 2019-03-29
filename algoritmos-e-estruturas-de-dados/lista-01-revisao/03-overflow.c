
#include <stdio.h>

main(){

int n, conta;
scanf("%d", &n);

int x, y; char c;
scanf("%d %c %d", &x, &c, &y);

if(c == '+'){
    conta = x + y;
} else
if(c == 'x' || c == 'X'){
    conta = x * y;
}else{
    printf("Caractere inválido");
    exit(0);
}

if(n >= conta){
    printf("ok");
}else{
    printf("overflow");
}

}

/*

3 overflow (++)

Os computadores digitais foram inventados para realizar cálculos muito rapidamente e, atualmente,
atendem a esse requisito de maneira extraordinária. Porém, nem toda “conta” pode ser feita num computador
digital típico, pois ele não consegue representar todos os números dentro de um único endereço de memória.
Num típico, e simples, computador pessoal atual, por exemplo, o maior inteiro que é possível representar
numa unidade de sua memória é 18.446.744.070.000.000.000 (264 − 1). Caso alguma “conta” executada
pelo computador dê um resultado acima desse número, ocorrerá o que chamamos de overflow, que é quando
o computador faz uma “conta” e o resultado não pode ser representado, por ser maior do que o valor máximo
permitido (em inglês overflow significa trasbordar).
Por exemplo, se um computador fictício somente pode representar números menores ou iguais a 1023
(210 − 1) e mandarmos ele executar a conta 1022 + 5, vai ocorrer um overflow, já que o resultado deste
cálculo é maior que 1023.
Elabore um programa C que seja capaz de receber o maior número que um computador consegue representar em
sua memória e uma expressão de soma ou de multiplicação entre dois inteiros positivos, determine
se ocorrerá, ou não, overflow naquele computador.
    Entrada
A primeira linha da entrada contém um inteiro N representando o maior número que o computador
consegue representar.
A segunda linha contém um inteiro N1, seguido de um espaço em branco, de um caractere C (que pode ser
‘+’ ou ‘x’, representando os operadores de adição e de multiplicação, respectivamente), de outro espaço
em branco, e, finalmente, de outro número inteiro N2.
Assim, a segunda linha da entrada representa a expressão N1 +N2 , se o caractere C for ‘+’, ou N1 ×N2, se
o caractere C for ‘x’.
    Saída
Seu programa deve imprimir a palavra ‘overflow ’ se o resultado da expressão causar um overflow no
computador, ou a palavra ‘ok ’ caso contrário.
Ambas as palavras devem ser escritas com todas as letras minúsculas.
    Exemplos
Entrada          Saída
10
5 + 5             ok
Entrada         Saída
44
23 x 2          overflow
*/
