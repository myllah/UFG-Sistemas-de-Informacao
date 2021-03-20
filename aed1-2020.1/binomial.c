
#include <stdio.h>

unsigned long int binomial(unsigned long int n, unsigned long int k){
    if ((n == 0) || (k == n)) {
    return (1);
    }
    return (binomial(n-1,k) + binomial(n-1,k-1));
}

int main(){

    printf("%d", binomial(5,2));

}
