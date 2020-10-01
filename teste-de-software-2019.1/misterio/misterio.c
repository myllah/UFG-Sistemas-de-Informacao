
#define ponta_de_prova(num) if(++printed_nodes % 10) fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);

#include <stdio.h>


#include <stdio.h>
int w = 1;
void main()
/*  1 */        {
                   FILE * path = fopen("path.tes","w");
                   static int printed_nodes = 0;
/*  1 */           int z, x, y;
                   ponta_de_prova(1);
                   printf("Entre com os valores de x e y");
/*  1 */           scanf("%d %d",&x,&y);
/*  1 */           if(x<10)
/*  2 */           {
                      ponta_de_prova(2);
/*  2 */              z=5;
/*  2 */           }
/*  3 */           else
/*  3 */           {
                      ponta_de_prova(3);
/*  3 */              z=20;
/*  3 */           }
/*  4 */           while(y>10)
/*  5 */           {
                      ponta_de_prova(4);
                      ponta_de_prova(5);
/*  5 */              z=z+x+y;
/*  5 */              y-=1;
/*  5 */              x=z;
/*  5 */           }
                   ponta_de_prova(4);
                   ponta_de_prova(6);
/*  6 */           if(x>y)
/*  7 */           {
                      ponta_de_prova(7);
/*  7 */              printf("%d \n",z);
/*  7 */           }
                   ponta_de_prova(8);
/*  8 */           printf("%d - %d  - %d",x,y,w);
                   fclose(path);
                   system("PAUSE");
/*  8 */        }
