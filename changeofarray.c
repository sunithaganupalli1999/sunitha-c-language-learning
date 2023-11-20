#include<stdio.h>
int main()
{
    int mynumbers[] = {28,35,42,51,68,78,86,97,108,117};
    mynumbers[0] = 65;
    printf("%d\n", mynumbers[0]);
    printf("%d\n", mynumbers[3]);
    printf("%d\n", mynumbers[6]);
    return 0;

}