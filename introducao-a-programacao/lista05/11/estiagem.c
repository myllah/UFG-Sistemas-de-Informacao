//11 - Estiagem
#include <stdio.h>

int main(){

  int i, cons_acm[200], n, j, cont = 1;

  while(scanf("%d", &n) != 0){
    if(n == 0){
      break;
    }
    for(i = 0; i < 200; i++){
      cons_acm[i] = 0;
    }

    int pessoas, consumo;
    double c = 0, p = 0;

    for(i = 0; i < n; i++){
      scanf("%d", &pessoas);
      scanf("%d", &consumo);
      c = c + consumo;
      p = p + pessoas;
      for(j = 0; j < n; j++){
        if((j = consumo/pessoas)){
        cons_acm[j] += pessoas;
        }
      }
    }
    printf("Cidade# %d:\n", cont);
    for(i = 0; i < 200; i++){
      if(cons_acm[i] != 0){
        printf("%d-%d ", cons_acm[i], i);
      }
    }
    double cons_md = c/p;
    printf("\nConsumo medio: %.2lf m3\n\n", cons_md);

    cont++;
  }
  return 0;
}

/*
11 - Estiagem (++++)
Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil, o
governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade de verificar o
comportamento da população na época de racionamento. Este órgão responsável irá pegar algumas cidades
(por amostragem) e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo
médio de cada cidade por habitante.
  Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N(1 ≤
N ≤ 1 × 10 6 ), indicando a quantidade de imóveis. As N linhas contém um par de valores X(1 ≤ X ≤ 10)
e Y (1 ≤ Y ≤ 200), indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de
cada imóvel (em m 3 ). Com certeza, nenhuma residência consome mais do que 200 m 3 por mês. O final da
entrada é representado pelo número zero.
  Saída
Para cada entrada, deve-se apresentar a mensagem “Cidade# n:”, onde n é o número da cidade seguindo
a sequência (1, 2, 3, ...) e em seguida deve-se listar, por ordem ascendente de consumo, a quantidade de
pessoas seguido de um hífen e o consumo destas pessoas, arredondando o valor para baixo. Na terceira
linha da saída deve-se mostrar o consumo médio por pessoa da cidade, com 2 casas decimais sem arre-
dondamento, considerando o consumo real total. Imprimir uma linha em branco entre dois casos de teste
consecutivos. No fim da saída não deve haver uma linha em branco.
Observação
Utilizar o tipo double para variáveis em ponto flutuante.
Corresponde ao problema 1023 - Estiagem do Uri Online Judge -https://www.urionlinejudge.com.br/judge/pt/problems/view/1023.
  Exemplo
Entrada
3
3 22
2 11
3 39
5
1 25
2 20
3 31
2 40
6 65
0
Saída
Cidade# 1:
2-5 3-7 3-13
Consumo medio: 9.00 m3.
Cidade# 2:
11-10 2-20 1-25
Consumo medio: 12.93 m3.
*/
