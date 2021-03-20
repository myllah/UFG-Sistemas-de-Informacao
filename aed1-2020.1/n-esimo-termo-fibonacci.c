#include<stdio.h>

main(){

int n;
scanf("%d", &n);
printf("%d\n",fibonacci(n));
}

int fibonacci(int n){
    if (n == 0){
        return(0);
    }else if (n == 1){
        return(1);
    }
    return(fibonacci(n-1) + fibonacci(n-2));
}

/*

2 Encontrar n-ésimo termo da série de Fibonacci usando recursividade (+)

Sem dúvida, a chamada “Sequência de Fibonacci”, ou “Sucessão de Fibonacci”, é uma das mais famosas
sequências numéricas da Matemática. Os dois primeiros termos desta sequência são f0 = 0 e f1 = 1. A
partir do terceiro termo, cada termo é obtido somando-se os dois termos imediatamente anteriores a ele, ou
seja:
fn = fn−1 + fn−2, com n ∈ N e n ≥ 2
Portanto,os seus dez primeiros termos são 0,1,1,2,3,5,8,13,21,34.
Muitas fontes históricas registram que ela foi “descoberta” (ou “inventada”) por Leonardo Fibonacci (1170
– 1250), um matemático italiano que também ficou conhecido como Leonardo de Pisa, sua cidade de nascimento, pois apenas no século XIX ficou associado ao nome Fibonacci que, de maneira aproximativa,
significa “o filho de Bonacci”, em referência ao seu pai Guglielmo dei Bonacci, um próspero mercador.
Aos 32 anos, em 1202, Fibonacci publicou o livro Liber Abaci (Livro do Ábaco ou Livro de Cálculo),
um livro de receitas a respeito de como realizar cálculos e que foi o responsável pela disseminação dos
números hindu-arábicos na Europa. Num trecho desta obra, Leonardo introduz a sequência por meio de um
problema envolvendo coelhos. O problema dizia que:
“Iniciando com um par de coelhos – um macho e uma fêmea – depois de um mês eles de tornam
sexualmente adultos e produzem um par de filhotes, também um macho e uma fêmea. Novamente, um
mês depois, estes coelhos reproduzem e geram outro par macho-fêmea, os quais, por sua vez, também
gerarão outro par macho-fêmea depois de um mês (Claro: ignore aqui a pequeníssima probabilidade de que
isto efetivamente ocorra no mundo natural dos coelhos.) A questão é: depois de um ano, quantos coelhos
haverá?”
A resposta ao problema é obtida por meio do uso da Sequência de Fibonacci – veja “The 11 most beautiful Mathematical equations” em https://www.livescience.com/57849-greatest-mathematical-equations.
html. Uma curiosidade é que, depois disso, Leonardo nunca mais citou a sequência, que ficou esquecida
até o século XIX quando matemáticos que trabalhavam em propriedades de sequências numéricas a recuperaram, cabendo ao matemático francês Édouard Lucas (1842 – 1891) ter nomeado, oficialmente, o problema
dos coelhos com o nome de “Sequência de Fibonacci”.
Entretanto, sabe-se hoje, que Leonardo não descobriu ou inventou a famosa sequência (veja a obra de
Keith Devlin intitulada Finding Fibonacci: The Quest to Rediscover the Forgotten Mathematical Genius
Who Changed the World, Princeton University Press, 2017), pois citações a ela aparecem em textos antigos,
em Sânscrito, muito antes da sua menção por Leonardo.
Vamos a um problema envolvendo-a:
Considere que seja dado um número n, n ∈ N∗. Usando o conceito de recursividade, elabore um programa em C para imprimir o termo de ordem n na “Série de Fibonacci”.
Observação: Note que a contagem dos termos foi iniciada com o termo 0 (zero): f0 = 0.

Entrada
A única linha da entrada contém um número natural n, indicando a posição do termo desejado na “Série
de Fibonacci”.

Saída
Seu programa deve imprimir uma única linha, contendo o termo desejado.

Exemplos
Entrada Saída
8		 21
Entrada Saída
11		 89
Entrada Saída
15		 610
Observação: Uma questão interessante é: Será possível encontrar uma fórmula explícita que seja capaz
de fornecer um determinado termo da “Sequência de Fibonacci” sem a necessidade de realizar a geração de
todos os termos anteriores?
Se isto for possível, gerar utilizar a fórmula será mais eficiente que utilizar uma função geradora, seja ela
recursiva ou iterativa? Se não for possível, qual o motivo da impossibilidade?
*/