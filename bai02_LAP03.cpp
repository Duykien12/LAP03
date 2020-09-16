#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("Nhap so thuc x: ");
    scanf("%f", &x);
    
    float s= x/2.54;
    printf("%0.1f centimeters tuong duong %0.1f inches\n",x,s);
    
    float t= s/12;
    printf("%0.1f centimeters tuong duong %0.1f feet",x,t);
    
    return 0;
}
