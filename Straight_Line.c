#include <stdio.h>

double calc (double x1, double y1, double x2, double y2){
    //y = mx + c
    
    double m;
    double c;
    double y;
    double x;
    // calculates m
    m = (y2-y1)/(x2-x1);
    //calculates c
    c = y1 - (m*x1);     
    printf("m = %lf\n", m);
    printf("c = %lf\n", c);
    printf("Y = %lf", m);
    printf("X + %lf", c);
       
}

void main()
{
    double a, b, c, d;
    
    printf("Enter the first x value:");
    scanf("%lf", &a);
    printf("Enter the first y value:");
    scanf("%lf", &b);
    printf("Enter the second x value:");
    scanf("%lf", &c);
    printf("Enter the second y value:");
    scanf("%lf", &d);
    
    calc (a,b,c,d);
}
