#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float s;
    float p; 
     printf("Введите числовые значения для сторон a и b \n");
    scanf("%f", &a);
    scanf("%f", &b);
    s=a*b;
    p=2*(a+b);
    printf("Площадь равна %.2f\n", s);
    printf("Периметр равен %.2f", p);
    return 0;
}
