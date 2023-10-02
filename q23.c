//multiplication table of N
#include <stdio.h>
int main(){
    int i=0,N;
    printf("multiplication table of :");
    scanf("%d",&N);
    while(i<=10){
        printf("%d * %d = %d\n",N,i,(N*i));
        i=i+1;
    }
    return 0;
}