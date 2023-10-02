//sum of natural numbers using while loop
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter till where you want to sum :");
    scanf("%d",&n);
    while(n>0){
        sum=sum + n;
        n=n-1;
    }
    printf("sum is :%d",sum);
    return 0;
}