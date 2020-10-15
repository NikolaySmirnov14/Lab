#include <stdio.h>
#include <math.h>
int main()
{
float y;
float x;
printf("Введите значение аргумента х \n");
scanf("%f", &x);
y = 4*pow(x-3, 6) - 7*pow(x-3, 3) + 2;
printf("y = %f \n", y );

}