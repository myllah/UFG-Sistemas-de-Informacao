//6 - Palíndromo

#include <stdio.h>
#include <string.h>

int main() {

  char palavra[200];

  int k, size, i, j, flag;

   while(scanf("%[^\n]", palavra) != EOF) {

    getchar();

    size = strlen(palavra);
    char inverso[size+1];

    j = size-1; i = 0;
    while (i < size && j >= 0) {

      inverso[i] = palavra[j];
      j--; i++;
    }

    flag = 0;
    for (k = 0; k < size; k++) {
      if (inverso[k] == palavra[k]) {
        flag++;
      }
    }

    if (flag == size) {
      puts("sim");
    }else{
      puts("nao");
    }
}
return 0;
}
/*
6 - Palíndromo (++)

Um palíndromo é uma palavra, frase ou qualquer outra sequência de unidades que tenha a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Em um palíndromo, normalmente
são desconsiderados os sinais ortográficos (diacríticos ou de pontuação), assim como o espaços
entre palavras.
A palavra “palíndromo” vem das palavras gregas palin (“para trás”) e dromos (“corrida, pista”). Rômulo
Marinho, veterano palindromista brasileiro, classifica os palíndromos em:
• Expliciti - trazem sempre uma mensagem direta, clara e inteligível, como “Socorram-me, subi no
ônibus em Marrocos” (palíndromo de autoria anônima, provavelmente a mais conhecido em língua
portuguesa).
• Interpretabiles - têm coerência, mas requerem esforço intelectual do leitor para serem entendidos,
como “A Rita, sobre vovô, verbos atira”.
• Insensati - cuidam apenas de juntar letras ou palavras sem se preocupar com o sentido, como “Olé!
Maracujá, caju, caramelo”.
As frases formando um palíndromo também são chamadas de anacíclicas, do grego anakúklein, signifi-
cando que volta em sentido inverso, que refaz inversamente o ciclo.
Faça um programa em que receba uma sequencia de palavras e indique se ela é ou não um palíndromo.
  Entrada
A entrada consiste de várias palavras, uma por linha com comprimento máximo de 200 caracteres por
palavra. A entrada termina com EOF.
  Saída
A saída consiste de várias linhas, uma para cada palavra. Você deve imprimir a palavra “sim”, caso a
palavra seja palindromo; ou “nao”, caso contrário. Nos dois casos, em minúsculo, sem acento e sem as
aspas duplas. Após a última resposta dada, quebre uma linha.
  Exemplo
Entrada:
mesa
estojo
asa
janela
salas
reter
ralar
osso
oco
Saída:
nao
nao
sim
nao
sim
sim
sim
sim
sim
*/
