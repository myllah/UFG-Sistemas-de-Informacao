#include<stdio.h>
int main(){

  int n;
  scanf ("%d", &n);

  int m[n+1][n+1];
  int i, j;

  for(i = 0; i < n+1; i++){
    for(j = 0; j < n+1; j++){
      scanf("%d", &m[i][j]);
    }
  }

  char s[n][n];

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if((m[i][j] + m[i][j+1] + m[i+1][j] + m[i+1][j+1]) >= 2){
        s[i][j] = 'S';
      } else{
        s[i][j] = 'U';
      }
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%c", s[i][j]);
    }
    puts("");
  }
  return 0;
}
/*
12 Cidade Segura (+++)

Com o aumento da violencia na cidade o prefeito decidiu instalar câmeras de vigilância em todas as
esquinas. A cada mês, um mapa atualizado com as câmeras em funcionamento é disponibilizado no site da
prefeitura. A secretaria de segurança considera que uma esquina é segura se existem câmeras em funcionamento,
pelo menos, duas de suas quatro esquinas. Nesta cidade todas as quadras são quadrados de mesmo
tamanho. Sua tarefa é, dado o mapa das câmeras em funcionamento nas esquinas, indicar o status de todas
as quadras da cidade.
Entrada
A primeira linha da entrada tem um inteiro positivo N (1 ≤ N ≤ 100). Nas próximas N+1 linhas, existem
N+1 números, que indicam, para cada esquina, a presença de uma câmera em funcionamento ou de uma
câmera defeituosa. O número 1 indica que existe uma câmera funcionando na esquina, enquanto o número
zero indica que não há câmera funcionando.
Saída
A saída é dada em N linhas. Cada linha tem N caracteres, indicando se a quadra correspondente é segura
ou insegura. Se uma quadra é segura, mostre o caractere S, caso contrário mostre o caractere U. Após a
última linha não se esqueça de saltar uma linha.
Exemplo
Entrada Saída
1
1 0
0 0
U
Entrada Saída
2
1 0 0
1 1 0
0 0 1
SU
SS
Entrada Saída
3
1 1 0 1
1 0 1 0
1 0 0 1
0 1 1 0
SSS
SUS
SSS
*/
