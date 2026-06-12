#include <stdio.h>
int main()
{
 int n, i = 1, factorial = 1;
printf("Enter a number: ");
    scanf("%d", &n);
while(i <= n)
    {
     factorial = factorial * i;
        i++;
    } printf("Factorial of %d = %d", n, factorial);
 return 0;
}