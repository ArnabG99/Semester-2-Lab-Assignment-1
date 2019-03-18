#include <stdio.h>
int main()
{
    int num,copy,rev=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    copy = num;
    while(copy>0)
    {
        rev = rev*10+copy%10;
        copy/=10;
    }
    if(num==rev)
    {
        printf("%d is a palindrome.",num);
    }else{
        printf("%d is not a palindrome.",num);
    }
    return 0;
}