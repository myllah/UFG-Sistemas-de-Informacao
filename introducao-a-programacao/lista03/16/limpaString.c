#include <stdio.h>
#include <string.h>
#define N 256

int str_clean(char str[], char crl[]){

  int i, j, k = 0,a = 0, flag;
  for(i = 0; i < N, str[i] != '\0'; i++){
    flag = 0;
    for(j = 0; i < N, crl[j] != '\0'; j++){
      if(str[i] == crl[j]){
        flag++;
      }
    }
    if(flag == 0){
      str[k] = str[i];
      k++; a++;
    }
  }
  str[a] = '\0';
  return str[N];
}

int main() {
  char str[N]; // string original
  char clr[N]; // lista de caracteres indesejados
  scanf(" %[^\n]", str);
  scanf("\n%[^\n]", clr);
  str_clean(str, clr) ;
  printf("%s\n", str);
  return 0;
}

/*
16 - Limpa String (+++)

Faça um programa que atualize um texto removendo uma lista de caracteres indesejados. Tanto o texto
quanto a lista de caracteres devem ser lidos no formato de strings.
Escreva a função str_clean que realiza o processamento desejado. Ela deve receber como parâmetros
a string original str e a string com caracteres indesejados clr . Considere o tamanho máximo de 256
caracteres.
Sua função str_clean deve varrer a string original e remover todos os caracteres que ocorrem na string
clr . Use um vetor de no máximo 256 caracteres. Seu programa principal deve ser o seguinte código:

int main() {
char str[N]; // string original
char clr[N]; // lista de caracteres indesejados
scanf("%[^\n]", str);
scanf("\n%[^\n]", clr);
str_clean(str, clr) ;
printf("%s\n", str);
return 0;
}

Entrada
Seu programa deve ler duas strings.
Saída
Uma linha contendo a string modificada.
Observações
Exemplo
Entrada
Fulando de Tal da Silva
aeiou
Saída
Flnd d Tl d Slv
Entrada
100 200 300 400 500 600 700
123456789
Saída
00 00 00 00 00 00 00
Entrada
1111111111x
1
Saída
x
*/
