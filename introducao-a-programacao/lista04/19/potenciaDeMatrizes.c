#include <stdio.h>
int main(){

  int i, k;
  int n, m;
  scanf("%d %d", &n, &m);
  double mt[n][n];

  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      scanf("%lf", &mt[i][k]);
    }
  }

  double a[n][n];
  int linha, coluna, soma, p;
for(p = 0; p < m; p++){
 for (linha = 0; linha < n; linha++) {
   for (coluna = 0; coluna < n; coluna++) {
     soma = 0;
      for (i = 0; i < n; i++) {
          soma = soma + mt[linha][i] * mt[i][coluna];
      }
        a[linha][coluna] = soma;
    }
 }
}
  for (i = 0; i < n; i++) {
    for (k = 0; k < n; k++) {
      printf("%.3lf ", a[i][k]);
    }
    puts("");
  }

  return 0;
}
