//count number of digit using while
#include <stdio.h>
int main(){
    int n,count=0;
    printf("write number :");
    scanf("%d",&n);
    while(n>0){
        count=count+1;
        n=n/10;
    }
    printf("number of digit :%d",count);
    return 0;
}