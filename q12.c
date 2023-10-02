//C program to check uppercase, lowercase and special character
 #include <stdio.h>
 int main(){
    char c;
    printf("enter character :");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("%c is uppercase",c);
    }
    else if (c>='a' && c<='z')
    {
        printf("%c is lowercase",c);
    }
    else{
        printf("%c is a special character ",c);
    }
    return 0;
 }