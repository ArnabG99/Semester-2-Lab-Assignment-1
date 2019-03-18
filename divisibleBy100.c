#include <stdio.h>
int main(){
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%100==0)
    {
        printf("%d is divisbe by 100",num);
    }else{
        printf("%d is not divisble by 100",num);
    }
    return 0;
}