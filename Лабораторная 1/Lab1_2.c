#include <stdio.h>
#include <math.h>
int main()
{
    float L;
    float d;
    float pi = 3.14;
    printf("Введите диаметр d \n");
    scanf("%f", &d);
    L=d*pi;
    printf("Длина окружности равна %.2f\n", L);
    return 0;
}
