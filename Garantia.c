#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    if(b==1)
        a = a*1.03;
    if(b==2) 
        a=a*1.05;
    printf("%.2lf",a);
    return 0;
}