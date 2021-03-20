// 8 - Desenha bordas
#include <stdio.h>
int main(){

  int largura, altura, larguraBorda, valorBorda;

  scanf("%d", &largura);
  scanf("%d", &altura);
  scanf("%d", &larguraBorda);
  scanf("%d", &valorBorda);

  puts("P2");
  printf("%d %d\n", altura, largura);
  puts("255");

  int i, j;
  for (i = 0; i < largura; i++) {
    for (j = 0; j < altura; j++) {
      if (i < larguraBorda || j < larguraBorda) {
        printf("%d ", valorBorda);
      }else if(i+larguraBorda >= largura || j+larguraBorda >= altura) {
        printf("%d ", valorBorda);
      }else{
        printf("0 ");
      }
    }
    puts("");
  }

  return 0;
}

/*
8 - Desenha bordas (++)

Faça um programa que gere uma matriz de zeros, de tamanho definido pelo usuário,
de no máximo 100×100, com uma borda de largura k de valor x.
 Entrada
O programa deve ler quatro números inteiros, os dois primeiros relacionados
à largura e altura da matriz,
o terceiro a largura da borda e o por último o valor da borda.
  Saída
O programa deve apresentar a matriz como uma imagem PGM, ou seja, seguindo a sequência:
P2
largura altura
255
<dados da matriz>
Os dados da matriz devem ser impressos sempre com um espaço à direita e seguido de
quebra de linha ao final de cada linha da matriz.
  Observações
Para testar seu código, você pode redirecionar a saída padrão do seu programa
para um arquivo com extensão ".pgm", usando o comando "./programa > img.pgm".
  Exemplo
Entrada
5 5 1 2
Saída
P2
5 5
255
2 2 2 2 2
2 0 0 0 2
2 0 0 0 2
2 0 0 0 2
2 2 2 2 2
*/
