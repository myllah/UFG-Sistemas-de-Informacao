//13 - Raízes de equações quadradas
#include <stdio.h>
#include <math.h>

struct complex{
  double x1;
  double x2;
};

int main(){
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);

  struct complex com;
  double delta = b*b - 4*a*c;

  if(delta > 0){
    com.x1 = (-b + sqrt(delta))/(2*a);
    com.x2 = (-b - sqrt(delta))/(2*a);
    printf("x1 = %.2lf\n", com.x1);
    printf("x2 = %.2lf\n", com.x2);

  } else if(delta == 0){
    com.x1 = -b /(2*a);
    if(com.x1 == -0) com.x1 = 0;
    com.x2 = com.x1;
    printf("x1 = %.2lf\n", com.x1);
    printf("x2 = %.2lf\n", com.x2);

  }else if(delta < 0){

    delta = delta * (-1);
    double constante = -b/(2*a);

    printf("x1 = ");
    com.x1 = sqrt(delta)/(2*a);
    if(constante != 0){
      printf("%.2lf", constante);
    }

    if(com.x1 == 1 && constante != 0){
      printf("+i");
    }else if(com.x1 == 1){
      printf("i");
    }else if(com.x1 == -1){
      printf("-i");
    } else if(com.x1 != 0){
      printf("%.2lfi", com.x1);
    }
    puts("");

    printf("x2 = ");
    com.x2 = - sqrt(delta)/(2*a);
    if(constante != 0){
      printf("%.2lf", constante);
    }
    if(com.x2 == 1 && constante != 0){
      printf("+i");
    }else if(com.x2 == 1){
      printf("i");
    }else if(com.x2 == -1){
      printf("-i");
    }else if(com.x2 != 0){
      printf("%.2lfi", com.x2);
    }
    puts("");

  }
return 0;
}

// Entrada
// 1 0 0
// Saída
// x1 = 0.00
// x2 = 0.00
// Entrada
// 1 2 1
// Saída
// x1 = -1.00
// x2 = -1.00
// Entrada
// 1 0 1
// Saída
// x1 = i
// x2 = -i
// Entrada
// 1 5 4
// Saída
// x1 = -1.00
// x2 = -4.00
// Entrada
// 1 -2 2
// Saída
// x1 = 1.00+i
// x2 = 1.00-i
