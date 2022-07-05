#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e;
    scanf("%d", &n);
    a=n%10;//4
    b=n%100-a;//60
    c=n%1000-b-a;//500
    d=n%10000-c-b-a;//0
    e=n%100000-d-c-b-a;//10000
    a=log(a);
    b=log(b);
    c=log(c);
    d=log(d)
    printf("%d",a+b/10+c/100+d+e/10000);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

