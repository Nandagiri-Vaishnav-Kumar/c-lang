#include<stdio.h>

int main()
{
    int hei = 7;
    int wid = 5;
    int X;
    int Y;
    X = 2*(hei+wid);
    Y = (hei*wid);
    printf("Perimeter of the rectangle = %d inches\n", X);
    printf("Area of the rectangle = %d square inches\n",Y);
    return 0;
}