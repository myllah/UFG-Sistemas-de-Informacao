#include <stdio.h>
#include <math.h>

double raiz(double x, double y,double e){

    double modulo_calc = fabs(((y*y) - x));

    if(modulo_calc < 1e-9){
        return (y);
    }else{
        y = ((x/y) + y) / 2;
        return raiz(x, y ,e);
    }

}

int main (){

    double x;
    double e;
    double y;

    scanf("%lf %lf", &x, &e);
     y = x/2;
    printf("%.6lf", raiz(x,y,e));

}
