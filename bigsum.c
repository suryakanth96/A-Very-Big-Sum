#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long int s=0;
long int aVeryBigSum(int n, int ar_size, long int* ar) {
    for(int i=0;i<ar_size;i++)
        s=s+ar[i];
    return s;
}

int main() {
    int n; 
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}
