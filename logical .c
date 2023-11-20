#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a, and b:\n");
    scanf ("%d%d",&a,&b);
    printf("enter the valueof c :");
    scanf("%d%d",&c);
    printf("\n%d",(a<b)&&(a!=b));
    printf("\n%d",(c<a)&&(c>a));
    printf("\n%d",!(a==b),!(c==a));
    return 0;

}