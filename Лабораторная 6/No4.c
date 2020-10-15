#include <stdio.h>
#include <math.h>
int main()
{
float y;
float x;
printf("Введите значение аргумента х \n");
scanf("%f", &x);
y=3*pow(x, 6) - 6*x*x - 7;
printf("y= %f \n", y );

}