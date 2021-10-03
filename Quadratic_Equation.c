#include <stdio.h>
#include <math.h>

double calc (double a, double b, double c){
    
    double x1;
    double x2;
    
    
    double square = sqrt((b * b)- (4*a*c));
    x1=(-b + square)/(2*a);
    x2=(-b - square)/(2*a);
    
    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
}


void main()
{
    double a1, b1, c1;
    
    printf("Enter the a value:");
    scanf("%lf", &a1);
    printf("Enter the b value:");
    scanf("%lf", &b1);
    printf("Enter the c value:");
    scanf("%lf", &c1);
   
    calc (a1,b1,c1);
}
