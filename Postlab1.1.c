#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159265
int main ()
{
float a,b;
printf("Enter the Decimal Value=");
scanf("%f",&a);
printf("\nEnter the exponent=");
scanf("%f",&b);
printf("\nSine of %f is %f",a,sin(a*PI/180.00));
printf("\nCosine of %f is %f",a,cos(a*PI/180.00));
printf("\nTangent of %f is %f",a,tan(a*PI/180.00));
printf("\nNatural Log of %f is %f",a,log(a));
printf("\nCommon Log of %f is %f",a,log10(a));
printf("\nRaised to Power of %f is %f",a,pow(a,b));
printf("\nExponent of %f is %f",a,exp(a));
printf("\nSquare Root of %f is %f",a,sqrt(a));
printf("\nCeiling of %f is %f",a,ceil(a));
printf("\nSine of %f is %f",a,floor(a));
}             
