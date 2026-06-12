#include <stdio.h>
int main()
{
int a, b;
int i=1;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter  second number: ");
 scanf("%d", &b);
 while(i%a!=0||i % b!=0){
    i++;
 };
 printf("LCM=%d\n",i);
    return 0; }