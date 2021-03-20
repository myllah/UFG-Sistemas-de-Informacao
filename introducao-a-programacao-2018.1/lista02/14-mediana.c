#include <stdio.h>
#include <math.h>
int main(){

  int t, j, i, temp, ii=0;
  double mediana;
  scanf("%d", &t);

  if (t <=0 || t > 10000000) {
    return 0;
  }

  double  v[t];
  while (ii < t) {
    scanf("%lf", &v[ii]);
    ii++;
  }

  for (j = 0; j < t-1; j++){
    for (i = 0; i < t; i++){
      if (v[i] > v[i+1]){
         temp = v[i];
         v[i] = v[i+1];
         v[i+1] = temp;
       }
      }
    }

  int media = t/2;

  if (t%2 != 0 ) {
    mediana = v[media+1];
  } else if (t%2 == 0 ) {
    mediana = (v[media +1] + v[media])/2;
  }
  printf("%.2lf\n", mediana);
  return 0;
}
/*
14 - Mediana (++)

Em teoria da probabilidade e estatística, a mediana, é uma medida de localização do centro da distri-
buição dos dados, definida do seguinte modo: Ordenados os elementos da amostra, a mediana é o valor
(pertencente ou não à amostra) que a divide ao meio, isto é, 50% dos elementos da amostra são menores ou
iguais à mediana e os outros 50% são maiores ou iguais à mediana. Para uma coleção de tamanho ímpar,
a mediana é exatamente o elemento médio, ou seja, aquele que a divide de acordo com a regra citada. Já
para uma coleção de tamanho par, a mediana é determinada como a média aritmética dos dois elementos
centrais.
  Entrada
A entrada consiste de um único caso de teste. Na primeira linha, é informado um inteiro N, 0 < N ≤ 10⁶ ,
representando a quantidade de elementos da amostra de dados. Nas N linhas seguintes é informado um
inteiro por linha, este valor varia de −2³² a 2³² − 1.
  Saída
A saída consiste da mediana dos dados informados. O valor da mediana deve ser formatado com duas
casas decimais.
  Observação
Utilize valores double no cálculo da mediana. Se estiver usando variáveis double com variáveis inteiras
em uma mesma expressão, primeiro converta as variáveis inteiras para double, utilizando a conversão de
tipo do C. Por exemplo: double x; int z; . . . . x=x+(double)z;
*/
