#include <stdio.h>
#include <stdlib.h>

int maior(int *v, int n)
{
    int i, iMaior;
    for(iMaior=0, i=1; i<n; i++)
    {
        if(v[i] > v[iMaior])
        {
            iMaior = i;
        }
    }
    return iMaior;
}

int * contaElementos(int *v, int n)
{
    int iMaior = maior(v, n), *vc = (int*) calloc(v[iMaior]+1, sizeof(int)), i;
    for(i=0; i<n; i++)
    {
        vc[v[i]]++;
    }
    return vc;
}

int * acumulaElementos(int *v, int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        v[i] += v[i-1];
    }
    return v;
}

void countingSort(int *v, int n)
{
    int *vCount, *vOrd, m, i;
    
    m=v[maior(v, n)];
    vCount = (int*) calloc(m+1, sizeof(int));
    vOrd = (int*) malloc(n*sizeof(int));
    
    vCount = contaElementos(v, n);
    vCount = acumulaElementos(vCount, m+1);
    
    for(i=0; i<n; i++)
    {
        vOrd[vCount[v[i]]-1] = v[i];
        vCount[v[i]]--;
    }
    
    for(i=0; i<n; i++)
    {
        v[i] = vOrd[i];
    }
}

int main()
{
    int *v, n, iMaior, i, *vc;
    scanf("%d", &n);
    while(n!=0)
    {
        v = (int*) malloc(n*sizeof(int));
        
        for(i=0; i<n; i++)
        {
            scanf("%d", &v[i]);
        }
        
        countingSort(v, n);
        
        for(i=0; i<n-1; i++)
        {
            printf("%d ", v[i]);
        }
        printf("%d\n", v[i]);
        
        free(v);
        
        scanf("%d", &n);
    }
    return 0;
}
