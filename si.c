#include <stdio.h>
int main()
{
    double p,r,t,i,a;
    printf("Enter principal:\n");
    scanf("%lf",&p);
    printf("Enter rate of interest per annum:\n");
    scanf("%lf",&r);
    printf("Enter duration in years:\n");
    scanf("%lf",&t);
    i=p*r*t/100;
    a=p+i;
    printf("Interest = %lf \n",i);
    printf("Amount = %lf \n",a);
    return 0;
}