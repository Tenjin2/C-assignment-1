//fibonnaci series program from do while loop
#include <stdio.h>
int main(){
    int n,i=0,t=1;
    printf("number of terms :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i=i+t;
        t=i-t;
        n=n-1;
    }while(n>0);
    return 0;
}