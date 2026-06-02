#include <stdio.h>
int main(){ 
     int n, a, b, c;
printf("Enter a  number: ");
scanf("%d", &n);
  a = n / 100;
  b = (n / 10) % 10;
  c = n % 10;
   if(a == c)
     printf("Palindrome Number");
    else
     printf("Not a Palindrome Number");
    return 0;
}