#include <stdio.h>
int main()
{
    int dec,rem,i;
    int bin[5];
    printf("Enter decimal number between 0 to 32. \n");
    scanf("%d",&dec);
    if(dec>0 && dec<32)
    {
        for(i=4;i>=0;i--)
        {
            rem = dec%2;
            bin[i]=rem;
            dec = dec/2;
        }
        printf("Binary:");
        for(i=0;i<5;i++)
        {
            printf("%d",bin[i]);
        }        
    }else{
        printf("Invalid Input");
    }    
    return 0;
}