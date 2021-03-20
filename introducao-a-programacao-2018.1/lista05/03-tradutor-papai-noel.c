//3 - Tradutor do Papai Noel
#include <stdio.h>
#include<string.h>
struct dados{
  char *pais;
  char *natal;
};

int main(){
  char t[40];
  struct dados teste[24];

  teste[0].pais = "brasil";
  teste[0].natal = "Feliz Natal!";

  teste[1].pais = "alemanha";
  teste[1].natal = "Frohliche Weihnachten!";

  teste[2].pais = "austria";
  teste[2].natal = "Frohe Weihnacht!";

  teste[3].pais = "coreia";
  teste[3].natal = "Chuk Sung Tan!";

  teste[4].pais = "espanha";
  teste[4].natal = "Feliz Navidad!";

  teste[5].pais = "grecia";
  teste[5].natal = "Kala Christougena!";

  teste[6].pais = "estados-unidos";
  teste[6].natal = "Merry Christmas!";

  teste[7].pais = "inglaterra";
  teste[7].natal = "Merry Christmas!";

  teste[8].pais = "australia";
  teste[8].natal = "Merry Christmas!";

  teste[9].pais = "portugal";
  teste[9].natal = "Feliz Natal!";

  teste[10].pais = "suecia";
  teste[10].natal = "God Jul!";

  teste[11].pais = "turquia";
  teste[11].natal = "Mutlu Noeller";

  teste[12].pais = "argentina";
  teste[12].natal = "Feliz Navidad!";

  teste[13].pais = "chile";
  teste[13].natal = "Feliz Navidad!";

  teste[14].pais = "mexico";
  teste[14].natal = "Feliz Navidad!";

  teste[15].pais = "antardida";
  teste[15].natal = "Merry Christmas!";

  teste[16].pais = "canada";
  teste[16].natal = "Merry Christmas!";

  teste[17].pais = "irlanda";
  teste[17].natal = "Nollaig Shona Dhuit!";

  teste[18].pais = "belgica";
  teste[18].natal = "Zalig Kerstfeest!";

  teste[19].pais = "italia";
  teste[19].natal = "Buon Natale!";

  teste[20].pais = "libia";
  teste[20].natal = "Buon Natale!";

  teste[21].pais = "siria";
  teste[21].natal = "Milad Mubarak!";

  teste[22].pais = "marrocos";
  teste[22].natal = "Milad Mubarak!";

  teste[23].pais = "japao";
  teste[23].natal = "Merii Kurisumasu!";

int i, j;

  while(scanf(" %[^\n]", &t) != EOF){
    getchar();
    int tm = strlen(t);  int ok = 0;

    for(i = 0; i < 24; i++){
      int flag = 0;
      int tt =  strlen(teste[i].pais);
      if(tm == tt){
        for(j = 0; j < tm; j++){
          if(t[j] == teste[i].pais[j]){
            flag++;
          }
        }
      }
      if(flag == tm){
        printf("%s\n", teste[i].natal);
        ok = 1;
        break;
      }
    }
    if(ok == 0){
      printf("-- NOT FOUND --\n");
    }
  }
    return 0;
}

/*
3 - Tradutor do Papai Noel (++)

Nicolau já está bastante cansado e sua memória não é mais a mesma. Você, como navegador, deverá
auxiliar o Papai Noel a gritar a frase “Feliz Natal” no idioma correto de cada país de que o trenó está
sobrevoando.
Como você é um elfo muito esperto, você já criou um pequeno app no seu celular (sim, elfos tem
celular) que irá lhe informar a frase no idioma correto dado o nome do país. Como o trenó é moderno (foi
atualizado no ano 2000) ele exibe no painel de navegação o nome do país atual.
Os dados inseridos no seu app foram:
brasil Feliz Natal!
alemanha Frohliche Weihnachten!
austria Frohe Weihnacht!
coreia Chuk Sung Tan!
espanha Feliz Navidad!
grecia Kala Christougena!
estados-unidos Merry Christmas!
inglaterra Merry Christmas!
australia Merry Christmas!
portugal Feliz Natal!
suecia God Jul!
turquia Mutlu Noeller
argentina Feliz Navidad!
chile Feliz Navidad!
mexico Feliz Navidad!
antardida Merry Christmas!
canada Merry Christmas!
irlanda Nollaig Shona Dhuit!
belgica Zalig Kerstfeest!
italia Buon Natale!
libia Buon Natale!
siria Milad Mubarak!
marrocos Milad Mubarak!
japao Merii Kurisumasu!
Para não correr o risco de informar o nome errado você decidiu testar o aplicativo mais algumas vezes.
Entrada
Você irá testar o seu aplicativo com diversos nomes de países, simulando os dados informados pelo
painel de navegação do trenó. A entrada termina por fim de arquivo.
Saída
O seu aplicativo deverá mostrar na tela a frase no idioma correto. Caso ela não esteja cadastrada, você
deverá exibir a mensagem -– NOT FOUND —"para que depois dos testes você possa completar o banco de
dados.
Corresponde ao problema 1763 - Tradutor do Papai Noel do Uri Online Judge -
https://www.urionlinejudge.com.br/judge/pt/problems/view/1763.

Exemplo
Entrada
uri-online-judge
alemanha
brasil
austria
Saída
-- NOT FOUND --
Frohliche Weihnachten!
Feliz Natal!
Frohe Weihnacht!
*/
