#include <stdio.h>
int main()
{
    double cel,far;
    printf("Enter temperature in Celcius: \n");
    scanf("%lf",&cel);
    far = cel/100*180+32;
    printf("Temperature in F : %lf",far);
}