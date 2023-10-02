// calculate factorial of a given number
#include <stdio.h>
int main(){
    int fact=1,n;
    printf("enter number whose factorial you want :");
    scanf("%d",&n);
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    printf("factorial is: %d",fact);
    return 0;
}