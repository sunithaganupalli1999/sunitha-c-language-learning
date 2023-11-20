#include<stdio.h>
int main()
{
    int studentmarks;
    printf("enter your hallticket no:");
    scanf("%d",&studentmarks);
    (studentmarks>=35)? printf(("pass studentmarks")):printf(("fail studentmarks"));
    return 0;
}