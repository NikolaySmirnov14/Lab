#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float sum;
    float raz;
    float proiz;
    float chas;
    printf("Введите числа a и b \n");
    scanf("%f", &a);
    scanf("%f", &b);
    sum=a+b;
    raz=a-b;
    proiz=a*b;
    chas=a/b;
    printf("Сумма a и b равна %.2f\n", sum);
    printf("Разность a и b равна %.2f\n", raz);
    printf("Проихведение a и b равно %.2f\n", proiz);
    printf("Частное a и b равно %.2f\n", chas);
    return 0;
}
