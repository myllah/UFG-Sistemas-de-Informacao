#include <stdio.h>
#define MAXN 500

char s[MAXN+2][MAXN+2];
char buf[MAXN+2];

int ans;

char solve( i, j ){
  int a,b;

  if ( s[i][j] == 's' || s[i][j] == '*' )
    return s[i][j];

  a = i; b = j;
  switch( s[i][j] ){
  case 'A': a--; break;
  case 'V': a++; break;
  case '<': b--; break;
  case '>': b++; }

  s[i][j] = 's';
  s[i][j] = solve( a, b );
  if ( s[i][j] == '*' ) ans++;
  return s[i][j];
}

int main() {
  int i,j,N;

  scanf("%d",&N);
  for ( i = 0; i < N+2; i++ ) s[0][i] = '*';
  for ( i = 1; i <= N; i++ ){
    scanf("%s",buf);
    s[i][0] = '*';
    for ( j = 0; j < N; j++ )
      s[i][j+1] = buf[j];
    s[i][N+1] = '*';
  }
  for ( i = 0; i < N+2; i++ ) s[N+1][i] = '*';

  ans = 0;
  for ( i = 1; i <= N; i++ )
    for ( j = 1; j<= N; j++ )
      if ( s[i][j] != '*' )
	solve ( i, j );

  printf("%d\n",(N*N)-ans);

  return 0;
}
