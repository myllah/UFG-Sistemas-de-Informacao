//3 - Quantas Letras?

#include <stdio.h>
#include <string.h>

int main(){

  int n, i = 0;

  scanf(" %d ", &n);

  char linha[10000];
  int vogais, consoantes;
  int k, tamanho; int j = 0;

  while (i < n) {
    vogais = 0, consoantes = 0;

    scanf(" %[^\n]", linha);
    getchar();

    tamanho = 0; j = 0;
    do{
      tamanho++;
      j++;
    }while (linha[j] != '\0');

  //  tamanho = strlen(linha);

    for (k = 0; k < tamanho; k++) {


      if (linha[k] == 'a' || linha[k] == 'A') { vogais++; }
      else if (linha[k] == 'e' || linha[k] == 'E') { vogais++; }
      else if (linha[k] == 'i' || linha[k] == 'I') { vogais++; }
      else if (linha[k] == 'o' || linha[k] == 'O') { vogais++; }
      else if (linha[k] == 'u' || linha[k] == 'U') { vogais++; }
      else if (linha[k] == 'b' || linha[k] == 'B') { consoantes++; }
      else if (linha[k] == 'c' || linha[k] == 'C') { consoantes++; }
      else if (linha[k] == 'd' || linha[k] == 'D') { consoantes++; }
      else if (linha[k] == 'f' || linha[k] == 'F') { consoantes++; }
      else if (linha[k] == 'g' || linha[k] == 'G') { consoantes++; }
      else if (linha[k] == 'h' || linha[k] == 'H') { consoantes++; }
      else if (linha[k] == 'j' || linha[k] == 'J') { consoantes++; }
      else if (linha[k] == 'k' || linha[k] == 'K') { consoantes++; }
      else if (linha[k] == 'l' || linha[k] == 'L') { consoantes++; }
      else if (linha[k] == 'm' || linha[k] == 'M') { consoantes++; }
      else if (linha[k] == 'n' || linha[k] == 'N') { consoantes++; }
      else if (linha[k] == 'p' || linha[k] == 'P') { consoantes++; }
      else if (linha[k] == 'q' || linha[k] == 'Q') { consoantes++; }
      else if (linha[k] == 'r' || linha[k] == 'R') { consoantes++; }
      else if (linha[k] == 's' || linha[k] == 'S') { consoantes++; }
      else if (linha[k] == 't' || linha[k] == 'T') { consoantes++; }
      else if (linha[k] == 'v' || linha[k] == 'V') { consoantes++; }
      else if (linha[k] == 'w' || linha[k] == 'W') { consoantes++; }
      else if (linha[k] == 'x' || linha[k] == 'X') { consoantes++; }
      else if (linha[k] == 'y' || linha[k] == 'Y') { consoantes++; }
      else if (linha[k] == 'z' || linha[k] == 'Z') { consoantes++; }

    }

    printf("Letras = %d\n", vogais + consoantes);
    printf("Vogais = %d\n", vogais);
    printf("Consoantes = %d\n", consoantes);

  i++;
  }

return 0;
}

/*
3 - Quantas Letras? (+)

Tia Magnólia está ensinando as crianças a reconhecerem letras, e entre as letras quais são vogais e quais
são consoantes. Ela precisa fazer vários testes com seus alunos. Ela quer que eles leiam várias linhas de
um texto e contem em cada linha quantas letras (maiúsculas ou minúsculas), quantas vogais (maiúsculas
ou minúsculas) e quantas consoantes (minúsculas ou maiúsculas) existem em cada linha lida. Como Tia
Magnólia possui vários textos, ela gostaria de uma forma automatizada de obter essa contagem para gerar
um gabarito que permita a ela verificar se as respostas dos alunos estão corretas ou não. Sabendo que você
é “FERA” em processamento de strings, ela quer que você faça um programa que gere essas contagens para
ela.
  Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade
de casos de teste. Cada caso de teste consiste de uma única linha de texto. A linha pode conter qualquer
tipo de caractere (letras e “não letras”). Uma linha pode conter até 10.000 caracteres.
  Saída
Para cada caso de teste, imprima três mensagens, cada uma em uma linha diferente. A primeira mensagem
deve estar no seguinte formato: “Letras = x”. A segunda mensagem deve ser : “Vogais = y” e a última
mensagem deve ser: “Consoantes = z”. Os valores de x, y e z nas mensagens correspondem aos totais de,
respectivamente, letras, vogais e consoantes encontrados em um caso de teste.
  Exemplo
Entrada
4
Este e um caso de teste dos varios possiveis
Vem ver vovo!
O presidente renunciou?
#chapeuzinho#Vermelho#
Saída
Letras = 36
Vogais = 17
Consoantes = 19
Letras = 10
Vogais = 4
Consoantes = 6
Letras = 20
Vogais = 10
Consoantes = 10
Letras = 19
Vogais = 8
Consoantes = 11
*/
