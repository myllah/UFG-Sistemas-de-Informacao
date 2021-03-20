//5 - Cursos

#include <stdio.h>
struct curso {
        int id;
        double credito;
        char nome[100];

};

struct tabela{
        char nome[500];
        int id;
        int numCreditos;
};

int main(){

    int i = 0;
    int qCurso;
    scanf("%d", &qCurso);
    struct curso universidade[qCurso];
    for(i = 0; i < qCurso; i++){
        scanf("%d", &universidade[i].id);
        scanf("%lf", &universidade[i].credito);
        scanf(" %[^\n]", universidade[i].nome); getchar();
    }

    int qAlunos;
    scanf("%d", &qAlunos);
    struct tabela aluno[qAlunos];
    for(i = 0; i < qAlunos; i++){
        scanf(" %[^\n]", aluno[i].nome); getchar();
        scanf("%d", &aluno[i].id);
        scanf("%d", &aluno[i].numCreditos);
    }

    int j; double credito;
    for(i = 0; i < qAlunos; i++){
        printf("Aluno(a): %s ", aluno[i].nome);
        for(j = 0; j < qCurso; j++){
            if(aluno[i].id == universidade[j].id){
              printf("Curso: %s ", universidade[j].nome);
           }
        }
        printf("Num. Creditos: %d ", aluno[i].numCreditos);
        for(j = 0; j < qCurso; j++){
            if(aluno[i].id == universidade[j].id){
              credito = universidade[j].credito;
              printf("Valor Credito: %.2lf ", credito);
           }
        }
        printf("Mensalidade: %.2lf ", aluno[i].numCreditos * credito);
        printf("\n");
    }

return 0;
}

/*
5 - Cursos
(+)
Uma universidade particular possui uma tabela de valores de créditos por curso com os campos:
• código do curso (int),
• valor por crédito (double).
• nome do curso (cadeia com no máximo 100 caracteres),
Faça um programa que primeiramente carregue a tabela de cursos acima e depois leia registros de alunos
com as seguintes informações:
• nome do aluno (cadeia com no máximo 500 caracteres),
• o código do curso onde o mesmo está matriculado (int), e
• o número de créditos que ele está cursando (int).
Calcule a mensalidade a ser paga pelo aluno e imprima as informações em um boleto de pagamento com as
seguintes informações: nome do aluno, nome do curso, total de créditos que o aluno cursa, valor do crédito
do curso e o valor final da mensalidade a pagar.
Entrada
A primeira linha da entrada contém o número n (5 ≤ n ≤ 30) de cursos a universidade. Em seguida
há 3n linhas contendo as três informações dos n cursos. A próxima linha contém um valor inteiro que
corresponde ao número m (1 ≤ m ≤ 1000) de alunos da universidade. Em seguida, há 3m linhas, com os
três dados dos m alunos.
Saída
A saída é formada por m linhas, cada uma no seguinte formato: Aluno(a): a Curso: b Num. Creditos:
c Valor Credito: d Mensalidade: e, onde a e b são cadeias de caracteres, c é um número inteiro e d e e são
números em ponto flutuante (double) com duas casas decimais.
  Exemplo
Entrada
4
298
234.5
Direito
123
150.00
Eng. Eletrica
452
132.00
Eng. Civil
341
120.00
Farmacia
5
Joao Luiz
298
5
Paula Lima
452
4
Maria
123
6
Luiz Andre
341
3
Antonio Luiz
341
8
Saída
Aluno(a): Joao Luiz Curso: Direito Num. Creditos: 5 Valor Credito: 234.50 Mensalidade: 1172.50
Aluno(a): Paula Lima Curso: Eng. Civil Num. Creditos: 4 Valor Credito: 132.00 Mensalidade: 528.00
Aluno(a): Maria Curso: Eng. Eletrica Num. Creditos: 6 Valor Credito: 150.00 Mensalidade: 900.00
Aluno(a): Luiz Andre Curso: Farmacia Num. Creditos: 3 Valor Credito: 120.00 Mensalidade: 360.00
Aluno(a): Antonio Luiz Curso: Farmacia Num. Creditos: 8 Valor Credito: 120.00 Mensalidade: 960.00

*/
