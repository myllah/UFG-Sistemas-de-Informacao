#include<stdio.h>
main(){
    int serial = 1, sx, sy, j, n, x, y, i;
    int total1, total2, d;
    while(scanf("%d", &n) != 0) {
        sx = 0, sy = 0;
        int r[210] = {0};
        if(n == 0) {
            break;
        }
        for(i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            sx = sx + x;
            sy = sy + y;
            r[y/x] += x;
        }
        printf("Cidade# %d:\n", serial);
        serial++;
        j = 0;
        for(i = 0; i < 210; i++) {
            if(r[i] > 0) {
                if (j > 0) {
                    printf(" ");
                }
                j++;
                printf("%d-%d", r[i], i);
            }
        }
        printf("\n");
        total1 = (double)sy / (double)sx *100;
        total2 = (double)sy / (double)sx;
        total2 = total2 * 100;
        d = total1 - total2;
        total1 = total1 / 100;
        printf("Consumo medio: %d.%02d m3.\n", total1, d);
    }
}
