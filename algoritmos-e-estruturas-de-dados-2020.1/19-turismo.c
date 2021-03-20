//21 - Turismo
#include <stdio.h>

int main(){
  int distancia[6][6];  distancia[0][0] = 0;
    distancia[0][1] = 63;
    distancia[0][2] = 210;
    distancia[0][3] = 190;
    distancia[0][4] = (char)'-';
    distancia[0][5] = 190;
    distancia[1][0] = 63;
    distancia[1][1] = 0;
    distancia[1][2] = 160;
    distancia[1][3] = 150;
    distancia[1][4] = 95;
    distancia[1][5] = 10;
    distancia[2][0] = 210;
    distancia[2][1] = 160;
    distancia[2][2] = 0;
    distancia[2][3] = 10;
    distancia[2][4] = 1;
    distancia[2][5] = 10;
    distancia[3][0] = 190;
    distancia[3][1] = 150;
    distancia[3][2] = 10;
    distancia[3][3] = 0;
    distancia[3][4] = 10;
    distancia[3][5] = 20;
    distancia[4][0] = 10;
    distancia[4][1] = 95;
    distancia[4][2] = 7;
    distancia[4][3] = 21;
    distancia[4][4] = 0;
    distancia[4][5] = 80;
    distancia[5][0] = 190;
    distancia[5][1] = 2;
    distancia[5][2] = (char)'-';
    distancia[5][3] = 41;
    distancia[5][4] = 80;
    distancia[5][5] = 0;

    int i, n;
    scanf("%d", &n);
    int caminho[n];
    for(i = 0; i < n; i++){
      scanf("%d", &caminho[i]);
    }

    int soma = 0;
    for(i = 0; i < n-1; i++){
      if((char)distancia[caminho[i]][caminho[i+1]] == '-'){
        printf("rota invalida!\n");
        return 0;
      }
          soma = soma + distancia[caminho[i]][caminho[i+1]];
    }

    printf("%d \n", soma);

  return 0;
}

/*
21 - Turismo (+++)

Os acessos e distâncias entre 6 cidades são listadas pela Tabela 1. Cada célula da tabela mostra a
distância, em quilômetros, entre a cidade de cada linha com as cidades de cada coluna. O caracter ’-’ indica
que não há acesso entre as cidades, partindo da cidade da linha correspondente.
Tabela 1: Tabela de distâncias e acessos entre cidades.
Cárceres Bugres Cuiabá Várzea Tangará Lacerda
Cárceres 0 63 210 190 - 190
Bugres 63 0 160 150 95 10
Cuiabá 210 160 0 10 1 10
Várzea 190 150 10 0 10 20
Tangará 10 95 7 21 0 80
Lacerda 190 2 - 41 80 0
Tendo conhecimento dessa tabela, uma agencia de turismo gostaria de ter um programa que, dada uma
rota, verifique se a rota é válida e que calcule e apresente a distância da rota fornecida.
As cidades Cárceres, Burgres, Várzea, Tangará e Lacerda são representadas pelos números 0,1,2,3,4,5
respectivamente. Desse modo, uma rota pode ser representada por um vetor de inteiros que indica o translado
entre as cidades listadas.
Por exemplo, o vetor {1, 2, 3} indica que a rota válida que inicia pela cidade de Bugres, passa pela
cidade de Cuiabá e termina em Várzea, totalizando 170 km. Uma rota é inválida se a sequência do vetor
atinge um elemento da matriz com o caracter ’-’.
Entrada
O programa deve ler um número inteiro N, correspondente ao tamanho da rota, sendo 0 < N ≤ 100, e
um vetor de inteiros com N elementos.
Saída
O programa deve apresentar a distância total da rota percorrida ou a mensagem "rota invalida!"caso a
rota seja inválida.
Exemplo
Entrada
3
1 2 3
Saída
170
Entrada
3
0 4 1
Saída
rota invalida!
*/
