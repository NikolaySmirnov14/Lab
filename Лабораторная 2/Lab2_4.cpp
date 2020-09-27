#include <stdio.h>
#include <math.h>
int main()
{
float xa, ya, xb, yb;
float P, S;
printf("Введите координаты вершины A \n");
scanf("%f\n", &xa);
scanf("%f", &ya);
printf("Введите координаты вершины B \n");
scanf("%f\n", &xb);
scanf("%f", &yb);
P=2*(abs(xa-xb)+abs(ya-yb));
printf("Периметр равен%f\n", P);
S=abs(xa-xb)*abs(ya-yb);
printf("Площадь равна%f\n", S);
return 0;
}