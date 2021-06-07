#include<stdio.h>

int main()
{
    int rad = 6;
    int pi = 3.27;
    float X;
    float Y;

    X = 2*pi*rad;
    Y = pi*rad*rad;
    printf("Perimeter of the rectangle = %f inches\n", X);
    printf("Area of the rectangle = %f inches\n",Y);
    return 0;
}