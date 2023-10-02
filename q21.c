// program of armstrong number using while
#include <stdio.h>
int main(){
    int a,b,c,i;
    printf("enter number :");
    scanf("%d",&a);
    i=a;
    while(a>0){
        b=a%10;
        c=c+(b*b*b);
        a=a/10;
    }
    if (i==c){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
    return 0;
}
