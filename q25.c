// GCD of two numbers
#include <stdio.h>
int main(){
    int n1,n2;
    printf("input two numbers :");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2){
        if (n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    printf("GCD is :%d",n1);
    return 0;
}