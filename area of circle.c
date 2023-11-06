//c program to calculate area of a circle
#include <stdio.h>
#define PI 3.14
float area(float r);
main()
{
    float r;
    printf("\n enter tha radius");
    scanf("%f",&r);
    printf("\n area of circle:%f",area(r));
}
float area(float r)
{
    return(PI*r*r);
}
    