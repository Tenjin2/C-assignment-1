/*to find percentage of 5 subjects*/
#include <stdio.h>
int main(){
    int s,sum,n=5;
    while(n>0){
        printf("enter subject marks");
        scanf("%d",&s);
        sum=sum+s;
        n=n-1;
    }
    printf("percentage of 5 subjects is :%d",(sum/5));
    return 0;
}