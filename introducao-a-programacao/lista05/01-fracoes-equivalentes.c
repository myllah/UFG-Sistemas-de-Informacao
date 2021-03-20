//1  - Frações Equivalentes
#include <stdio.h>

struct a{
  float x;
  char s;
  float y;
  double decimal;
};

int main(){

  int n, c = 1;
  scanf("%d", &n);

  while(c <= n){
    printf("Caso de teste %d\n", c);
    int m, i;
    scanf("%d", &m);

    struct a fracao[m];

    for(i = 0; i < m; i++){
      scanf("%f", &fracao[i].x);
      scanf("%c", &fracao[i].s);
      scanf("%f", &fracao[i].y);
      fracao[i].decimal = ((fracao[i].x) / (fracao[i].y));
    }

    int k; int flag = 0;
    for(i = 0; i < m; i++){
      for(k = i+1; k < m; k++){
        if(fracao[i].decimal == fracao[k].decimal){
          printf("%.0f/%.0f equivalente a %.0f/%.0f\n", fracao[i].x, fracao[i].y, fracao[k].x, fracao[k].y);
          flag++;
        }
      }
    }
      if(flag == 0){
        printf("Nao ha fracoes equivalentes na sequencia\n");
      }
    c++;
  }

  return 0;
};

/*
1 - Frações Equivalentes (+)

Tia Zuleika está ensinado seus alunos sobre frações equivalentes. Ela vai gerar uma lista de frações e
vai pedir aos seus alunos para indicarem quais pares de frações são equivalentes entre si, percorrendo a lista
da esquerda para direita. Ela pretende gerar uma lista grande, para que todos os alunos da turma tenham
oportunidade de responder. Tia Zuleika está muito ocupada e sabendo que você é “fera” em programação,
está pedindo sua ajuda para que faça um programa capaz de ler sequências de frações e para cada sequência
indicar quais pares são equivalentes entre si. O programa deve comparar a primeira fração com todas as
outras seguintes, depois deve comparar a segunda com todas as outras seguintes e assim por diante, de modo
que a posição na lista da primeira fração de um par de frações seja sempre menor que a posição da segunda
fração do par.
  Entrada
A primeira linha da entrada contém o número n ≤ 30 de casos de teste. Para cada caso de teste há duas
linhas na entrada. A primeira linha, contém o tamanho m(m ≤ 50) da sequência de frações. A segunda linha
contém a sequência de m frações separadas entre si por um espaço. Cada fração tem o seguinte formato:
x/y.
  Saída
Para cada caso de teste a saída é formada por uma frase no formato “Caso de Teste t”, onde t corres-
ponde ao número de um caso de teste. Em seguida, o programa deve imprimir tantas linhas no formato
“x/y equivalente a w/u” quantos forem os pares de frações equivalentes na sequência. Se não houver pa-
res equivalentes o programa deve emitir uma linha com a mensagem: “Nao ha fracoes equivalentes na
sequencia”.
  Exemplo
Entrada
2
5
1/2 1/3 1/4 1/5 1/6
5
1/2 2/4 3/5 10/20 3/6
Saída
Caso de teste 1
Nao ha fracoes equivalentes na sequencia
Caso de teste 2
1/2 equivalente a 2/4
1/2 equivalente a 10/20
1/2 equivalente a 3/6
2/4 equivalente a 10/20
2/4 equivalente a 3/6
10/20 equivalente a 3/6
*/
