#include <stdio.h>
int main(){
    float r,a,c;
    const float pi=3.14;
    printf("radius of circle is :");
    scanf("%f",&r);
    c=2*pi*r;
    a=pi*r*r;
    printf("circumference of circle :%f",c);
    printf("area of circle :%f",a);
    return 0;
}

