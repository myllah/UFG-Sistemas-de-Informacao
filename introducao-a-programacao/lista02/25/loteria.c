//25 - Loteria
#include <stdio.h>
int main(){

  int i, sorteadas[6];
  for (i = 0; i < 6; i++) {
    scanf("%d", &sorteadas[i]);
  }

  int n;
  scanf("%d", &n);

  while (n < 0 || n > 50001) {
    scanf("%d", &n);
  }

  int j = 0, k = 0, apostas[6];
  int cont = 0, sena = 0, quina = 0, quadra = 0;

  do{

    for (i = 0; i < 6; i++) {
      scanf("%d", &apostas[i]);
      while (apostas[i] < 1 || apostas[i] > 60) {
        scanf("%d", &apostas[i]);
      }
      for (k = 0; k < i; k++) {
        while (apostas[i] == apostas[k]) {
          scanf("%d", &apostas[i]);
        }
      }
    }

    for (i = 0; i < 6; i++) {
      for (k = 0; k < 6; k++) {
        if (sorteadas[i] == apostas[k]) {
          cont++;
        }
      }
    }
    if (cont == 6) {
      sena++;
    } else if (cont == 5) {
      quina++;
    } else if (cont == 4){
      quadra++;
    }
    cont = 0;
  j++;
  }while(j < n);

    if (sena != 0) {
      printf("Houve %d acertador(es) da sena\n", sena);
    } else{
      printf("Nao houve acertador para sena\n");
    }

    if (quina != 0) {
      printf("Houve %d acertador(es) da quina\n", quina);
    } else{
      printf("Nao houve acertador para quina\n");
    }

    if (quadra != 0) {
      printf("Houve %d acertador(es) da quadra\n", quadra);
    } else{
      printf("Nao houve acertador para quadra\n");
  }
return 0;
}

/*
25 - Loteria (++++)

A Mega-Sena é a maior loteria do Brasil. Para ganhar o prêmio máximo é necessário acertar a sena,
o que significa obter coincidência entre seis dos números apostados e os seis números sorteados, de um
total de sessenta dezenas (de 01 a 60), independentemente da ordem da aposta ou da ordem do sorteio.
O concurso prevê também a chance de ganhar parte do prêmio, acertando a quina ou a quadra. A Mega-
Sena foi lançada em março de 1996 e já premiou mais de 200 ganhadores na faixa principal. Os prêmios
correspondem a 32,2% da renda das apostas ao imposto de renda correspondem 13,8% de todas as apostas.
Os vencedores têm 90 dias para retirar o prêmio, se o período expirar, o dinheiro do prêmio será transferido
ao Tesouro Nacional e investido em programas educacionais. Vale lembrar que a probabilidade de acerto
em uma única aposta de 6 dezenas é de 1 em 50.063.860, o que representa um percentual de 0,000002%.
Faça um programa que receba todas as apostas e as seis dezenas sorteadas de um concurso e mostre quantos
vencedores para sena, quina e quadra houve.
Entrada
Na primeira linha da entrada haverá uma linha com as seis dezenas sorteadas, separadas por um espaço
em branco cada. Na linha seguinte haverá um inteiro N, 1 ≤ N ≤ 50000, representando a quantidade de
apostas. Em seguida, em cada uma das N linhas haverá as seis dezenas de cada aposta, sendo que as dezenas
estão no intervalo entre 1 e 60 e sem repetição de dezenas por apostas.
Saída
A saída consiste de 3 linhas contando uma das seguintes frases: “Houve K acertador(es) da sena” ou
“Houve K acertador(es) da quina” ou ainda “Houve K acertador(es) da quadra”, onde K é quantidade de
acertadores para a faixa. Caso não haja acertadores a seguinte frase deve ser apresentada: “Nao houve
acertador para sena” ou “Nao houve acertador para quina” ou ainda “Nao houve acertador para quadra”.
Ao exibir a última frase quebre uma linha.
*/
