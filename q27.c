//palindrome program using while loop
#include <stdio.h>
int main(){
    int a,b,c,p,sum=1;
    printf("write number :");
    scanf("%d",&a);
    p=a;
    b=a%10;
    c=b*10;
    a=a/10;
    while(a>0){
        b=a%10;
        c=c+b;
        c=c*10;
        a=a/10;
    }
    c=c/10;
    if (c==p){
        printf("it is a palindrome number");
    }
    else{
        printf("it is not a palindrome number");
    }
    return 0;
}
/*used reverse of a number program and than checked if number is same or not.
if it displays same than palindrome else it is not.*/