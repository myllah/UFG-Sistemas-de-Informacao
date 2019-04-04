
#include<stdio.h>

main(){

int n;
scanf("%d", &n);
imprimeNumeros(n);
}

void imprimeNumeros(int n){
    if (n > 1){
        imprimeNumeros(n-1);
    }
    printf("%d ", n);
}

/*
1 Imprimir números naturais usando recursividade (+)

Os números naturais são os números utilizados ordinariamente para contagem: 1,2,3,... e, por isso, às
vezes são chamados de números de contagem. Eles são ditos naturais devido à nossa experiência natural,
geralmente na infância, em que apenas manipulamos quantidades discretas de objetos: uma balinha, dois
chiquetes, um pedaço de bolo, e certa quantidade de outras guloseimas. Ou, ainda, quando reclamávamos
de ter “muitas tarefas” que a professora havia “passado” para casa – em verdade eram apenas três pequenos
exercícios,!
Ao matemático alemão Leopold Kronecker (1823 – 1891) está associada a seguinte frase:
“Deus criou os números naturais; o resto é obra do homem.”.
Há polêmica quanto ao numeral 0 (zero) pertencer, ou não, aos números naturais, já que, habitualmente, não
se inicia uma contagem pelo valor “zero”. Entretanto ele representa um conceito importante: a ausência de
elementos num conjunto, seja ele abstrato ou concreto.
A Matemática contemporânea representa o conjunto destes números por meio do símbolo N, incluindo o 0
(zero). Para excluí-lo utiliza-se o asterisco como expoente: N∗.
A partir deste conceito inicial a respeito dos números naturais, deseja-se que você escreva um programa,
em C, para imprimir os n primeiros números naturais usando o conceito de recursividade, que os define da
seguinte maneira:
n0 = 0
ni+1 = ni +1,i ∈ {0,1,2,...}

Entrada
A única linha da entrada contém um único natural n, indicando que se deseja imprimir os n primeiros
números naturais, sendo que n ∈ N∗.

Saída
Seu programa deve imprimir uma única linha, contendo os n primeiros números naturais separados por
um único espaço entre eles.

Exemplos
Entrada
37
Saida
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36 37
2
Entrada
50
Saída
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47
48 49 50
Observação: Nos exemplos a saída parece ocupar mais de uma linha devido à restrição de largura da
página. Apesar disso, considere que todos os números apresentados na saída estão numa única linha.
*/
