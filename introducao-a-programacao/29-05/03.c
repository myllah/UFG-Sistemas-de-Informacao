#include <stdio.h>
struct lista {
        int matricula;
        float media;

    }aluno[2], aprovados[2], reprovados[2];

int main(){

    int i = 0;
    do{

        printf("Digite a matricula do aluno:\n");
        scanf("%d", &aluno[i].matricula); getchar();

        printf("Digite a media do aluno:\n");
        scanf("%f", &aluno[i].media);
        printf("\n");
        i++;

    } while(i < 2);

    int k = 0, l = 0;

    for(i = 0; i<2; i++){

        if(aluno[i].media >= 5){
            aprovados[k].matricula = aluno[i].matricula;
            aprovados[k].media = aluno[i].media;
            k++;
        }

        else if(aluno[i].media < 5){
            reprovados[l].matricula = aluno[i].matricula;
            reprovados[l].media = aluno[i].media;
            l++;
        }
    }


    printf("\nEsses sao os alunos aprovados:\n");
    for(i = 0; i < k; i++){
      if(i == 0){
        printf("matricula -- media\n");
      }
      printf(" %d  --  %.2f \n", aprovados[i].matricula, aprovados[i].media);
    }

    printf("\nEsses sao os alunos reprovados:\n");
    for(i = 0; i < l; i++){
      if(i == 0){
        printf("matricula -- media\n");
      }
        printf(" %d  --  %.2f \n", reprovados[i].matricula, reprovados[i].media);
    }
return 0;
}

/*
3) Faça um programa que leia os dados de 10 alunos (matricula e média final), armazenando em um
vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o
vetor dos reprovados, considerando a média mínima para a aprovação como sendo 5. Exibir na tela
os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.
*/
