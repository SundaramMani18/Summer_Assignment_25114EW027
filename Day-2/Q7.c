#include <stdio.h>
int main()
{
    int num, product = 1,digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    for( ;num != 0; num /= 10)
    {
        digit=num%10;
        product*=digit;
    }
     printf("Product of digits = %d", product);
      return 0;
}