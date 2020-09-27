#include <stdio.h>
#include <math.h>
int main()
{
float xa, ya, xb, yb, xc, yc;
float pp, P, S, rab, rac, rbc;
printf("Введите координаты вершины A \n");
scanf("%f\n", &xa);
scanf("%f", &ya);
printf("Введите координаты вершины B \n");
scanf("%f\n", &xb);
scanf("%f", &yb);
printf("Введите координаты вершины C \n");
scanf("%f\n", &xc);
scanf("%f", &yc);
rab=sqrt(pow((xa-xb), 2) + pow((ya-yb), 2));
printf("Длина отрезка AB %f \n", rab);
rbc=sqrt(pow((xb-xc), 2) + pow((yb-yc), 2));
printf("Длина отрезка BC %f \n", rbc);
rac=sqrt(pow((xa-xc), 2) + pow((ya-yc), 2));
printf("Длина отрезка AC %f \n", rac);
P=rab+rbc+rac;
pp=P/2;
S=sqrt(pp*(pp-rab)*(pp-rbc)*(pp-rac));
printf("Периметр равен%f\n", P);
printf("Площадь равна%f\n", S);
return 0;
}