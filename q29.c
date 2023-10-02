//print day of week names
#include <stdio.h>
int main(){
    int day;
    printf("enter date :");
    scanf("%d",&day);
    switch(day){
        case 1:
            {printf("MONDAY");
            break;}
        case 2:
           { printf("TUESDAY");
            break;}
        case 3:
            {printf("WEDNESDAY");
            break;}
        case 4:
        {
            printf("THURSDAY");
        }
        case 5:
        {
            printf("FRIDAY");
        }
        case 6:
        {
            printf("SATURDAY");
        }
        case 7:
        {
            printf("SUNDAY");
        }
    }
    return 0;
}