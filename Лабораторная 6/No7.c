#include <stdio.h>
#include <math.h>
int main()
{
float A;
float x;
float y;
printf("Введите значение A \n");
scanf("%f", &A);
x=A*A;
y=x*A;
x=x*y;
y=x*x;
x=x*y;

printf("%f\n", x);


}