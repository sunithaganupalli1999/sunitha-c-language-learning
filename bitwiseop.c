#include<stdio.h>
int main()
{
    int a = 10, b = 65;
    printf("bitwise and operator a&b = %d\n", a & b);
    printf("bitwise or operator a|b = %d\n", a | b);
    printf("bitwise and operator a^b = %d\n", a ^ b);
    printf("bitwise not operator ~a = %d\n", a =~ b);
    printf("left shift operator a<<1 = %d\n", a << 1);
    printf("right shift operator b>>1 = %d\n", b >> 1);
    return 0;
}