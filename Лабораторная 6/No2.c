#include <stdio.h>

int main()
{
int z;
int m;
int c = 43;
int a = 6;
int b = 56;
z=c;
m=b;
b=a;
c=m;
a=z;
printf("A = %d \n", a);
printf("B = %d \n", b);
printf("C = %d \n", c);
} 