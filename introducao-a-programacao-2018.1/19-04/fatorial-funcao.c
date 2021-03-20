#include <stdio.h>

int fatorial (int n){
	int fat = 1 , i;

	for (i = 1; i <= n; i++){
		fat = fat * i;
	}
	return (fat);
}

main(){
	int num;
	printf("Digite um numero\n");
	scanf("%d", &num);

	printf ("\nO fatorial de %d eh = %d\n", num, fatorial(num));

}
