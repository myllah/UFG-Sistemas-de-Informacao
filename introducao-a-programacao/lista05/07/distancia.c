// 7 - Distância entre pontos
#include<stdio.h>
#include<math.h>
struct dimensao{
  double u, x, y, z;
};
int main(){

  int i;
  int n; scanf("%d", &n);

  struct dimensao a[n];

  for(i = 0; i < n; i++){
    scanf("%lf", &a[i].u);
    scanf("%lf", &a[i].x);
    scanf("%lf", &a[i].y);
    scanf("%lf", &a[i].z);
  }

double b;

  for(i = 0; i < n-1; i++){

    b = sqrt(pow(a[i].u - a[i+1].u, 2) + pow(a[i].x - a[i+1].x, 2) + pow(a[i].y - a[i+1].y, 2) + pow(a[i].z - a[i+1].z, 2));

    printf("%.2lf\n", b);
  }

  return 0;
}

/*
Entrada
2
4 1 0 1
-1 2 1 2
Saída
5.29

Entrada
4
1 1 5 1
2 -1 3 0
4 2 -1 2
-3 4 2 2
Saída
3.16
5.74
7.87
Entrada
4
15.89 0.7 0.53 0.33
0.45 0.38 0.22 0.11
0 0 0 1
0 0 1 0.5
Saída
15.45
1.09
1.12
*/
