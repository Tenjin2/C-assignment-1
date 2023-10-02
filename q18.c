//character is a vowel or not by if else
#include <stdio.h>
int main(){
    char c;
    printf("enter Character :");
    scanf("%C",&c);
    if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%C is a vowel",c);
    }
    else {
        printf("%C is a not a vowel",c);
    }
    return 0;
}