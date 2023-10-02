/*to calculate simple interest*/
#include <stdio.h>
int main(){
    int P,R,T,I;
    printf("Principal, Annual Rate, Time");
    scanf("%d %d %d",&P,&R,&T);
    I=(P*R*T)/100;
    printf("simple interest :%d",I);
    return 0;
}