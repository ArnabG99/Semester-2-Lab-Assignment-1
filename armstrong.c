#include <stdio.h>
int main()
{
    int num,copy,rev=0,dig;
    printf("Enter a number:\n");
    scanf("%d",&num);
    copy = num;
    while(copy>0)
    {
        dig = copy%10;
        rev += dig*dig*dig;
        copy = copy/10;
    }
    if(rev==num)
    {
        printf("%d is Armstrong Number",num);
    }else{
        printf("%d is not Armstrong Number",num);
    }
    return 0;
}