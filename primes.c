#include <stdio.h>
int isPrime(int num)
{
    int i,flag=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;//returns 1 if prime else 0
}
int main()
{
    int x,y,i;
    printf("Enter limits X & Y: \n");
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(isPrime(i)==1)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}