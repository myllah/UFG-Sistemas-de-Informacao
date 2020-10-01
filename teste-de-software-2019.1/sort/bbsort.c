
#define ponta_de_prova(num) if(++printed_nodes % 10) 
fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);

#include <stdio.h>


#include <stdio.h>
int A[30], N;

main()
/*  1 */        {
                   FILE * path = fopen("main/path.tes","a");
                   static int printed_nodes = 0;
/*  1 */           int j, i;
                   ponta_de_prova(1);
/*  1 */           printf("Number of elements = ");
/*  1 */           scanf("%d\n",&N);
/*  1  2  3 */     for(i=0;i<N;i++)
/*  3 */           {
                      ponta_de_prova(2);
                      ponta_de_prova(3);
/*  3 */              scanf("%d", &A[i]);
/*  3 */              printf("\n");
/*  3 */           }
                   ponta_de_prova(2);
                   ponta_de_prova(4);
/*  4 */           sort();
/*  4  5  6 */     for(i=0;i<N;i++)
/*  6 */           {
                      ponta_de_prova(5);
                      ponta_de_prova(6);
/*  6 */              printf("A[%d]= %d\n", i, A[i]);
/*  6 */           }
                   ponta_de_prova(5);
                   ponta_de_prova(7);
                   fclose(path);
/*  7 */        }

sort()
/*  1 */        {
                   FILE * path = fopen("sort/path.tes","a");
                   static int printed_nodes = 0;
/*  1 */           int pos=0, i1=0, i2, high;
                   ponta_de_prova(1);
/*  2 */           while(i1<N-1)
/*  3 */           {
                      ponta_de_prova(2);
                      ponta_de_prova(3);
/*  3 */              high = A[i1];
/*  3 */              i2 = i1+1;
/*  3 */              pos = i1;
/*  4 */              while(i2<N)
/*  5 */              {
                         ponta_de_prova(4);
                         ponta_de_prova(5);
/*  5 */                 if(A[i2]>high)
/*  6 */                 {
                            ponta_de_prova(6);
/*  6 */                    high=A[i2];
/*  6 */                    pos=i2;
/*  6 */                 }
                         ponta_de_prova(7);
/*  7 */                 i2=i2+1;
/*  7 */              }
                      ponta_de_prova(4);
                      ponta_de_prova(8);
/*  8 */              i2=A[i1];
/*  8 */              A[i1]=high;
/*  8 */              A[pos]=i2;
/*  8 */              i1=i1+1;
/*  8 */           }
                   ponta_de_prova(2);
                   ponta_de_prova(9);
/*  9 */           printf(" Fim do procedimento Sort \n");
                   fclose(path);
/*  9 */        }
