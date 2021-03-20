
#include<stdio.h>

main(){

int i, j;
// n = quantidade de rótulos de balas que Kurt possui
// k = numero de tipos de bala que SBC produz
int n, k;

scanf("%d %d", &n, &k);

//ler cada rotulo de bala que kurt tem e ver que tipo é
int v[n];
for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
}

int quantidadetipos[k];

for(i = 0; i < k; i++){
    quantidadetipos[i] = 0;
}

for(i = 0; i < n; i++){
    for(j = 0; j < k; j++){
        if(v[i] == j+1){
            quantidadetipos[j] ++;
        }
    }
}
int menor = quantidadetipos[0];
for(i = 1; i < k; i++){
   if(quantidadetipos[i] < menor){
    menor = quantidadetipos[i];
   }
}

printf("%d", menor);

}

/*

6 Envelopes (++)

Kurt Gödel é um garoto muito esperto e que adora promoções e sorteios. Como já participou de muitas
promoções da forma “para participar, envie n rótulos de produtos ...”, Kurt tem o hábito de guardar o rótulo
 de todos os produtos que compra prevendo a possibilidade de ocorrência de promoções futuras. Dessa
forma, sempre que uma empresa faz uma promoção ele já tem “um monte” de rótulos para mandar.
A SBC (Super Balas e Caramelos Ltda) está fazendo uma nova SUPER promoção, e, como era de se esperar, Kurt
quer participar dela: é preciso enviar um envelope contendo um rótulo de cada tipo de bala que a
SBC produz.
Por exemplo, se a SBC disser que produz três tipos de balas (A, B, C) e uma pessoa tem tem rótulos
de A, três rótulos de B e dois rótulos de C, ela pode enviar no máximo dois envelopes, já que falta um rótulo
de C para compor o terceiro envelope.
Sabe-se que não há limite para o número de envelopes que uma pessoa pode enviar para a promoção da
SBC. Balas são a segunda coisa de que Kurt mais gosta (a primeira, como você, sabe são as promoções) e,
por causa disso, a quantidade de rótulos que ele tem é muito grande: ele não está conseguindo determinar a
quantidade máxima de envelopes que pode enviar.
Como você é o(a) melhor amigo(a) de Kurt, ele pediu sua ajuda para fazer o cálculo, de modo que ele
compre o número exato de envelopes necessários para enviar para esta promoção.
Você deve escrever um programa C que, a partir da lista de rótulos de Kurt, calcule o número máximo de
envelopes válidos que ele pode enviar para a promoção da SBC.

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (o
teclado).
A primeira linha contém dois números inteiros N e K representando, respectivamente, a quantidade de
rótulos de balas que Kurt possui e o número de tipos diferentes de bala que a SBC produz. Os tipos de balas
são identificados por inteiros de 1 a K, com 1 ≤ N ≤ 1000 e 1 ≤ K ≤ 20.
A segunda linha contém N números inteiros, digamos ni ∈ {1,2,3,...,K}, cada um representando um rótulo
de bala que Kurt possui.

Saída
Seu programa deve imprimir, na saída padrão, o número máximo de envelopes válidos que Kurt pode
enviar.

Exemplos
Entrada                                         Saída
10 2
1 1 1 1 1 2 2 2 2 2
                                                  5
Entrada                                          Saída
20 5
1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 4 5
4 4
                                                  2
*/
