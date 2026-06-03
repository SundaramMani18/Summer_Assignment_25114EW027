#include <stdio.h>
int main()
{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter  second number: ");
 scanf("%d", &b);
 while(a % b != 0)
a++;
printf("lcm = %d", a);
return 0;
}