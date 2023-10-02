//LCM of two numbers using while loop
#include <stdio.h>
int main(){
    int n1,n2,a,b;
    printf("input two numbers :");
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(n1!=n2){
        if (n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    a=a/n1;
    b=b/n1;
    printf("LCM is :%d",a*b*n1);
    return 0;
}