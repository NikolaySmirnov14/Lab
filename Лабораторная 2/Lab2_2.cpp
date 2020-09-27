#include <stdio.h>
#include <math.h>
int main()
{
float xa, ya, xb, yb, xc, yc;
float rac, rbc, d;
printf("Введите координаты точки A \n");
scanf("%f\n", &xa);
scanf("%f", &ya);
printf("Введите координаты точки B \n");
scanf("%f\n", &xb);
scanf("%f", &yb);
printf("Введите координаты точки C \n");
scanf("%f\n", &xc);
scanf("%f", &yc);
rac=pow((xa-xc), 2) + pow((ya-yc), 2);
rbc=pow((xb-xc), 2) + pow((yb-yc), 2);
printf("Длина отрезка AC %f \n", sqrt(rac));
printf("Длина отрезка BC %f \n", sqrt(rbc));
printf("Сумма длин отрезков AC и BC %f \n", (sqrt(rac)+sqrt(rbc)));

return 0;
}