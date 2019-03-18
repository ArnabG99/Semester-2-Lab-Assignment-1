#include <stdio.h>
int main()
{
    int sal;
    printf("Enter sal salary: \n");
    double gross,hra,da;
    scanf("%d",&sal);
    if (sal>1 && sal<=4000) {
        hra = 0.1 * sal;
        da = 0.5 * sal;
    }
    if (sal>4000 && sal<=8000) {
        hra =  0.1*4000 + 0.2*(sal-4000);
        da = 0.5*4000 + 0.6*(sal-4000);
    }
    if (sal>8000 && sal<=12000) {
        hra =  0.1*4000 + 0.2*4000 + 0.25*(sal-8000);
        da = 0.5*4000 + 0.6*4000 + 0.7*(sal-8000);
    }
    if (sal>12000) {
        hra =  0.1*4000 + 0.2*4000 + 0.25*4000 + 0.3*( sal-12000);
        da = 0.5*4000 + 0.6*4000 + 0.7*4000 + 0.8*(sal-12000);
    }    
    gross = sal + hra + da;
    printf("HRA : %f \n",hra);
    printf("DA : %f \n",da);
    printf("Gross salary : %f \n",gross);
    return 0;
}
