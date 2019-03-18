#include <stdio.h>
int main()
{
    char str[] = "ABCDEF";
    int i,j,k;
    for(i=0;i<7;i++)
    {
        for(j=0;j<=(6-i);j++)
        {
            printf("%c",str[j]);
        }
        if(i==0)
        {
            printf("GFEDCBA");
        }else{
            for(k=0;k<(i*2-1);k++)
            {
                printf(" ");
            }
            for(j=(6-i);j>=0;j--)
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}