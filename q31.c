//grade of a student
#include <stdio.h>
int main(){
    int marks;
    printf("enter marks :");
    scanf("%d",&marks);
    switch(marks/10){
        case 10:
        {
            printf("GRADE: OUTSTANDING");
            break;
        }
        case 9:
        {
            printf("GRADE: A");
            break;
        }
        case 8:
        {
            printf("GRADE: B");
            break;
        }
        case 7:
        {
            printf("GRADE: C");
            break;
        }
        case 6:
        {
            printf("GRADE: D");
            break;
        }
        case 5:
        {
            printf("GRADE: E");
            break;
        }
        case 4:
        {
            printf("GRADE: F");
            break;
        }
        case 3:
        {
            printf("GRADE: F");
            break;
        }
        case 2:
        {
            printf("GRADE: F");
            break;
        }
        case 1:
        {
            printf("GRADE: F");
            break;
        }
    }
    return 0;
}