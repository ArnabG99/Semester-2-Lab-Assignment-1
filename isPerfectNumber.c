#include <stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum==num)
    {
        printf("%d is a Perfect Number.",num);
    }else{
        printf("%d is not a Perfect Number",num);
    }
    return 0;
}