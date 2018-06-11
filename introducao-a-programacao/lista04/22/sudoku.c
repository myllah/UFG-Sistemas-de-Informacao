#include <stdio.h>
int main(){

  int m[9][9];
  int t[9] = {1,2,3,4,5,6,7,8,9};

  int i, j, k;
  for(i = 0; i < 9; i++){
    for(j = 0; j < 9; j++){
        scanf("%d", &m[i][j]);
        if(m[i][j] < 1 || m[i][j] > 9){
          puts("invalido");
          return 0;
        }
    }
  }
  int flag;
    for(i = 0; i < 9; i++){
      flag = 0;
      for(j = 0; j < 9; j++){
          for(k = 0; k < 9; k++){
            if(m[i][j] == t[k]){
              flag++;
            }
        }
      }
        if(flag != 9){
         puts("invalido");
         return 0;
       }
    }
    for(i = 0; i < 9; i++){
      flag = 0;
      for(j = 0; j < 9; j++){
          for(k = 0; k < 9; k++){
            if(m[j][i] == t[k]){
              flag++;
            }
        }
      }
        if(flag != 9){
         puts("invalido");
         return 0;
       }
    }
    for(i = 0; i < 9; i++){
      flag = 0;
      for(j = 0; j < 9; j++){
          for(k = 0; k < 9; k++){
            if(j == k){
              k++;
            }
              if(m[i][j] == m[i][k]){
                flag++;
              }
          }
      }
        if(flag != 0){
         puts("invalido");
         return 0;
       }
    }
    for(i = 0; i < 9; i++){
      flag = 0;
      for(j = 0; j < 9; j++){
          for(k = 0; k < 9; k++){
            if(j == k){
              k++;
            }
              if(m[j][i] == m[k][i]){
                flag++;
              }
          }
      }
        if(flag != 0){
         puts("invalido");
         return 0;
       }
    }
    puts("valido");
}
/*
22 - Valida Sudoku (++++)

O jogo de Sudoku espalhou-se rapidamente por todo o mundo, tornando-se hoje um dos passatempos
mais populares em todo o planeta. Muitas pessoas, entretanto, preenchem a matriz de forma incorreta,
desrespeitando as restrições do jogo. Sua tarefa neste problema é escrever um programa que verifica se
uma matriz preenchida é ou não uma solução para o problema. A matriz do jogo é uma matriz de inteiros
9 x 9. Para ser uma solução do problema, cada linha e coluna deve conter todos os números de 1 a 9 sem
repetições. Além disso, se dividirmos a matriz em 9 regiões 3 x 3, cada uma destas regiões também deve
conter os números de 1 a 9. O exemplo abaixo mostra uma matriz que é uma solução do problema.
Entrada
Cada entrada possui apenas um caso de teste. O caso é um tabuleiro de sudoku padrão de 9x9 completamente
preenchido. Todas os espaços possuem um numero inteiro entre 1 e 9, como no jogo.
Saída
A saída consiste apenas de uma linha, contendo a palavra “valido” caso o jogo esteja correto ou “invalido”,
caso contrario. Em ambos os casos a palavra deve ser impressa apenas com letras minúsculas e sem
acentos. Após a impressão, quebre uma linha.
Exemplo
Entrada
1 3 2 5 7 9 4 6 8
4 9 8 2 6 1 3 7 5
7 5 6 3 8 4 2 1 9
6 4 3 1 5 8 7 9 2
5 2 1 7 9 3 8 4 6
9 8 7 4 2 6 5 3 1
2 1 4 9 3 5 6 8 7
3 6 5 8 1 7 9 2 4
8 7 9 6 4 2 1 5 3
Saída
valido
Entrada
1 3 2 5 7 9 4 6 8
4 9 8 2 6 1 3 7 5
7 5 6 3 8 4 2 1 9
6 4 3 1 5 8 7 9 2
5 2 1 7 9 3 8 4 6
9 8 7 4 2 6 5 3 1
2 1 4 9 3 5 6 8 7
3 6 5 8 1 7 9 2 4
8 7 9 6 4 2 1 3 5
Saída
invalido
*/
