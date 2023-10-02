// reverse of a number using for loop
#include <stdio.h>
int main() {
    int a,b,c,i,sum=1;
    printf("number is : ");
    scanf("%d",&a);
    b=a%10;
    c=b*10;
    a=a/10;
    for(a;a>0;a=a/10){
        b=a%10;
        c=c+b;
        c=c*10;
    }
    c=c/10;
    printf("%d\n",c);
    return 0;
}