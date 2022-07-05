#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,toplam=0,i=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
   
    }
    for(i=0;i<n;i++){
        toplam=toplam+arr[i];
    }    
    printf("%d",toplam);
    return 0;
}

