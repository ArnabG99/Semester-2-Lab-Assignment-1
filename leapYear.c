#include <stdio.h>
int main()
{
    int yr,i;
    printf("Enter a year: \n");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
        {
            printf("%d is a leap year.",yr);
        }else{
            printf("%d is not a leap year",yr);
        }        
    }else{
        if(yr%4==0)
        {
            printf("%d is a leap year",yr);
        }else{
            printf("%d is not a leap year.",yr);
        }
    }
    return 0;
}