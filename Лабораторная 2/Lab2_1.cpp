#include <stdio.h>
#include <math.h>
int main()
{
float x1, y1, x2, y2;
float r;
printf("Введите координаты x и y первой точки \n");
scanf("%f\n", &x1);
scanf("%f", &y1);
printf("Введите координаты x и y второй точки \n");
scanf("%f\n", &x2);
scanf("%f", &y2);
r=pow((x1-x2), 2) + pow((y1-y2), 2);
printf("Расстояние между точками равно %f ", sqrt(r));
return 0;
}