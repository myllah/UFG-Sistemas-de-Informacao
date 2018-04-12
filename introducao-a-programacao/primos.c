#include <stdio.h>
main() {
    int x, i, cont=0;

    printf("Digite um numero\n");
    scanf("%d", &x);

    if(x>=0){
	    for(i=1;i<=x;i++){
	        if(x%i==0){
	            cont++;
	        }
	    }
	    if(cont>2 || x==1){
	        printf("NAO PRIMO\n");
	    }else{
	        printf("PRIMO\n");
	    }
    }
    else {
    	printf("Numero Invalido!");
    }
}
