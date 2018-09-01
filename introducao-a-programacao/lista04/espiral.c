#include <stdio.h>

int main(){

  int linhas,colunas;
  scanf("%d",&linhas);
  scanf("%d",&colunas);

  if(linhas <= 0 || colunas <= 0){
    printf("Dimensao invalida\n");
    return 0;
  }

  int matriz[linhas][colunas];
  int i,j=-1,k=-1;
  int flag = 0;
  int val = 0;
    do{
        j++;
        k++;
        for(j; j < colunas-val; j++){
           flag++;
           scanf("%d", &matriz[k][j]);
        }
        j--;
        k++;
        for(k; k < linhas-val; k++){
           flag++;
          scanf("%d", &matriz[k][j]);
        }
        k--;
        j--;
        for(j; j > val; j--){
           flag++;
           scanf("%d", &matriz[k][j]);
        }
        for(k; k > val; k--){
            flag++;
            scanf("%d", &matriz[k][j]);
         }
         val++;
     }while(flag != linhas*colunas);

  for(i = 0; i < linhas; i++){
     for(j = 0; j < colunas; j++){
        printf("%d  ",matriz[i][j]);
        }
        puts("");
     }
     return 0;
  }
