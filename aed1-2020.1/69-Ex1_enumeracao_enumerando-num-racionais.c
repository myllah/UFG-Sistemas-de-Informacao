#include <stdio.h>

double mdc(double num1, double num2) {

    int resto;

    do{
        resto = (int)num1 % (int)num2;

        num1 = num2;
        num2 = resto;

    }while (resto != 0);

    return num1;
}

void enumerandoRacionais(double posicao){
	double d = 1;
	double n;
	double cont = 0;

while(1){
        for(n = 0; n <= d; n++){
            if(mdc(n, d) == 1){
                cont++;
                if(posicao == cont){
			printf("%.0lf/%.0lf\n", n, d);
			break;
		}
            }
        }
        if ((mdc(n, d) == 1) && (posicao == cont)){
            break;
        }
        d++;
    }
}

int main(){
    double n;
    
    while(1){
		scanf("%lf", &n);
		
		if(n == 0){
			break;
		}
		
		enumerandoRacionais(n);
	}
	return 0;
}
