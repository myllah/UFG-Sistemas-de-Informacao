#include <stdio.h>

int numero (int a, int b){

	if(a > b){
		return (a);
	} else if (b >= a){
		return (b);
	}

}

main (){
	int a, b;

    printf("Insira dois numeros \n");
	scanf("%d %d", &a , &b);

	printf ("\nO maior numero eh = %d\n", numero (a, b));

}
