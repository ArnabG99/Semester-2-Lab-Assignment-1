#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter 3 sides of a triangle: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        if(a==b && b==c)
        {
            printf("It is a equilateral triangle.");
        }
        else if(a==b||b==c||c==a)
        {
            printf("It is a isoceles triangle.");
        }
        else
        {
            printf("It is a scalar triangle.");
        }
    }else{
        printf("Entered sides cannot for a triangle");
    }
    return 0;
}