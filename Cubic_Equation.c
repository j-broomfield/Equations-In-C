#include <stdio.h>
#include <math.h>


double calc (double a, double b, double c, double d){
    // declaring variables
    double f;
    double g;
    double h;
    
    double i;
    double j;
    double k;
    double l;
    double m;
    double n;
    double p;
    
    double x1;
    double x2;
    double x3;
    
    //cubic calculation
    f=((3*c/a)-((b*b)/(a*a)))/3;
    
    g=(((2*(b*b*b))/(a*a*a))-((9*b*c)/(a*a))+((27*d)/a))/27;
    
    h=((g*g)/4)+((f*f*f)/27);
    
    i =sqrt(((g*g)/4)-h); 
    
    j=cbrt(i); 
    
    k=acos(-(g/(2*i)));
    
    l=j*-1;
    
    m=cos(k/3);
    
    n=(sqrt(3))*(sin(k/3));
    
    p=(b/(3*a))*-1;
    
    x1=(2*j)*cos(k/3)-(b/(3*a));
    
    x2=l*(m+n)+p;
    
    x3=l*(m-n)+p;
    
    //Printing x1, x2, x3
    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
    printf("x3 = %lf\n", x3);
}


void main()
{
    double a1, b1, c1, d1;
    //scanning for user input
    printf("Enter the a value:");
    scanf("%lf", &a1);
    printf("Enter the b value:");
    scanf("%lf", &b1);
    printf("Enter the c value:");
    scanf("%lf", &c1);
    printf("Enter the d value:");
    scanf("%lf", &d1);
    
    calc (a1,b1,c1,d1);
} 
