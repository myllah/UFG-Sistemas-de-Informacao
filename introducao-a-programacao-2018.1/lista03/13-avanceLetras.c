#include <stdio.h>
#include<string.h>

int main(){
    int T, i, k;
    scanf("%d", &T);

    for(k = 0; k < T; k++){
        char s1[10000], *p1 = s1;
        char s2[10000], *p2 = s2;
        int resultado = 0;

        scanf("%s %s", s1, s2);
        for (i = 0; s1[i] != '\0'; i++, p1++, p2++) {
            if (s2[i] >= s1[i]){
                resultado = resultado + (*p2 - *p1);
            } else{
              //printf("(%d - %d) + (%d - %d) + 1\n", 'z' , *p1, *p2 ,'a');
              //printf("(%c - %c) + (%c - %c) + 1\n", 'z' , *p1, *p2 ,'a');
                resultado = resultado + ('z' - *p1) + (*p2 - 'a') + 1;
            }
        }
        printf("%d\n", resultado);
    }
    return 0;
}
