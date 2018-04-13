#include <stdio.h>
#include <math.h>
main (){
  int i=1;
  double n, soma =0, cont =1;
  scanf ("%lf",&n);
  
  if (n < 3 ){
    printf ("número inválido");
    return 0;
  }
  
  while (i <=n){
    soma = soma + n/ (pow(cont, 2));
    i++;
    cont++; 
    
  }
  
  printf("soma = %.5lf ", soma);
}