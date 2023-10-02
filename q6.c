/*convert temperature celsius into ferenheit*/
#include <stdio.h>
int main(){
    int C,F;
    printf("Temperature in celsius :");
    scanf("%d",&C);
    F=(C*1.8)+32;
    printf("Temperature :%d",F);
    return 0;
}