#include <stdio.h>
int main()
{
    int p=1,i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=2;j>=i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d \t \t",p);
            p++;
        }
        printf("\n");
    }

}