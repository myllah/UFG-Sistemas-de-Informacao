//16 - Aula Cancelada
#include <stdio.h>
int main() {

  int n, k, cont = 0, ai = 0;

  scanf("%d %d", &n, &k);

  if (n < 0 || k > 1000) {
    return 0;
  }

  int an[n];

  while (ai < n) {
    scanf("%d", &an[ai]);
    ai++;
  }

  ai = 0;
  while (ai < n) {
    if (an[ai] <= 0) {
      cont++;
    }
    ai++;
  }

    if (k <= cont) {
      printf("NAO\n");

      ai = n-1;

      while (ai >= 0) {
        if (an[ai] <= 0) {
          printf("%d\n", ai+1);
        }
      ai--;
      }

    } else{
      printf("SIM\n");
    }
    return 0;
}

/*
16 - Aula Cancelada (+++)

Um professor X tem uma turma de N alunos. Frustrado com a falta de disciplina, ele decide cancelar a
aula se menos de K alunos estão presentes quando a aula começa. Dado o tempo de chegada de cada aluno,
determinar se a aula é cancelada. Caso a aula não seja cancelada, imprima uma lista com os alunos que
chegaram antes do início da aula em ordem contrária à mostrada na entrada.
  Entrada
A primeira linha apresenta dois números inteiros separados por um espaço: N (alunos da turma) e K
(mínimo de presenças para que a aula não seja cancelada), com 0 ≤ N, K, ≤ 1000. Na segunda linha há
N inteiros separados por espaços (A1 , A2 ,... , An ) descrevendo os tempos de chegada para cada aluno.
Suponha que esta ordem seja a mesma da lista de presença do professor, com o primeiro aluno descrito na
entrada sendo o aluno 1 e assim por diante. Nota: horários de chegada não-positivos (Ai ≤ 0) indicam que
o aluno chegou cedo ou na hora; horários de chegada positivos (Ai>0) indicam o aluno chegou Ai minutos
tarde.
  Saída
O programa apresenta uma mensagem com a palavra “SIM” se a aula é cancelada, e “NAO” caso
contrário. Após imprimir a mensagem quebre uma linha. Se a aula não for cancelada, imprima os M alunos
presentes antes do início da aula (ou seja, com Ai ≤ 0) na ordem contrária da lista de entrada.
*/
