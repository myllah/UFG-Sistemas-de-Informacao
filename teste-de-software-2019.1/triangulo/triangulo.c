I
#define ponta_de_prova(num) if(++printed_nodes % 10) fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);

#include <stdlib.h>


#include <stdio.h>
main()
/*  1 */        {
                   FILE * path = fopen("path.tes","w");
                   static int printed_nodes = 0;
/*  1 */           int   a, b, c;
                   ponta_de_prova(1);
/*  1 */           printf("\nDigite lado 1 : ");
/*  1 */           scanf("%d",&a);
/*  1 */           printf("\nDigite lado 2 : ");
/*  1 */           scanf("%d",&b);
/*  1 */           printf("\nDigite lado 3 : ");
/*  1 */           scanf("%d",&c);
/*  1 */           if((a<=0) || (b<=0) || (c<=0))
/*  2 */           {
                      ponta_de_prova(2);
/*  2 */              printf("\nValores devem ser maiores que 0");
/*  2 */           }
/*  3 */           else
/*  3 */           {
                      ponta_de_prova(3);
/*  3 */              if(((a+b)<=c)|| ((a+c)<=b) ||((b+c)<=a))
/*  4 */              {
                         ponta_de_prova(4);
/*  4 */                 printf("\nNao eh possivel formar triangulo com esses valores");
/*  4 */              }
/*  5 */              else
/*  5 */              {
                         ponta_de_prova(5);
/*  5 */                 if((a == b) && (b == c))
/*  6 */                 {
                            ponta_de_prova(6);
/*  6 */                    printf("\nTriangulo EQUILATERO");
/*  6 */                 }
/*  7 */                 else
/*  7 */                 {
                            ponta_de_prova(7);
/*  7 */                    if((a == b) || (b == c) || (a == c) )
/*  8 */                    {
                               ponta_de_prova(8);
/*  8 */                       printf("\nTriangulo ISOSCELES");
/*  8 */                    }
/*  9 */                    else
/*  9 */                    {
                               ponta_de_prova(9);
/*  9 */                       printf("\nTriangulo ESCALENO");
/*  9 */                    }
                            ponta_de_prova(10);
/* 10 */                 }
                         ponta_de_prova(11);
/* 11 */              }
                      ponta_de_prova(12);
/* 12 */           }
                   ponta_de_prova(13);
                   system("PAUSE");
                   fclose(path);
/* 13 */        }
