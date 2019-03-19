#include <stdio.h>
int main()
{
    int sal;
    printf("Enter sal salary: \n");
    double gross,hra,da;
    scanf("%d",&sal);
    if (sal>1 && sal<=4000) {
        hra = 0.1*sal;
        da = 0.5*sal;
    }
    if (sal>4000 && sal<=8000) {
        hra =  0.2*sal;
        da = 0.6*sal;
    }
    if (sal>8000 && sal<=12000) {
        hra =0.25*sal;
        da = 0.7*sal;
    }
    if (sal>12000) {
        hra = 0.3*sal;
        da = 0.8*sal;
    }    
    gross = sal + hra + da;
    printf("HRA : %f \n",hra);
    printf("DA : %f \n",da);
    printf("Gross salary : %f \n",gross);
    return 0;
}
