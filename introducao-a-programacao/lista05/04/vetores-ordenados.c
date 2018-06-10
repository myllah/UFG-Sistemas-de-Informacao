// 4 - Vetores Ordenados
#include <stdio.h>
#include <math.h>

struct a {
    double u;
    double x;
    double y;
    double z;
    double norma;
};

int main(){

    int n; scanf("%d", &n);
    int i;
    struct a vetor[n];
    for(i = 0; i < n; i++){
        scanf("%lf", &vetor[i].u);
        scanf("%lf", &vetor[i].x);
        scanf("%lf", &vetor[i].y);
        scanf("%lf", &vetor[i].z);
        vetor[i].norma = sqrt(pow(vetor[i].u,2) + pow(vetor[i].x,2) + pow(vetor[i].y,2)+ pow(vetor[i].z,2));
    }

    int j;
    struct a aux;
    for(i = 0; i < n; i++){
      for(j = i+1; j < n; j++){
        if(vetor[i].norma > vetor[j].norma){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
      }
    }

    for(i = 0; i < n; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vetor[i].u, vetor[i].x, vetor[i].y, vetor[i].z, vetor[i].norma);
    }

return 0;
}


/*
4 - Vetores Ordenados (++)

Faça um programa que leia vários pares de pontos no espaço de quatro dimensões e calcule a norma
do vetor correspondente a cada vetor e imprima as normas dos vetores em ordem crescente. A norma de
um vetor A(au,ax,ay,az) no espaço tetradimensional corresponde a sua distância e o ponto de origem e
O(0,0,0,0) e é calculada como:

||A|| = raiz(a²u + a²x + a²y + a²z)

Voce deve usar um vetor de structs para armazenar as coordenadas e a norma de cada ponto.
Entrada
A entrada consiste de várias linhas. A primeira linha apresenta um número de pontos N, com 2 ≤ N ≤
1000. As N linhas seguintes apresentam pontos no espaço na forma u, x, y,z com u, x, y e z números reais
tais que −1000 ≤ u, x, y,z ≤ 1000.
Saída
A saída consiste de N linhas, cada uma no formato: "Vetor: (a, b, c, d) Norma: x”, onde a,b, c,d
correspondem à coordenadas de um vetor lido, com duas casas decimais cada e x o valor de sua norma com
duas casas decimais. As linhas devem conter os vetores em ordem crescente de norma.
Observações
Utilizar o tipo double para variáveis do tipo real (ponto flutuante).
Exemplo
Entrada
4
1 1 5 2
2 -1 3 0.2
4 2 -1 0.9
-3 4 2 34.2
Saída
Vetor: (2.00, -1.00, 3.00, 0.20) Norma: 3.75
Vetor: (4.00, 2.00, -1.00, 0.90) Norma: 4.67
Vetor: (1.00, 1.00, 5.00, 2.00) Norma: 5.57
Vetor: (-3.00, 4.00, 2.00, 34.20) Norma: 34.62
*/
