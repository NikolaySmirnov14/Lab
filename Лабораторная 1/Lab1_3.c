#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float sr;
    printf("Введите числа a и b \n");
    scanf("%f", &a);
    scanf("%f", &b);
    sr=(a+b)/2;
    printf("Среднее арифметическое a и b равно %.2f\n", sr);
    return 0;
}
