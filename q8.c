// to check number is positive or negative
#include <stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    if(n>0){
        printf("%d is positive",n);
    }
    else{
        printf("%d is negative",n);
    }
    return 0;
}