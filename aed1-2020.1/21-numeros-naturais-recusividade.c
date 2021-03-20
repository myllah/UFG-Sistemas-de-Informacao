#include<stdio.h>

int numerosNaturais(int n, int i){
	if(i == n){
		return n;
	}else{
		//if(i == 0){
		//	printf("%d ", i);
		//}
		printf("%d ", i);
		return numerosNaturais(n, i+1);
	}
}

int main(){

//printf("Digite um número");
int n; scanf("%d", &n);

//printf("Estes são os número naturais até %d:\n", n);

printf("%d\n",numerosNaturais(n, 1));

return 0;
}


/*Imprimindo números naturais recursivamente (+)

Os números naturais são os números utilizados ordinariamente para contagem:
N ∗ = {1, 2, 3, . . . }
e, por isso, às vezes são chamados de números de contagem. Eles são ditos naturais devido à nossa experi-
ência natural, geralmente na infância, em que apenas manipulamos quantidades discretas de objetos: uma
balinha, dois chiquetes, um pedaço de bolo, e certa quantidade de outras guloseimas. Ou, ainda, quando re-
clamávamos de ter “muitas tarefas” que a professora havia “passado” para casa – em verdade eram apenas
três pequenos exercícios!
Ao matemático alemão Leopold Kronecker (1823 – 1891) está associada a seguinte frase:
“Deus criou os números naturais; o resto é obra do homem.”.
Por algum tempo houve polêmica quanto ao numeral 0 (zero) pertencer, ou não, aos números naturais, já
que, habitualmente, não se inicia uma contagem pelo valor “zero”. Entretanto ele representa um conceito
importante: a ausência de elementos num conjunto, seja ele abstrato ou concreto.
A Matemática contemporânea representa o conjunto destes números por meio do símbolo N, incluindo o 0
(zero). Para excluí-lo utiliza-se o asterisco como expoente: N ∗ , como feito no exemplo inicial desta questão.
A partir deste conceito inicial a respeito dos números naturais, deseja-se que você escreva um programa,
em C, para imprimir os n primeiros números naturais usando o conceito de recursividade, que os define da
seguinte maneira:
n 0 = 0
n i+1 = n i + 1, i ∈ {0, 1, 2, . . . }

Entrada
A única linha da entrada contém um único natural n, indicando que se deseja imprimir os n primeiros
números naturais, sendo que n ∈ N ∗ e n ≤ 5000.

Saída
Seu programa deve imprimir uma única linha, contendo os n primeiros números naturais separados por
um único espaço em branco entre eles.

Exemplos
Entrada
37
Saída
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36 37
Entrada
50
Saída
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47
48 49 50
Observação: Nos exemplos anteriores a saída parece ocupar mais de uma linha devido à restrição de
largura da página impressa. Apesar disso, considere que todos os números apresentados na saída estão
numa única linha da saída.

*/
