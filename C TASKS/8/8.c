#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int maxOr=0,maxAnd=0,maxXor=0;

void calculate_the_maximum(int n, int k) {
  for(int i = 1 ; i<=n ; i++){
    for(int j=i+1 ; j<=n;j++){
    if(((i&j)>maxAnd) &&((i&j)<k))
    {
        maxAnd=i&j;
    }
    if(((i|j)>maxOr) &&((i|j)<k))
    {
        maxOr=i|j;
    }
    if(((i^j)>maxXor) &&((i^j)<k))
    {
        maxXor=i^j;
    }
}
}
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);
 
    return 0;
}

