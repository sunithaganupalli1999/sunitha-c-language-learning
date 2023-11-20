/* c programing 
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
Octal values, hexadecimal values, and decimal values can be stored in int data type in C.
Range : -2, 147, 483, 648 to 2, 147, 483, 647 
Size : 4 bytes
Format Specifier : % d
*/
#include <stdio.h>
  int main()
{
    int a = 9;
    int b = 4;
    printf("a>b: %d\n",a>b);    // if the value of a>b  becomes is true.
    printf("a>=b: %d\n",a>=b);  // if the value of a>=b  becomes true.
    printf("a<=b: %d\n",a<=b);  // if the value  less than or equal to  becomes true.
    printf("a<b: %d\n",a<b);    // if the value  less than  becomes true.
    printf("a==b: %d\n",a==b);  // if the values of two  are equal or not. becomes true.
    printf("a!=b: %d\n",a!=b);  // If the values are not equal, becomes true.
    return 0;
}