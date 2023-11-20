#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=50;//the variuable are declared to
    b=100;
    c=150;
    d=200;
    printf("sum of a and b %d\n",a==c);//checks two operands a,c are equal or not.if yes,then the condition becomes true.
    printf("sum of a and c %d\n", a>c);//the operand a is grater than operand c.if yes,then the condition become true.
    printf("sum of b and d %d\n",b<d);//the operands b isless than the operand d.if yes,then the condition become true.
    printf("sum of c and b %d\n",c<=b);//the operand c is less than or equal to operand a.if yes,then the condition become true.
    printf("sum of d and a %d\n",d==a);//the value of two operands are equal or not.if yes,then the condition becomes true.
    printf("sum of b and c %d\n",b>=c);//the oprand b is greater than or equal to the  operand.if yes,then the condition become true.
    printf("sum of c and a %d\n",c!=a);//the values of two operands are equal or not.if the values arenot equal,then the conditions become true.
    return 0;
}
