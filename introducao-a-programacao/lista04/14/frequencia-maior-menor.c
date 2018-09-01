//14 - Frequencia do Maior e Menor
#include <stdio.h>
int main(){
  int m, n;
  scanf("%d %d", &m, &n);

  int i, j; int mt[m][n];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &mt[i][j]);
    }
  }
  int maior = mt[0][0];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(mt[i][j] > maior){
        maior = mt[i][j];
      }
    }
  }

  int menor = mt[0][0];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(mt[i][j] < menor){
        menor = mt[i][j];
      }
    }
  }
  double fmenor = 0, fmaior = 0;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(mt[i][j] == menor){
        fmenor++;
      }
      if(mt[i][j] == maior){
        fmaior++;
      }
    }
  }

  fmenor = (fmenor/(n*m))*100;
  fmaior = (fmaior/(n*m))*100;

  printf("%d %.2lf%%\n", menor, fmenor);
  printf("%d %.2lf%%\n", maior, fmaior);

  return 0;
}

/*
14 - Frequencia do Maior e Menor (+++)
Dada uma matriz A de dimensões N x M contendo apenas números inteiros positivos, verifique o maior
e o menor valor da matriz e conte quantas vezes estes valores aparecem.
Entrada
A entrada contem apenas em caso de teste. A primeira linha há dois números inteiros N e M, tais que
1 < N, M ≤ 1000, representando as dimensões da matriz A. A seguir haverão N linhas com M inteiros
em cada linha separados por um espaço em branco cada, representando os elementos da matriz A. Cada
elemento de A é um número inteiro tal que 0 ≤ a ij ≤ 1000;
Saída
A saída consiste de duas linhas: a primeira deve conter o menor valor da matriz A, um espaço, a
porcentagem correspondente à frequência dele na matriz, com duas casas após a vírgula e em seguida o
símbolo de porcentagem. A segunda linha é semelhante, contendo o maior valor de A e a porcentagem
correspondente à sua frequência na matriz. Após a impressão do último valor, quebre uma linha.
Observação
Utilize apenas variáveis do tipo double para armazenar valores em ponto flutuante.
Exemplo
Entrada Saída
2 3
2 5 9
2 6 2
2 50.00%
9 16.67%
Entrada Saída
3 3
1 2 3
2 0 4
1 0 0
0 33.33%
4 11.11%
*/
