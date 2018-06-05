// 2 - Mercado
#include <stdio.h>
#include <string.h>

struct produtos{

  char nome[50];
  double preco;

} feira;

struct prod{

  char nome[50];
  int quantidade;

} comprados;

int main(){
  int n, cont = 0;
  scanf(" %d", &n);

  while(cont < n){

    int m, i;
    scanf(" %d", &m);

    struct produtos feira[m];

    for(i = 0; i < m; i++){
      scanf(" %s", feira[i].nome); getchar();
      scanf(" %lf", &feira[i].preco);
    }

    int p;
    scanf(" %d", &p);
    struct prod comprados[p];
    for(i = 0; i < p; i++){
      scanf(" %s", comprados[i].nome); getchar();
      scanf(" %d", &comprados[i].quantidade);
    }

int j; double soma = 0; int l; int flag;
  for(i = 0; i < p; i++){
    for(j = 0; j < m; j++){
      flag = 0;
      for(l = 0; comprados[i].nome[l] != '\0' || feira[j].nome[l] != '\0'; l++){
        if(comprados[i].nome[l] == feira[j].nome[l]){
          flag++;
        }
      }
      if(flag == strlen(comprados[i].nome) && flag == strlen(feira[j].nome)){
        soma = soma + (comprados[i].quantidade * feira[j].preco);
        flag = 0;
      }
    }
  }
  printf("R$ %.2lf\n", soma);
    cont++;
  }
  return 0;
}

/*
2 - Mercado
Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes. Ela pediu então à sua
filha, Mangojata, que a ajudasse com as contas e que fizesse um programa que calculasse o valor que precisa
levar para poder comprar tudo que está em sua lista de compras, considerando a quantidade de cada tipo de
fruta ou legume e os preços destes itens.
  Entrada
A primeira linha de entrada contém um inteiro N que indica a quantidade de idas à feira de dona Par-
cinova (que nada mais é do que o número de casos de teste que vem a seguir). Cada caso de teste inicia
com um inteiro M que indica a quantidade de produtos que estão disponíveis para venda na feira. Seguem
os M produtos com seus preços respectivos por unidade ou Kg. A próxima linha de entrada contém um
inteiro P(1 ≤ P ≤ M) que indica a quantidade de diferentes produtos que dona Parcinova deseja comprar.
Seguem P linhas contendo cada uma delas um texto (com até 50 caracteres) e um valor inteiro, que indicam
respectivamente o nome de cada produto e a quantidade deste produto.
  Saída
Para cada caso de teste, imprima o valor que será gasto por dona Parcinova no seguinte formato: R$
seguido de um espaço e seguido do valor, com 2 casas decimais, conforme o exemplo abaixo.
  Observação
Usar tipo double para variáveis em ponto flutuante.
Corresponde ao problema 1281- Ida à Feira do Uri Online Judge -https://www.urionlinejudge.com.br/judge/pt/problems/view/1281.

  Exemplo
Entrada
2
4
mamao 2.19
cebola 3.10
tomate 2.80
uva 2.73
3
mamao 2
tomate 1
uva 3
5
morango 6.70
repolho 1.12
brocolis 1.71
tomate 2.80
cebola 2.81
4
brocolis 2
tomate 1
cebola 1
morango 1
Saída
R$ 15.37
R$ 15.73
*/
